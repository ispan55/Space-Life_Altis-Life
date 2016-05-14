#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminFree.sqf
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
};
if(player GVAR ["restrained",false]) then
{
	player setVariable ["restrained",false,true];
	detach player;
	//life_inv_handcuffs = life_inv_handcuffs +1;
	hint "Tu viens d'être Free' par un membre du staff.";
}
else
{
	hint "Vous venez d'être libérer par un membre du staff.";
};