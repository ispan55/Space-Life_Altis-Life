#include "..\..\script_macros.hpp"
/*
	Fichier: fn_adminMarkers.sqf
	Serveur: www.space-life.com
	Dev: Space Life Team
*/
if(FETCH_CONST(life_adminlevel) < 2) exitWith {closeDialog 0; hint localize "STR_ANOTF_ErrorLevel";};
life_markers = !life_markers;
if(life_markers) then
{
	PlayerMarkers = [];
	FinishedLoop = false;
	hint localize "STR_ANOTF_MEnabled";
//	openMap [true, false];
	while{life_markers} do
	{
		{ if !(_x in allUnits) then { deleteMarkerLocal str _x; }; }
		forEach PlayerMarkers;
		PlayerMarkers = [];
		{
			if(alive _x && isplayer _x) then
			{
				deleteMarkerLocal str _x;
				_pSee = createMarkerLocal [str _x,getPos _x];
				_pSee setMarkerTypeLocal "Mil_dot";
				_pSee setMarkerPosLocal getPos _x;
				_pSee setMarkerSizeLocal [1,1];
				_pSee setMarkerTextLocal format['%1',_x getVariable["realname",name _x]];
				_pSee setMarkerColorLocal ("ColorBlack");
				PlayerMarkers = PlayerMarkers + [_x];
			};
		}
		forEach allUnits;
		sleep 0.4;
	};
	FinishedLoop = true;
}
else
{
	if(isNil "FinishedLoop") exitWith {};
	hint localize "STR_ANOTF_MDisabled";
	waitUntil{FinishedLoop};
	{
		deleteMarkerLocal str _x;
	}
	forEach PlayerMarkers;
};