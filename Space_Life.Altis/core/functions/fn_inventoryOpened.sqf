#include "..\..\script_macros.hpp"
/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	For the mean time it blocks the player from opening another persons backpack
*/
private["_container","_unit"];
if(EQUAL(count _this,1)) exitWith {false};
_unit = SEL(_this,0);
_container = SEL(_this,1);

_isPack = getNumber(configFile >> "CfgVehicles" >> (typeOf _container) >> "isBackpack");if(_isPack == 1) then {	hint localize "STR_MISC_Backpack";	[] spawn {		waitUntil {!isNull (findDisplay 602)};		closeDialog 0;	};};//to this..._isPack = getNumber(configFile >> "CfgVehicles" >> (typeOf _container) >> "isBackpack");if(_isPack == 1 && playerSide != west) then {	hint localize "STR_MISC_Backpack";	[] spawn {		waitUntil {!isNull (findDisplay 602)};		closeDialog 0;	};};


if((typeOf _container) in ["Box_IND_Grenades_F","B_supplyCrate_F"]) exitWith {
	_house = nearestBuilding (getPosATL player);
	if(!(_house in life_vehicles) && {(_house GVAR ["locked",false])}) exitWith {
		hint localize "STR_House_ContainerDeny";
		true;
	};
};

private "_list";
_list = ["LandVehicle","Ship","Air"];
if(KINDOF_ARRAY(_container,_list)) exitWith {
	if(!(_container in life_vehicles) && {EQUAL((locked _container),2)}) exitWith {
		hint localize "STR_MISC_VehInventory";
		true;
	};
};

//Allow alive players who've been knocked out to be looted, just not the dead ones
if(_container isKindOf "Man" && !alive _container) exitWith {
	hint localize "STR_NOTF_NoLootingPerson";
	true;
};