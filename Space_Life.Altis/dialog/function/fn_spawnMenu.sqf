/*
	File: fn_spawnMenu.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the spawn point selection menu.
*/
private["_spCfg","_sp","_ctrl"];
disableSerialization;
_bool = [_this,0,false,[false]] call BIS_fnc_param;
_quit = false;
_wait = false;

if(_bool) then {
    _action = [format ["Etes-vous sûr de respawn?"],"Confirmation respawn","Non","Oui"] call BIS_fnc_guiMessage;
    if(_action) then {_quit = true;};
    _wait = true;
} else {_wait = true;};

waitUntil {_wait};

if(_quit) exitWith {};

if(_bool) then {
    closeDialog 0;
    life_respawned = true;
};

if(life_is_arrested) exitWith {
	[] call life_fnc_respawned;
};

if(life_respawned) then {
	[] call life_fnc_respawned;
};
cutText["","BLACK FADED"];
0 cutFadeOut 9999999;
if(!(createDialog "life_spawn_selection")) exitWith {[] call life_fnc_spawnMenu;};
(findDisplay 38500) displaySetEventHandler ["keyDown","_this call life_fnc_displayHandler"];

_spCfg = [playerSide] call life_fnc_spawnPointCfg;

_ctrl = ((findDisplay 38500) displayCtrl 38510);
{
	_ctrl lnbAddRow[(_spCfg select _ForEachIndex) select 1,(_spCfg select _ForEachIndex) select 0,""];
	_ctrl lnbSetPicture[[_ForEachIndex,0],(_spCfg select _ForEachIndex) select 2];
	_ctrl lnbSetData[[_ForEachIndex,0],(_spCfg select _ForEachIndex) select 0];
} foreach _spCfg;

_sp = _spCfg select 0; //First option is set by default

[((findDisplay 38500) displayCtrl 38502),1,0.1,getMarkerPos (_sp select 0)] call life_fnc_setMapPosition;
life_spawn_point = _sp;

ctrlSetText[38501,format["%2: %1",_sp select 1,localize "STR_Spawn_CSP"]];