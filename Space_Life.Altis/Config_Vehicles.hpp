class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    */
    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 3000, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 14000, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_F", 35000, { "driver" }, { "", "", -1 } },
            { "C_SUV_01_F", 38000, { "driver" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 130000, { "driver" }, { "", "", -1 } },
            { "C_Van_01_transport_F", 40000, { "driver" }, { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", 4000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 4000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 4000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 4000, { "driver" }, { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", 10000, { "" }, { "", "", -1 } },
            { "I_Truck_02_medical_F", 25000, { "" }, { "", "", -1 } },
            { "O_Truck_03_medical_F", 45000, { "" }, { "", "", -1 } },
            { "B_Truck_01_medical_F", 60000, { "" }, { "", "", -1 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "O_Heli_Light_02_unarmed_F", 95000, { "mAir" }, { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", 45000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 118000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_covered_F", 190000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_transport_F", 248000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 885000, { "trucking" }, { "", "", -1 } },
			{ "B_Truck_01_covered_F", 295000, { "trucking" }, { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 3500, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_F", 45000, { "" }, { "", "", -1 } },
            { "O_MRAP_02_F", 515000, { "" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 295000, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", 1000000, { "rebel" }, { "", "", -1 } },
			{ "O_Truck_03_transport_F", 215000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_03_covered_F", 275000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_03_device_F", 1750000, { "trucking" }, { "", "", -1 } }
        };
    };

    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", 25000, { "" }, { "", "", -1 } },
            { "C_SUV_01_F", 20000, { "" }, { "", "", -1 } },
			{ "C_Hatchback_01_sport_F", 55000, { "", "", -1 } },
            { "B_MRAP_01_F", 90000, { "" }, { "life_coplevel", "SCALAR", 4 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", 355000, { "pilot" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 700000, { "pilot" }, { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", 25000, { "cAir" }, { "", "", -1 } },
            { "B_Heli_Transport_01_F", 2950000, { "cAir" }, { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class cop_airhq {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", 25000, { "cAir" }, { "", "", -1 } },
            { "B_Heli_Transport_01_F", 2950000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_MRAP_01_hmg_F", 1500000, { "" }, { "life_coplevel", "SCALAR", 5 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "C_Boat_Civil_01_police_F", 40000, { "cg" }, { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", 80000, { "cg" }, { "", "", -1 } },
            { "B_SDV_01_F", 200000, { "cg" }, { "", "", -1 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", 5000, { "boat" }, { "", "", -1 } },
            { "C_Boat_Civil_01_F", 48000, { "boat" }, { "", "", -1 } },
            { "B_SDV_01_F", 95000, { "boat" }, { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    storageFee (Getting vehicles out of garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    garageSell (Selling vehicles from garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    	INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    */

    class Default {
        vItemSpace = -1;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 1200;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 1000, 0 };
        garageSell[] = { 0, 0, 10000, 0 };
        insurance = 1000;
        chopShop = 4000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 12000, 0 };
        insurance = 1000;
        chopShop = 6000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 2500, 0 };
        garageSell[] = { 0, 0, 15000, 0 };
        insurance = 1000;
        chopShop = 10500;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 100, 100, 0, 0 };
        garageSell[] = { 500, 500, 0, 0 };
        insurance = 1000;
        chopShop = 2000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        storageFee[] = { 0, 25000, 0, 0 };
        garageSell[] = { 0, 35000, 0, 0 };
        insurance = 1000;
        chopShop = 22000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        storageFee[] = { 60000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 200000;
        textures[] = {};
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
        garageSell[] = { 0, 21000, 0, 0 };
        insurance = 1000;
        chopShop = 5000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 25000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 60000;
        textures[] = { };
    };
	
    class O_Truck_03_device_F {
        vItemSpace = 740;
        storageFee[] = { 60000, 0, 0, 0 };
        garageSell[] = { 100000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 350000;
        textures[] = { };
    };
	
	class O_Truck_03_covered_F {
        vItemSpace = 480;
        storageFee[] = { 20000, 0, 0, 0 };
        garageSell[] = { 30000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 25000;
        textures[] = { };
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 2500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        storageFee[] = { 200000, 0, 0, 0 };
        garageSell[] = { 100000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 115000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 2000, 0, 0, 0 };
        garageSell[] = { 6500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 1500, 0, 0 };
        garageSell[] = { 0, 4500, 0, 0 };
        insurance = 1000;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 30000, 0, 0, 0 };
        garageSell[] = { 88000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 50000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 15000, 0, 0, 0 };
        garageSell[] = { 30000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 30000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 30000, 0, 0, 0 };
        garageSell[] = { 60000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 50000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 1000;
        chopShop = 2500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Fed", "fed", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
            { "Police", "cop", {
                "textures\pickupflic.jpg"
            } },
			{ "Pimpon", "med", {
                "textures\pickupsmur.jpg"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 3500;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 3500;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 3500;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1000;
        chopShop = 3500;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 15000, 2500, 0, 0 };
        garageSell[] = { 25000, 7500, 0, 0 };
        insurance = 1000;
        chopShop = 7000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "textures\hayonflic.jpg"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 450, 0, 0, 0 };
        garageSell[] = { 750, 0, 0, 0 };
        insurance = 1000;
        chopShop = 500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 25000, 0, 0, 0 };
        garageSell[] = { 30000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 15000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
        garageSell[] = { 35000, 3500, 0, 0 };
        insurance = 1000;
        chopShop = 15000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 1000;
        chopShop = 5000;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 3500, 0, 0, 0 };
        garageSell[] = { 4500, 7500, 0, 0 };
        insurance = 1000;
        chopShop = 5000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Black", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Cop", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 2500, 0, 0, 0 };
        garageSell[] = { 6000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 5000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 2000, 0, 0, 0 };
        garageSell[] = { 6000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 5000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance = 1000;
        chopShop = 5000;
        textures[] = {
            { "Regular", "cop", {
                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 30000, 19500, 0, 0 };
        garageSell[] = { 60000, 35000, 0, 0 };
        insurance = 1000;
        chopShop = 40000;
        textures[] = {
            { "Sheriff", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Black", "fed", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Digi Green", "donate", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "EMS White", "med", {
                "textures\orcasmur.jpg"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 60000, 4500, 22000, 0 };
        garageSell[] = { 60000, 0, 15000, 0 };
        insurance = 1000;
        chopShop = 100000;
        textures[] = {
            { "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "donate", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "textures\orcasmur.jpg"
            } }
        };
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 75000, 0, 0, 0 };
        garageSell[] = { 125000, 0, 0, 0 };
        insurance = 1000;
        chopShop = 5000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };
};
