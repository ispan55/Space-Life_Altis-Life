#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminGodMode.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith { closeDialog 0; hint localize "STR_ANOTF_ErrorLevel"; };

[] spawn
{
	if(life_god) then
	{
		life_god = false;
		hint "Votre GodMod est maintenant désactivé.";
		player allowDamage true;
		player setUnitRecoilCoefficient 1;
	}
	else
	{
		life_god = true;
		hint "Votre GodMod est maintenant activé.";
		player allowDamage false;
		player setUnitRecoilCoefficient 0;
		while{life_god} do
		{
			life_hunger = 100;
			life_thirst = 100;
			_PW = primaryWeapon player;
			_SW = secondaryWeapon player;
			player setAmmo[_PW,999];
			player setAmmo[_SW,999];
			(vehicle player) setVehicleAmmo 1;
			(vehicle player) setDammage 0;
			(vehicle player) setFuel 1;
			sleep 0.01;
		};
	};
};