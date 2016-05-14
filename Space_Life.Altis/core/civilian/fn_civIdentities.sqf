/*
	Fichier: fn_civIdentities.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
private["_target", "_message"];

_target = cursorTarget;

if(playerSide != civilian) exitWith
{
	hint "Vous n'êtes pas un civil !";
};

if( isNull _target) then {_target = player;};

if( !(_target isKindOf "Man") ) then {_target = player;};

if( !(alive _target) ) then {_target = player;};

_message = format["<img size='10' color='#FFFFFF' image='textures\roleplay\civ\identity.jpg'/><br/><br/><t size='2.5'>%1</t><br/><t size='1'>Space Life</t>", name player, _rang];

[[player, _message],"life_fnc_identitiesCiv",_target,false] spawn life_fnc_MP;