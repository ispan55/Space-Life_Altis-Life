/*
	Fichier: fn_removeweapons
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
removeAllWeapons player;

[] call life_fnc_saveGear;
[] call SOCK_fnc_updateRequest;

titleText["Les armes ont été saisies.","PLAIN"];