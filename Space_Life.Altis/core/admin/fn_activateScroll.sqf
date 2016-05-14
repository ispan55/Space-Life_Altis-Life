/*
	Fichier: fn_activateScroll.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
sleep 1;
waitUntil { alive player };
if((getPlayerUID player) in [
		"76561198108961913",	/* [Fondateur] Mathieu Worley 			*/
		"76561198209150884",	/* [Fondateur] Keasor Smith     		*/
		"76561198202216222",	/* [Administrateur] Aleksey  			*/
	]) then
	{
		player addaction
		[
			("<t color=""#FF4400"">" + ("Tools Menu") + "</t>"),
			"core\admin\fn_adminScroll.sqf",
			"",
			-5,
			false,
			true,
			"",
			""
		];
	};