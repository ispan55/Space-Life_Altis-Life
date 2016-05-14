#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminImpound.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

	_target = ["currentTarget"] call _getVariable;
	if(cursorTarget in vehicles) then
	{
		_vehicle = cursorTarget;
		_vehicleData = _vehicle getVariable ["vehicle_info_owners",[]];[_vehicle,true,player] remoteExecCall ["TON_fnc_vehicleStore",0];
		systemchat ("Mise en fourrière réussie");
		[
			0,
			"STR_NOTF_HasImpounded",
			true,
			[name _target,(_vehicleData select 0) select 1,getText(configFile >> "CfgVehicles" >> typeof _vehicle >> "DisplayName")]
		] remoteExecCall ["life_fnc_broadcast",1];
	} else {
		systemchat ("vous ne regardez pas de véhicule");
};