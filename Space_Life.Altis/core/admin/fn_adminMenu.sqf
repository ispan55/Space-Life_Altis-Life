#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminMenu.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};

private["_display","_list","_side"];

disableSerialization;

waitUntil {!isNull (findDisplay 2900)};

_display = findDisplay 2900;
_list = _display displayCtrl 2902;

if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};

switch(FETCH_CONST(life_adminlevel)) do
{
	case 1: {ctrlShow [2904,false];ctrlShow [2905,false];ctrlShow [2906,false];ctrlShow [2907,false];ctrlShow [2908,false];ctrlShow [2909,false];ctrlShow [2910,false];ctrlShow [2911,false];};
	case 2: {ctrlShow [2905,false];ctrlShow [2906,false];ctrlShow [2907,false];ctrlShow [2908,false];ctrlShow [2909,false];ctrlShow [2910,false];ctrlShow [2911,false];};
	case 3: {[2911,false];};
	case 4: {ctrlShow [2911,false];};
};
lbClear _list;
{
	_side = switch(side _x) do {case west: {"Cop"}; case civilian : {"Civ"}; default {"Unknown"};};
	_list lbAdd format["%1 - %2", _x getVariable["realname",name _x],_side];
	_list lbSetdata [(lbSize _list)-1,str(_x)];
}
foreach playableUnits;
if(FETCH_CONST(life_adminlevel) < 1) exitWith {closeDialog 0;};