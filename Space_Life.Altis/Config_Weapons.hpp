/*
*    Format:
*        level: ARRAY (This is for limiting items to certain things)
*            0: Variable to read from
*            1: Variable Value Type (SCALAR / BOOL / EQUAL)
*            2: What to compare to (-1 = Check Disabled)
*            3: Custom exit message (Optional)
*
*    items: { Classname, Itemname, BuyPrice, SellPrice }
*
*    Itemname only needs to be filled if you want to rename the original object name.
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "hgun_ACPC2_F", "", 10000, -1 },
			{ "9Rnd_45ACP_Mag", "", 150, -1 },
			{ "hgun_Pistol_heavy_01_F", "", 8750, -1 },
			{ "11Rnd_45ACP_Mag", "", 200, -1 },
            { "hgun_Rook40_F", "", 17500, 500 },
			{ "16Rnd_9x21_Mag", "", 150, -1 },
			{ "30Rnd_9x21_Mag", "", 350, -1 },
			{ "hgun_P07_F", "", 13500, -1 },
			{ "16Rnd_9x21_Mag", "", 250, -1 },
			{ "30Rnd_9x21_Mag", "", 450, -1 },
            { "hgun_PDW2000_F", "", 29000, -1 },
			{ "30Rnd_9x21_Mag", "", 350, -1 },
            { "optic_ACO_grn_smg", "", 2500, 250 },
            { "V_Rangemaster_belt", "", 4900, -1 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
			{ "srifle_GM6_F", "", 285000, 10500 },
			{ "srifle_GM6_camo_F", "", 295000, 10500 },
			{ "5Rnd_127x108_Mag", "", 275, -1 },
			{ "srifle_DMR_05_blk_F", "", 185000, 10500 },
			{ "srifle_DMR_05_hex_F", "", 185000, 10500 },
			{ "srifle_DMR_05_tan_f", "", 185000, 10500 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 275, -1 },
			{ "srifle_DMR_01_F", "", 50000, 2500 },
			{ "10Rnd_762x54_Mag", "", 275, -1 },
			{ "srifle_EBR_F", "", 85500, 6500 },
			{ "20Rnd_762x51_Mag", "", 275, -1 },
			{ "LMG_Mk200_F", "", 95000, 6500 },
			{ "200Rnd_65x39_cased_Box", "", 150, -1 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 275, -1 },
			{ "LMG_Zafir_F", "", 185000, 9500 },
			{ "150Rnd_762x54_Box", "", 280, -1 },
			{ "150Rnd_762x54_Box_Tracer", "", 350, -1 },
			{ "arifle_MX_F", "", 49500, 6500 },
			{ "arifle_MXM_F", "", 65000, 6500 },
			{ "30Rnd_65x39_caseless_mag_Tracer", "", 275, -1 },
			{ "arifle_Mk20_F", "", 35500, 6500 },
			{ "30Rnd_556x45_Stanag", "", 300, -1 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 275, -1 },
            { "arifle_Katiba_F", "", 55000, 5000 },
			{ "30Rnd_65x39_caseless_green", "", 275, -1 },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 275, -1 },
			{ "arifle_TRG20_F", "", 25000, 2500 },
			{ "30Rnd_556x45_Stanag", "", 300, -1 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 300, -1 },
            { "arifle_SDAR_F", "", 20000, 7500 },
			{ "30Rnd_556x45_Stanag", "", 300, -1 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 275, -1 },
			{ "optic_LRPS", "", 6500, -1 },
			{ "optic_DMS", "", 5500, -1 },
			{ "optic_NVS", "", 12500, -1 },
			{ "optic_MRCO", "", 275, -1 },
            { "optic_ACO_grn", "", 3500, 350 },
            { "optic_Holosight", "", 3600, 275 },
			{ "optic_Arco", "", 5500, -1 },
			{ "optic_AMS", "", 8500, -1 },
			{ "optic_AMS_snd", "", 8500, -1 },
			{ "optic_KHS_blk", "", 11500, -1 },
			{ "optic_KHS_hex", "", 11500, -1 },
			{ "optic_KHS_old", "", 11500, -1 },
			{ "optic_KHS_tan", "", 11500, -1 },
			{ "bipod_01_F_snd", "", 15000, -1 },
			{ "bipod_01_F_blk", "", 15000, -1 },
			{ "bipod_01_F_mtp", "", 15000, -1 },
			{ "bipod_02_F_blk", "", 15000, -1 },
			{ "bipod_02_F_tan", "", 15000, -1 },
			{ "bipod_02_F_hex", "", 15000, -1 },
			{ "bipod_03_F_blk", "", 15000, -1 },
			{ "bipod_03_F_oli", "", 15000, -1 },
			{ "muzzle_snds_H", "", 5000, -1 },
			{ "muzzle_snds_L", "", 5000, -1 },
			{ "muzzle_snds_M", "", 5000, -1 },
			{ "muzzle_snds_B", "", 5000, -1 },
			{ "muzzle_snds_H_MG", "", 5000, -1 },
			{ "muzzle_snds_338_black", "", 5000, -1 },
			{ "muzzle_snds_338_sand", "", 5000, -1 },
			{ "muzzle_snds_93mmg", "", 5000, -1 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500 },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1 },
            { "hgun_ACPC2_F", "", 4500, -1 },
            { "hgun_PDW2000_F", "", 9500, -1 },
            { "optic_ACO_grn_smg", "", 950, 250 },
            { "V_Rangemaster_belt", "", 1900, -1 },
            { "16Rnd_9x21_Mag", "", 25, -1 },
            { "9Rnd_45ACP_Mag", "", 45, -1 },
            { "6Rnd_45ACP_Cylinder", "", 50, -1 },
            { "30Rnd_9x21_Mag", "", 75, -1 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ItemMap", "", 50, 35 },
            { "ItemCompass", "", 50, 25 },
            { "ItemWatch", "", 50, -1 },
            { "ToolKit", "", 15000, 100 },
            { "FirstAidKit", "", 150, 65 },
            { "NVGoggles", "", 2000, 980 },
            { "Chemlight_red", "", 300, -1 },
            { "Chemlight_yellow", "", 300, 50 },
            { "Chemlight_green", "", 300, 50 },
            { "Chemlight_blue", "", 300, 50 }
        };
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_sdar_F", "Taser Rifle", 20000, 7500 },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650 },
            { "hgun_P07_F", "", 7500, 1500 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "Binocular", "", 150, -1 },
            { "ItemGPS", "", 100, 45 },
            { "ToolKit", "", 2500, 100 },
            { "muzzle_snds_L", "", 650, -1 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 2500, 100 },
            { "NVGoggles", "", 2000, 980 },
            { "16Rnd_9x21_Mag", "", 50, -1 },
            { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 125, -1 }
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 2, "You must be a Patrol Officer Rank!" };
        items[] = {
            { "arifle_MX_F", "", 35000, 7500 },
			{ "srifle_LRR_F ", "", 185000, 10500 },
            { "SMG_02_ACO_F", "", 30000, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "MineDetector", "", 1000, 500 },
            { "acc_flashlight", "", 750, 100 },
            { "optic_Holosight", "", 1200, 275 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
            { "30Rnd_65x39_caseless_mag", "", 130, -1 },
            { "30Rnd_9x21_Mag", "", 250, -1 },
			{ "7Rnd_408_Mag", "", 500, -1 }
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        license = "";
        level[] = { "life_coplevel", "SCALAR", 3, "You must be a Sergeant Rank!" };
        items[] = {
            { "SMG_02_ACO_F", "", 15000, -1 },
            { "hgun_ACPC2_F", "", 17500, -1 },
            { "HandGrenade_Stone", "Flashbang", 1700, -1 },
            { "arifle_MXC_F", "", 30000, 5000 },
            { "optic_Arco", "", 2500, -1 },
            { "muzzle_snds_H", "", 2750, -1 },
            { "30Rnd_65x39_caseless_mag", "", 100, -1 },
            { "30Rnd_9x21_Mag", "", 60, -1 },
            { "9Rnd_45ACP_Mag", "", 200, -1 }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100, 45 },
            { "Binocular", "", 150, -1 },
            { "ToolKit", "", 2500, 100 },
            { "FirstAidKit", "", 150, 65 },
            { "Medikit", "", 2500, 100 },
            { "NVGoggles", "", 1200, 980 },
            { "B_FieldPack_ocamo", "", 3000, -1 }
        };
    };
};
