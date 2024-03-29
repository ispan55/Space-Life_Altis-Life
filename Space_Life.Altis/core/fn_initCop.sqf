#include "..\script_macros.hpp"
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Cop Initialization file.
*/
private "_end";
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;

rulesok = false;
if(!createDialog "rules") exitWith {};
waitUntil{!isNull (findDisplay 32154)};
waitUntil{isNull (findDisplay 32154)};
if(!rulesok)then {        
        player enableSimulation false;
        ["rules",false,true] call BIS_fnc_endMission;
        sleep 35;
};
rulesok = nil;

if(life_blacklisted) exitWith {
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if(!(str(player) in ["cop_99"])) then {
	if((FETCH_CONST(life_coplevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then {
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 35;
	};
};


player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[false] spawn life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] call life_fnc_playerSkins;
[] call life_fnc_uniform; 