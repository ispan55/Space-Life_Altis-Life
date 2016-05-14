/*
	Fichier: fn_loopScroll.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
while {true} do
{
  waitUntil {alive vehicle player};
 [] execVM "core\admin\fn_activateScroll.sqf";


  waitUntil {!alive player};
};