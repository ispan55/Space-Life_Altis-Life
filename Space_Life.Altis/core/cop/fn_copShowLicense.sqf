/*
	Fichier: fn_passportCiv.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
private["_target", "_message","_coplevel","_rang"];

_target = cursorTarget;

if(playerSide != west) exitWith
{
	hint "Vous n'êtes pas un flic !";
};

if( isNull _target) then {_target = player;};

if( !(_target isKindOf "Man") ) then {_target = player;};

if( !(alive _target) ) then {_target = player;};

_coplevel = call life_coplevel;

switch ( _coplevel ) do
{
	case 1: { _rang = "Recrue"; };
	case 2: { _rang = "Sergent"; };
	case 3: { _rang = "Lieutenant"; };
	case 4: { _rang = "Capitaine"; };
	case 5: { _rang = "Major"; };
	case 6: { _rang = "Colonel"; };
	case 7: { _rang = "Général"; };
	default { _rank = "Gendarme"; };
};

_message = format["<img size='10' color='#FFFFFF' image='textures\insigne.paa'/><br/><br/><t size='2.5'>%1</t><br/><t size='1.8'>%2</t><br/><t size='1'>Gendarmerie Nationale</t>", name player, _rang];

[[player, _message],"life_fnc_copLicenseShown",_target,false] spawn life_fnc_MP;
