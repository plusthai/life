class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "C_Hatchback_01_F", 9500, "driver" }, 
			{ "C_Offroad_01_F", 12500, "driver" },
			{ "C_SUV_01_F", 30000, "driver" },
			{ "C_Hatchback_01_sport_F", 40000, "driver" },
			//new car
			{ "RDS_Gaz24_Civ_02", 2500, "driver" },
			{ "RDS_S1203_Civ_01", 3300, "driver" },
			{ "A3L_VolksWagenGolfGTiblack", 3300, "driver" },
			{ "DAR_ImpalaCiv", 5500, "driver" },
			{ "RDS_Golf4_Civ_01", 6000, "driver" },
			{ "RDS_Octavia_Civ_01", 6000, "driver" },
			{ "A3L_PuntoBlue", 6000, "driver" },
			{ "cl3_civic_vti_black", 7500, "driver" },
			{ "DAR_FusionCiv", 10000, "driver" },
			{ "cl3_taurus_black", 12000, "driver" },
			{ "cl3_polo_gti_black", 12000, "driver" },
			{ "DAR_TahoeCiv", 16000, "driver" },
			{ "SAL_AudiCiv", 22000, "driver" },
			{ "cl3_insignia_black", 25000, "driver" },
			{ "cl3_q7_black", 45000, "driver" },
			{ "I_G_Offroad_01_F", 55000, "driver" },
			{ "DAR_M3CivGrey", 40000, "driver" },
			{ "cl3_e63_amg_black", 500000, "driver" },
			{ "SAL_IROCCiv", 950000, "driver" },
			{ "SAL_77TRANSAMCiv", 1000000, "driver" },
			{ "cl3_dodge_charger_s_black", 1100000, "driver" },
			{ "DAR_ChallengerCivWhite", 1200000, "driver" },
			{ "cl3_z4_2008_black", 1200000, "driver" },
			{ "cl3_carrera_gt_black", 1500000, "driver" },
			{ "cl3_dbs_volante_black", 1500000, "driver" },
			{ "Jonzie_Viper", 2700000, "driver" },
			{ "cl3_r8_spyder_black", 2700000, "driver" },
			{ "cl3_458_black", 2750000, "driver" },
			{ "cl3_murcielago_black", 3000000, "driver" },
			{ "cl3_reventon_black", 3200000, "driver" },
			{ "cl3_lamborghini_gt1_black", 10000000, "driver" },
			{ "DAR_MF1Civ", 30000000, "driver" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "C_Offroad_01_F", 10000, "" },
			{ "I_Truck_02_medical_F", 25000, "" },
			{ "O_Truck_03_medical_F", 45000, "" },
			{ "B_Truck_01_medical_F", 60000, "" }
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, "mAir" },
			{ "O_Heli_Light_02_unarmed_F", 75000, "mAir" }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_box_F", 200000, "trucking" },
			{ "I_Truck_02_transport_F", 350000, "trucking" },
			{ "I_Truck_02_covered_F", 500000, "trucking" },
			{ "B_Truck_01_transport_F", 1000000, "trucking" },
			{ "O_Truck_03_transport_F", 600000, "trucking" },
			{ "O_Truck_03_covered_F", 800000, "trucking" },
			{ "B_Truck_01_box_F", 1000000, "trucking" },
			{ "O_Truck_03_device_F", 2900000, "trucking" },
			//car new
			{ "C_Van_01_transport_F", 350000, "trucking" },
			{ "cl3_transit_black", 350000, "trucking" },
			{ "C_Offroad_01_repair_F", 650000, "trucking" },
			{ "A3L_Dumptruck", 1500000, "trucking" },
			{ "B_Truck_01_covered_F", 2000000, "trucking" }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, "" },
			{ "B_G_Offroad_01_F", 15000, "" },
			{ "B_Heli_Light_01_F", 325000, "" },
			{ "O_MRAP_02_F", 450000, "" },
			{ "B_G_Offroad_01_armed_F", 750000, "rebel" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "C_Offroad_01_F", 5000, ""},
			{ "C_SUV_01_F", 20000, "" },
			//ใหม่
			{ "DAR_ImpalaPolice", 50000, "", { "life_coplevel", 2 } },
			{ "DAR_TahoePolice", 80000, "", { "life_coplevel", 2 } },
			{ "DAR_TaurusPolice", 100000, "", { "life_coplevel", 2 } },
			{ "DAR_ChargerPoliceState", 130000, "", { "life_coplevel", 3 } },
			//{ "DAR_DAR_02FirebirdSSVPolice", 140000, "", { "life_coplevel", 2 } },
			{ "insignia_police_st", 160000, "", { "life_coplevel", 3 } },
			{ "CL3_bus_cl_black", 180000, "", { "life_coplevel", 3 } },
			{ "I_MRAP_03_F", 200000, "", { "life_coplevel", 3 } },
			//ใหม่
			{ "B_MRAP_01_F", 30000, "", { "life_coplevel", 3 } }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 910000, "pilot" },
			{ "O_Heli_Transport_04_covered_F", 1000000, "pilot" },
			{ "O_Heli_Transport_04_ammo_F", 1000000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 1500000, "pilot" },
			{ "GNT_C185", 3500000, "pilot" },
			{ "GNT_C185F", 3500000, "pilot" },
			{ "B_Heli_Transport_03_F", 4000000, "pilot" }
		};
	};

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } }
		};
	};

	class cop_airhq {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "B_MRAP_01_hmg_F", 750000, "", { "life_coplevel", 7 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};	
	
	//ทำนำหนักรถ
	class DAR_TaurusPolice {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class GNT_C185F {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	class GNT_C185 {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class DAR_ChargerPoliceState {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class DAR_DAR_02FirebirdSSVPolice {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class insignia_police_st {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	
	class DAR_TahoePolice {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class DAR_ImpalaPolice {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	
	class B_Heli_Transport_03_F {
        vItemSpace = 200;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	
	
	class RDS_Gaz24_Civ_02 {
        vItemSpace = 45;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	
	class RDS_S1203_Civ_01 {
        vItemSpace = 65;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	class RDS_Octavia_Civ_01 {
        vItemSpace = 45;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	class DAR_TaurusCiv {
        vItemSpace = 55;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class BMW_M5Black {
        vItemSpace = 50;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	class SAL_77TRANSAMCiv {
        vItemSpace = 20;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class cl3_range_rover_black {
        vItemSpace = 85;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	class cl3_insignia_camo {
        vItemSpace = 40;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };				
	class cl3_dodge_charger_s_camo {
        vItemSpace = 40;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class cl3_e63_amg_camo {
        vItemSpace = 40;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	class cl3_range_rover_camo {
        vItemSpace = 85;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		

	class cl3_veyron_blk_wht {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class IVORY_T6A_1 {
        vItemSpace = 50;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class C_Offroad_01_repair_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class B_G_Van_01_transport_F {
        vItemSpace = 180;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class ALFR_GeK_Scania_420 {
        vItemSpace = 600;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class ALFR_GeK_Volvo_FH16_2012 {
        vItemSpace = 700;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class cl3_veyron_wht_blu {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class C_Heli_Light_01_civil_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class O_Heli_Transport_04_bench_F {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class O_Heli_Transport_04_covered_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	class O_Heli_Transport_04_ammo_F {
        vItemSpace = 110;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class O_Heli_Transport_04_F {
        vItemSpace = 5;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class O_Truck_03_ammo_F {
        vItemSpace = 700;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };
	class cl3_suv_taxi {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class cl3_suv_black {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	class BAF_Offroad_D {
        vItemSpace = 80;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };		
	class BAF_Offroad_W {
        vItemSpace = 80;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };

	class ivory_b206 {
        vItemSpace = 80;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 1000;
        chopShop = 100;
        textures[] = { };
    };	
	
	//ทำนำหนักรถ               จบ
	
	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
        textures[] = {
            { "Medic 1", "med", {
	                "textures\medic\zamam_medic_ar.jpg"
            } },
            { "Medic 2", "med", {
	                "textures\medic\truck_02_kab_co.jpg"
            } }			
	    };
    };
	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
        chopShop = 7500;
    };

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 125000;
        textures[] = { };
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	//class I_MRAP_03_F {
    //    vItemSpace = 58;
    //    storageFee[] = { 1000, 0, 0, 0 };
    //    insurance = 2500;
    //    chopShop = 5000;
    //    textures[] = { };
    //};

	class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Fed", "fed", {
	                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Police", "cop", {
	                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Medic 1", "med", {
	                "textures\medic\offroad_01_ext_base02_co.jpg"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 4500;
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
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
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
        storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 20000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 49800, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
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
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
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
/*
//	class C_Van_01_transport_F {
//        vItemSpace = 100;
//        storageFee[] = { 1000, 0, 0, 0 };
//		garageSell[] = { 25000, 0, 0, 0 };
//        insurance = 2500;
//        chopShop = 5000;
//        textures[] = {
//        	{ "White", "civ", {
//                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
//            } },
//            { "Red", "civ", {
//                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
//            } }
//        };
//    };
*/
	class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
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
        insurance = 2500;
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
        storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
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
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 55000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 5000;
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
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

	class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
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
	
	//รถใหม่อะ

	class A3L_VolksWagenGolfGTiblack {
        vItemSpace = 65;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class DAR_ImpalaCiv {
        vItemSpace = 55;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class RDS_Golf4_Civ_01 {
        vItemSpace = 40;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class A3L_PuntoBlue {
        vItemSpace = 35;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_civic_vti_black {
        vItemSpace = 35;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class DAR_FusionCiv {
        vItemSpace = 50;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_taurus_black {
        vItemSpace = 55;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_polo_gti_black {
        vItemSpace = 30;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class DAR_TahoeCiv {
        vItemSpace = 95;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class SAL_AudiCiv {
        vItemSpace = 50;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Red", "civ", {
                "DAR_MF1\Data\Body_coRed.paa"
            } },
			{ "Black", "civ", {
	                "DAR_MF1\Data\Body_coBlack.paa"
            } },
			{ "Argent", "civ", {
	                "DAR_MF1\Data\Body_coSilver.paa"
            } },
			{ "Orange", "civ", {
	                "DAR_MF1\Data\Body_coOrange.paa"
            } },
			{ "Bordeau", "civ", {
	                "DAR_MF1\Data\Body_coBurgundy.paa"
            } },
			{ "Off White", "civ", {
	                "SAL_A4\Data\Body_co.paa"
            } }
	    };
    };	

	class cl3_insignia_black {
        vItemSpace = 50;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_q7_black {
        vItemSpace = 80;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class I_G_Offroad_01_F {
        vItemSpace = 75;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Rockstar", "civ", {
                "ALFR_TexSnd\offroad_rock.jpg"
            } },
            { "Red Bull", "civ", {
	            "ALFR_TexSnd\offroad_bull.jpg"
            } }
	    };
    };	

	class DAR_M3CivGrey {
        vItemSpace = 20;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_e63_amg_black {
        vItemSpace = 50;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class SAL_IROCCiv {
        vItemSpace = 20;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Red", "civ", {
                "DAR_MF1\Data\Body_coRed.paa"
            } },
			{ "Black", "civ", {
	                "DAR_MF1\Data\Body_coBlack.paa"
            } },
			{ "Argent", "civ", {
	                "DAR_MF1\Data\Body_coSilver.paa"
            } },
			{ "Orange", "civ", {
	                "DAR_MF1\Data\Body_coOrange.paa"
            } },
			{ "Bordeau", "civ", {
	                "DAR_MF1\Data\Body_coBurgundy.paa"
            } },
			{ "Off White", "civ", {
	                "SAL_A4\Data\Body_co.paa"
            } }
	    };
    };	

	class cl3_dodge_charger_s_black {
        vItemSpace = 65;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class DAR_ChallengerCivWhite {
        vItemSpace = 20;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Red", "civ", {
                "DAR_MF1\Data\Body_coRed.paa"
            } },
			{ "Black", "civ", {
	                "DAR_MF1\Data\Body_coBlack.paa"
            } },
			{ "Argent", "civ", {
	                "DAR_MF1\Data\Body_coSilver.paa"
            } },
			{ "Orange", "civ", {
	                "DAR_MF1\Data\Body_coOrange.paa"
            } },
			{ "Bordeau", "civ", {
	                "DAR_MF1\Data\Body_coBurgundy.paa"
            } },
			{ "Off White", "civ", {
	                "SAL_A4\Data\Body_co.paa"
            } }
	    };
    };	

	class cl3_z4_2008_black {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_carrera_gt_black {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_dbs_volante_black {
        vItemSpace = 20;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class Jonzie_Viper {
        vItemSpace = 20;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_r8_spyder_black {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_458_black {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_murcielago_black {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_reventon_black {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class cl3_lamborghini_gt1_black {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class DAR_MF1Civ {
        vItemSpace = 10;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Red", "civ", {
                "DAR_MF1\Data\Body_coRed.paa"
            } },
			{ "Black", "civ", {
	                "DAR_MF1\Data\Body_coBlack.paa"
            } },
			{ "Argent", "civ", {
	                "DAR_MF1\Data\Body_coSilver.paa"
            } },
			{ "Orange", "civ", {
	                "DAR_MF1\Data\Body_coOrange.paa"
            } },
			{ "Bordeau", "civ", {
	                "DAR_MF1\Data\Body_coBurgundy.paa"
            } },
			{ "Off White", "civ", {
	                "SAL_A4\Data\Body_co.paa"
            } }
	    };
    };	

	class C_Van_01_transport_F {
        vItemSpace = 130;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Yellow", "civ", {
                "ALFR_TexSnd\van_yellow.jpg"
            } },
			{ "Orange", "civ", {
	                "ALFR_TexSnd\van_orange.jpg"
            } },
			{ "Blue", "civ", {
	                "ALFR_TexSnd\van_blue.jpg"
            } },
			{ "Green", "civ", {
	                "ALFR_TexSnd\van_green.jpg"
            } },
			{ "Black", "civ", {
	                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "Off White", "civ", {
	                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
	                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
	    };
    };	

	class cl3_transit_black {
        vItemSpace = 140;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Black", "civ", {
                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
			{ "Dark Grey", "civ", {
	                "#(argb,8,8,3)color(0.1,0.1,0.1,0.7)"
            } },
			{ "Gray", "civ", {
	                "#(argb,8,8,3)color(0.5,0.5,0.5,0.1)"
            } },
			{ "Light Grey", "civ", {
	                "#(argb,8,8,3)color(0.3,0.3,0.3,0.8)"
            } },
			{ "Off White", "civ", {
	                "#(argb,8,8,3)color(1,1,1,1)"
            } },
			{ "Sable", "civ", {
	                "#(argb,8,8,3)color(1.5,1.6,0.9,0.2)"
            } },
            { "Bordeau", "civ", {
	                "#(argb,8,8,3)color(1,0,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.01,0.6,1,0.1)"
            } },
            { "Blue Night", "civ", {
	                "#(argb,8,8,3)color(0,0,0.5,0.1)"
            } },
            { "Purple Night", "civ", {
	                "#(argb,8,8,3)color(0.6,0,1,0.01)"
            } },
            { "Green", "civ", {
	                "#(argb,8,8,3)color(0.5,1,0.5,0.05)"
            } },
            { "Red", "civ", {
	                "#(argb,8,8,3)color(1,0,0,1)"
            } },
            { "Yellow", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Orange", "civ", {
	                "#(argb,8,8,3)color(1,0.3,0.01,0.6)"
            } }
	    };
    };	

	class A3L_Dumptruck {
        vItemSpace = 400;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Yellow", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
			{ "Red", "civ", {
	                "#(argb,8,8,3)color(1,0.1,0.01,0.1)"
            } },
			{ "Green", "civ", {
	                "#(argb,8,8,3)color(0,1,0,0.1)"
            } },
			{ "Blue", "civ", {
	                "#(argb,8,8,3)color(0.02,0.47,0.62,0.1)"
            } },
			{ "Brun", "civ", {
	                "#(argb,8,8,3)color(1,0.6,0,0.1)"
            } },
			{ "Black", "civ", {
	                "#(ai,64,64,1)Fresnel(0.3,3)"
            } }
	    };
    };	

	class CL3_bus_cl_black {
        vItemSpace = 80;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Police", "cop", {
                "ALFR_TexSnd\bus_exterior_cop.jpg"
            } },
			{ "Donateur", "civ", {
	                "ALFR_TexSnd\bus_exterior_donator.jpg"
            } }
	    };
    };	

	class I_MRAP_03_F {
        vItemSpace = 0;
        storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {
        	{ "Police", "cop", {
                "ALFR_TexSnd\strider_police_altis.jpg"
            } }
	    };
    };						
};