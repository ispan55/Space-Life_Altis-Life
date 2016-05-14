#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminCamera.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith { closeDialog 0; hint localize "STR_ANOTF_ErrorLevel"; };

[] spawn
{
	while {dialog} do
	{
		closeDialog 0;
		sleep 0.1;
	};
	[] call bis_fnc_camera;
};
