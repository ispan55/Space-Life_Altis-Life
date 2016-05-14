#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminArsenal.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 3) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};
["Open",true] spawn BIS_fnc_arsenal;