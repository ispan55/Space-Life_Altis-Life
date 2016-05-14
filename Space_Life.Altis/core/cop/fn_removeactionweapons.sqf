/*
	Fichier: fn_removeactionweapons
	Serveur: www.space-life.com
	Dev: Space Life Team
*/

private["_unit"];

_unit = cursorTarget;
if(isNull _unit) exitWith {}; //Not valid
if(side _unit == west) exitWith {};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};


[player] remoteExec ["life_fnc_removeweapons",_unit];

hint "Les armes ont été retirées du joueur.";