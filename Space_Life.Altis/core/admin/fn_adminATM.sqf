#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminATM.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith { closeDialog 0; hint localize "STR_ANOTF_ErrorLevel"; };
[] spawn
{
	while {dialog} do
	{
		closeDialog 0;
		sleep 0.1;
	};
	[] spawn life_fnc_atmMenu;
};