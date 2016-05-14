/*
	Fichier: fn_adminScroll.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
_pathtotools = "core\admin\";
_EXECscript = 'player execVM "'+_pathtotools+'%1"';

	adminScroll =
	[
		"76561198154050322",	/* [Fondateur] Snake Erkans 			*/
		"76561198067614182",	/* [Fondateur] Dayle Ruskov 			*/
		"76561198049412229",	/* [Administrateur Sup.] Alan Martin	*/
		"76561198052288264",	/* [Administrateur] Jean Lucien			*/
		"76561198101979187",	/* [Opérateur] Corvo Attano				*/
		"76561198245397588",	/* [Opérateur] Arnaud Laurent			*/
		"76561198060904372",	/* [Modérateur] David Brone				*/
		"76561198070821803"		/* [Modérateur] Nicolas Bulteau			*/
	];

if((getPlayerUID player) in adminScroll) then
{
	if((getPlayerUID player) in adminScroll) then
	{
		adminmenu =
		[
			["<t color=""#FF4400"">" + ("IMPULSION MENU") + "</t>",true],
						["FOURRIÈRE",		[],"",-5,[["expression",format[_EXECscript,"fn_adminImpound.sqf"]]],"1","1"],
						["SUPPRIMER",		[],"",-5,[["expression",format[_EXECscript,"fn_adminDelete.sqf"]]],"1","1"],
						["ARSENAL",			[],"",-5,[["expression",format[_EXECscript,"fn_adminArsenal.sqf"]]],"1","1"],
						["MODE DIEU",		[],"",-5,[["expression",format[_EXECscript,"fn_adminGodMode.sqf"]]],"1","1"],
						["ME TP",			[],"",-5,[["expression",format[_EXECscript,"fn_adminTeleport.sqf"]]],"1","1"],
						["MARQUEURS",		[],"",-5,[["expression",format[_EXECscript,"fn_adminMarkers.sqf"]]],"1","1"],
					["",					[], "", -5, [["expression", ""]], "1", "0"],
					//["PAGE N°2", 					[], "#USER:ToolsMenu2", -5, [["expression", ""]], "1", "1"],
			["QUITTER", 					[], "", -5, [["expression", "pselect5 = 'exit';"]], "1", "1"]
		];
	};
} else {
	adminmenu =
	[
		["",true],
			["", 							[], "", -5, [["expression", ""]], "1", "0"],
		["QUITTER", 						[], "", -5, [["expression", ""]], "1", "1"]
	];
};

showCommandingMenu "#USER:adminmenu";