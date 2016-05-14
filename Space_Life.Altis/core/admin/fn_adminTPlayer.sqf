#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminTPlayer.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith { closeDialog 0; hint localize "STR_ANOTF_ErrorLevel"; };

private["_target"];

_target = lbData[2902,lbCurSel (2902)];
_target = call compile format["%1", _target];

if(isNil "_target") exitwith {};
if(isNull _target) exitWith {};
if(_unit == player) exitWith {hint localize "STR_ANOTF_Error";};

_target setPos (getPos player);

hint format["%1 vient d'être téléporté sur toi.",_target getVariable["realname",name _target]];