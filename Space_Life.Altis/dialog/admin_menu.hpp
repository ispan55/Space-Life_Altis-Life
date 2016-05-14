class life_admin_menu
{
	idd = 2900;
	name= "life_admin_menu";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_adminMenu;";
	class controlsBackground
	{
		class Life_RscTitleBackground:Life_RscText
		{
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.8;
			h = (1 / 25);
		};
		class MainBackground:Life_RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.8;
			h = 0.6 - (2 / 250);
		};
	};
	class controls
	{
		class Title : Life_RscTitle
		{
			colorBackground[] = {0, 0, 0, 0};
			idc = 2901;
			text = "$STR_Admin_Title";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
        
		class PlayerList_Admin : Life_RscListBox
		{
			idc = 2902;
			text = "";
			sizeEx = 0.035;
			onLBSelChanged = "[_this] spawn life_fnc_adminQuery";
			x = 0.12; y = 0.26;
			w = 0.30; h = 0.4;
		};
        
		class PlayerBInfo : Life_RscStructuredText
		{
			idc = 2903;
			text = "";
			x = 0.42;
			y = 0.25;
			w = 0.35;
			h = 0.6;
		};
        
		class CloseButtonKey : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 1;
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class AdminID : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_GetID";
			onButtonClick = "[] call life_fnc_admingetID;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
		class ATM : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_ATM";
			onButtonClick = "[] call life_fnc_adminATM;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class Spectate : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_Spectate";
			onButtonClick = "[] call life_fnc_adminSpectate;";
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class Teleport : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_Teleport";
			onButtonClick = "[] call life_fnc_adminTeleport;";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class TPlayer : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_TPlayer";
			onButtonClick = "[] call life_fnc_adminTPlayer;";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class God : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_God";
			onButtonClick = "[] call life_fnc_adminGodMode;";
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class Freeze : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_Freeze";
			onButtonClick = "[] call life_fnc_adminFreeze;";
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class Markers : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_Markers";
			onButtonClick = "[] spawn life_fnc_adminMarkers;";
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.88 - (1 / 25);
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class FreeCam : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_FreeCam";
			onButtonClick = "[] spawn life_fnc_adminCamera;";
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class Free : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_Free";
			onButtonClick = "[] spawn life_fnc_adminFree;";
			x = 0.58 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.885;
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class AdminMorph : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_Morph";
			onButtonClick = "[] call life_fnc_adminUniform";
			x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.93;
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class AdminArsenal : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_Arsenal";
			onButtonClick = "[] call life_fnc_adminArsenal";
			x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.93;
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class AdminImpound : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_Impound";
			onButtonClick = "[] call life_fnc_adminImpound";
			x = 0.26 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.93;
			w = (6.25 / 40);
			h = (1 / 25);
		};
        
		class AdminDelete : Life_RscButtonMenu
		{
			idc = -1;
			text = "$STR_Admin_Delete";
			onButtonClick = "[] call life_fnc_adminDelete";
			x = 0.42 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
			y = 0.93;
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};