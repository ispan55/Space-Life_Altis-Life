#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminDelete.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};

private["_target"];

_target = cursorTarget;

if(isNil "_target") exitWith {};
if(isNull _target) exitWith {};
if(_target == player) exitWith {hint "Par sécurité, il est impossible de supprimer un joueur.";};

deleteVehicle _target;
closeDialog 0;
hint "L'objet que tu regardais vient d'être supprimé définitivement du serveur.";