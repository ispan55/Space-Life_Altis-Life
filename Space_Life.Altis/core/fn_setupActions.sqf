/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do {
	case civilian: {
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
        "Escorting") && !(player getVariable "transporting")']];
		//Carte identite
		life_actions = life_actions + [player addAction["<t color='#FFFFFF'>Montrer Identitée</t>",life_fnc_civIdentities,"",1,false,true,"",' playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
        //Passeport
        life_actions = life_actions + [player addAction["<t color='#FFFFFF'>Montrer Passeport</t>",life_fnc_civPassport,"",1,false,true,"",' playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
        //Bouchon
        player addAction["Mettre les bouchons",{0.5 fadeSound 0.1; life_earplugs = true; },"",-9999999,false,false,"","!life_earplugs"];
        player addAction["Enlever les bouchons",{0.5 fadeSound 1; life_earplugs = false; },"",-9999999,false,false,"","life_earplugs"];
	};
    case west: {
        //Badge
        life_actions = life_actions + [player addAction["<t color='#FFFFFF'>Montrer Badge</t>",life_fnc_copShowLicense,"",1,false,true,"",' playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
        //Bouchon
        player addAction["Mettre les bouchons",{0.5 fadeSound 0.1; life_earplugs = true; },"",-9999999,false,false,"","!life_earplugs"];
        player addAction["Enlever les bouchons",{0.5 fadeSound 1; life_earplugs = false; },"",-9999999,false,false,"","life_earplugs"];
    };
    case guer: {
        //Bouchon
        player addAction["Mettre les bouchons",{0.5 fadeSound 0.1; life_earplugs = true; },"",-9999999,false,false,"","!life_earplugs"];
        player addAction["Enlever les bouchons",{0.5 fadeSound 1; life_earplugs = false; },"",-9999999,false,false,"","life_earplugs"];
    }
};