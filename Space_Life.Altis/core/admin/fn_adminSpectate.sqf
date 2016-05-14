#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminSpectate.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith { closeDialog 0; hint localize "STR_ANOTF_ErrorLevel"; };

private["_unit"];

_unit = lbData[2902,lbCurSel (2902)];
_unit = call compile format["%1", _unit];

if(isNil "_unit") exitwith {};
if(isNull _unit) exitWith {};
if(_unit == player) exitWith {hint localize "STR_ANOTF_Error";};

[] spawn { while {dialog} do { closeDialog 0; sleep 0.1; }; };

_unit switchCamera "INTERNAL";

hint format["You are now spectating %1 \n\n Press F10 to stop Spectating.",_unit getVariable["realname",name _unit]];
AM_Exit = (findDisplay 46) displayAddEventHandler ["KeyDown","if((_this select 1) == 68) then {(findDisplay 46) displayRemoveEventHandler ['KeyDown',AM_Exit];player switchCamera 'INTERNAL';hint 'You have stopped spectating';};false"];