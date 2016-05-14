#include "..\script_macros.hpp"
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the medic..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

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

if((FETCH_CONST(life_medicLevel)) < 1 && (FETCH_CONST(life_adminlevel) == 0)) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};

[false] spawn life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] call life_fnc_playerSkins;
[] call life_fnc_uniform; 