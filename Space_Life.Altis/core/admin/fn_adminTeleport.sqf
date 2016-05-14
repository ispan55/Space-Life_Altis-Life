#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminTeleport.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith { closeDialog 0; hint localize "STR_ANOTF_ErrorLevel"; };

[] spawn { while {dialog} do { closeDialog 0; sleep 0.1; }; };
TP =
{
	_pos = [_this select 0, _this select 1, _this select 2];
	(vehicle player) setpos [_pos select 0, _pos select 1, 0];
	onMapSingleClick "";
	openMap [false, false];
	hint "Téléportation effectué.";
};
openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call TP";