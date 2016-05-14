#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminUniform.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 1) exitWith { closeDialog 0; hint localize "STR_ANOTF_ErrorLevel"; };

if (uniform player != "U_B_Protagonist_VR") then
{
	player forceAddUniform "U_B_Protagonist_VR";
    player forceAddItems "G_Goggles_VR";
    player forceAssignItem "G_Goggles_VR";
    player forceAddItem "ItemMap";
    player forceAssignItem "ItemMap";
    player forceAddItem "ItemCompass";
    player forceAssignItem "ItemCompass";
    player forceAddItem "ItemWatch";
    player forceAssignItem "ItemWatch";
}
else
{
	player forceAddUniform "U_O_Protagonist_VR";
    player forceAddGoggles "G_Goggles_VR";
    player forceAddItem "ItemMap";
    player forceAssignItem "ItemMap";
    player forceAddItem "ItemCompass";
    player forceAssignItem "ItemCompass";
    player forceAddItem "ItemWatch";
    player forceAssignItem "ItemWatch";
}
else
{
	player forceAddUniform "U_I_Protagonist_VR";
    player forceAddGoggles "G_Goggles_VR";
    player forceAddItem "ItemMap";
    player forceAssignItem "ItemMap";
    player forceAddItem "ItemCompass";
    player forceAssignItem "ItemCompass";
    player forceAddItem "ItemWatch";
    player forceAssignItem "ItemWatch";
}
else
{
	player forceAddUniform "U_B_Soldier_VR";
    player forceAddItems "G_Goggles_VR";
    player forceAssignItem "G_Goggles_VR";
    player forceAddItem "ItemMap";
    player forceAssignItem "ItemMap";
    player forceAddItem "ItemCompass";
    player forceAssignItem "ItemCompass";
    player forceAddItem "ItemWatch";
    player forceAssignItem "ItemWatch";
}
else
{
	player forceAddUniform "U_I_Soldier_VR";
    player forceAddItems "G_Goggles_VR";
    player forceAssignItem "G_Goggles_VR";
    player forceAddItem "ItemMap";
    player forceAssignItem "ItemMap";
    player forceAddItem "ItemCompass";
    player forceAssignItem "ItemCompass";
    player forceAddItem "ItemWatch";
    player forceAssignItem "ItemWatch";
}
else
{
	player forceAddUniform "U_C_Soldier_VR";
    player forceAddItems "G_Goggles_VR";
    player forceAssignItem "G_Goggles_VR";
    player forceAddItem "ItemMap";
    player forceAssignItem "ItemMap";
    player forceAddItem "ItemCompass";
    player forceAssignItem "ItemCompass";
    player forceAddItem "ItemWatch";
    player forceAssignItem "ItemWatch";
}
else
{
	player forceAddUniform "U_O_Soldier_VR";
    player forceAddItems "G_Goggles_VR";
    player forceAssignItem "G_Goggles_VR";
    player forceAddItem "ItemMap";
    player forceAssignItem "ItemMap";
    player forceAddItem "ItemCompass";
    player forceAssignItem "ItemCompass";
    player forceAddItem "ItemWatch";
    player forceAssignItem "ItemWatch";
};