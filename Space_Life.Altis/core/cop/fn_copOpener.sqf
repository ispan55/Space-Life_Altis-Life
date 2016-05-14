/*
 Ouverture de porte automatique avec une Touche = O
*/

{
	if (_x animationPhase "Door_1_rot" == 1) then {
		_x animate ["Door_1_rot", 0];
        hint composeText [ image "icons\lock.paa", " Barriere Fermée" ];
	} 
	else 
	{
		_x animate ["Door_1_rot", 1];
        hint composeText [ image "icons\unlock.paa", " Barriere Ouverte" ];
	};
	
} forEach (nearestObjects [player, ["Land_BarGate_F"], 20]);