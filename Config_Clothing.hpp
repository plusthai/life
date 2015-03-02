/*
	ARRAY FORMAT:
		0: STRING (Classname)
		1: STRING (Display Name, leave as "" for default)
		2: SCALAR (Price)
		4: ARRAY (This is for limiting items to certain things)
			0: Variable to read from
			1: Variable Value Type
			2: What to compare to
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } },
			{ "U_Competitor", "Jacket 1", 1200, { "", "", -1 } },
			{ "U_Marshal", "Jacket 2", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Jacket 3", 5000, { "", "", -1 } },
			{ "U_PMC_BluePlaidShirt_BeigeCords", "Jacket 4", 5500, { "", "", -1 } },
			{ "U_PMC_RedPlaidShirt_DenimCords", "Jacket 5", 5500, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_ChckDBS_GPSB", "Jacket 6", 6000, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_ChckLB_GPBB", "Jacket 7", 6000, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_ChckLR_SPBB", "Jacket 8", 6000, { "", "", -1 } },
			{ "U_PMC_CombatUniformRS_ChckP_BPBB", "Jacket 9", 6000, { "", "", -1 } },
			{ "A3LShirt", "AL3Shirt", 1000, { "", "", -1 } },
			{ "arma3", "arma3", 1000, { "", "", -1 } },
			{ "arma3black", "arma3black", 1000, { "", "", -1 } },
			{ "ATI", "ATI", 1000, { "", "", -1 } },
			{ "BreakingBad", "BreakingBad", 1000, { "", "", -1 } },
			{ "Caiden69", "Caiden69", 1000, { "", "", -1 } },
			{ "tacobell", "tacobell", 1000, { "", "", -1 } },
			{ "dutch", "dutch", 1000, { "", "", -1 } },
			{ "hanacd", "hanacd", 1000, { "", "", -1 } },
			{ "HI1", "HI1", 1000, { "", "", -1 } },
			{ "norway", "norway", 1000, { "", "", -1 } },
			{ "nvidia", "nvidia", 1000, { "", "", -1 } },
			{ "phalps", "phalps", 1000, { "", "", -1 } },
			{ "PH", "PH", 1000, { "", "", -1 } },
			{ "RastaCiv", "RastaCiv", 1000, { "", "", -1 } },
			{ "RFShirt", "RFShirt", 1000, { "", "", -1 } },
			{ "U_C_Scientist", "U_C_Scientist", 1000, { "", "", -1 } },
			{ "SFG", "SFG", 1000, { "", "", -1 } },
			{ "A3L_SkidRow", "SkidRow", 1000, { "", "", -1 } },
			{ "A3L_SkullBlack", "SkullBlack", 1000, { "", "", -1 } },
			{ "walkingdead", "walkingdead", 1000, { "", "", -1 } },
			{ "Zannaza69", "Zannaza69", 1000, { "", "", -1 } },
			{ "A3L_Dude_Outfit", "Dude", 1000, { "", "", -1 } },
			{ "A3L_Farmer_Outfit", "Farmer", 1000, { "", "", -1 } },
			{ "A3L_Poop2day", "Popp2day", 1000, { "", "", -1 } },
			{ "A3L_A3LogoPants", "Pants", 1000, { "", "", -1 } },
			{ "A3L_Prisoner_Outfit", "Prisoner", 8000, { "", "", -1 } },
			{ "A3L_SECRET", "Secret", 10000, { "", "", -1 } },
			{ "A3L_SpookyMummy", "SpookyMummy", 10000, { "", "", -1 } },
			{ "A3L_Worker_Outfit", "Worker", 10000, { "", "", -1 } },
			{ "A3L_Zombie", "Zombie", 10000, { "", "", -1 } },
			{ "A3L_Bikini_Girl", "BikiniGirl", 20000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } },
			{ "A3L_gangster_hat", "", 1000, { "", "", -1 } },
			{ "a3l_hardhat", "", 1000, { "", "", -1 } },
			{ "A3L_Halloween_JigSaw", "", 1000, { "", "", -1 } },
			{ "A3L_Legoman", "", 1000, { "", "", -1 } },
			{ "A3L_Mask", "", 1000, { "", "", -1 } },
			{ "A3L_Halloween_PredatorMask", "", 1000, { "", "", -1 } },
			{ "A3L_Halloween_Pumpkinhead", "", 1000, { "", "", -1 } },
			{ "A3L_SkateHelmet_green", "", 1000, { "", "", -1 } },
			{ "A3L_soa_helmet", "", 1000, { "", "", -1 } },
			{ "A3L_crown", "", 1000, { "", "", -1 } },
			{ "jokermask", "", 1000, { "", "", -1 } },
			{ "A3L_longhairblack", "", 1000, { "", "", -1 } },
			{ "A3L_longhairblond", "", 1000, { "", "", -1 } },
			{ "A3L_longhairbrown", "", 1000, { "", "", -1 } },
			{ "santahat", "", 1000, { "", "", -1 } },
			{ "A3L_medic_helmet", "", 1000, { "", "", -1 } },
			{ "A3L_mexicanhat", "", 1000, { "", "", -1 } },
			{ "A3L_sargehat", "", 1000, { "", "", -1 } },
			{ "A3L_sombrero", "", 1000, { "", "", -1 } },
			{ "H_StrawHat", "", 1000, { "", "", -1 } },
			{ "H_StrawHat_dark", "", 1000, { "", "", -1 } },
			{ "turban", "", 1000, { "", "", -1 } },
			{ "A3L_russianhat", "", 1000, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_BandollierB_oli", "", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_PMC_BluPolo_BgPants", "Cop Uniform", 25, { "", "", -1 } },
			{ "ALFR_FR_police_tenu", "", 350, { "life_coplevel", "SCALAR", 2 } },
			{ "ALFR_FR_police_tenu2", "", 1250, { "life_coplevel", "SCALAR", 2 } },
			{ "U_PMC_CombatUniformLS_GSBPBB", "", 550, { "life_coplevel", "SCALAR", 2 } },
			{ "ALFR_FR_armee_tenu", "", 550, { "life_coplevel", "SCALAR", 3 } },
			{ "ALFR_FR_Armee_Base", "", 550, { "life_coplevel", "SCALAR", 3 } },
			{ "U_PMC_CombatUniformLS_BSGPBB", "", 550, { "life_coplevel", "SCALAR", 4 } },
			{ "U_B_CombatUniform_mcam", "", 550, { "life_coplevel", "SCALAR", 5 } },
			{ "U_B_CTRG_1", "", 550, { "life_coplevel", "SCALAR", 6 } },
			{ "U_B_CTRG_3", "", 550, { "life_coplevel", "SCALAR", 6 } },
			{ "U_B_CTRG_2", "", 550, { "life_coplevel", "SCALAR", 6 } },
			{ "U_O_OfficerUniform_ocamo", "", 550, { "life_coplevel", "SCALAR", 6 } },
			{ "U_I_OfficerUniform", "", 550, { "life_coplevel", "SCALAR", 7 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Beret_blk", "", 75, { "", "", -1 } },
			{ "A3L_policehelmet", "", 75, { "", "", -1 } },
			{ "H_HelmetB_light_black", "", 120, { "life_coplevel", "SCALAR", 2 } },
			{ "H_HelmetIA", "", 100, { "life_coplevel", "SCALAR", 2 } },
			{ "H_MilCap_gry", "", 100, { "life_coplevel", "SCALAR", 2 } },
			{ "ALFR_armee_casque", "", 100, { "life_coplevel", "SCALAR", 3 } },
			{ "H_Beret_02", "", 100, { "life_coplevel", "SCALAR", 4 } },
			{ "H_Cap_headphones", "", 100, { "life_coplevel", "SCALAR", 6 } },
			{ "H_MilCap_ocamo", "", 100, { "life_coplevel", "SCALAR", 6 } },
			{ "H_MilCap_dgtl", "", 100, { "life_coplevel", "SCALAR", 7 } },
			{ "H_Beret_Colonel", "", 100, { "life_coplevel", "SCALAR", 7 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_mas_wpn_gog", "", 120, { "life_coplevel", "SCALAR", 2 } },
			{ "G_mas_wpn_gog_d", "", 120, { "life_coplevel", "SCALAR", 2 } },
			{ "G_Balaclava_combat", "", 120, { "life_coplevel", "SCALAR", 3 } },
			{ "G_Balaclava_lowprofile", "", 120, { "life_coplevel", "SCALAR", 3 } },
			{ "G_mas_wpn_bala", "", 120, { "life_coplevel", "SCALAR", 3 } },
			{ "G_mas_wpn_bala_gog", "", 120, { "life_coplevel", "SCALAR", 3 } },
			{ "G_mas_wpn_bala_gog_t", "", 120, { "life_coplevel", "SCALAR", 3 } },
			{ "G_mas_wpn_bala_mask", "", 120, { "life_coplevel", "SCALAR", 3 } },
			{ "G_mas_wpn_bala_mask_t", "", 120, { "life_coplevel", "SCALAR", 3 } },
			{ "G_mas_wpn_bala_t", "", 120, { "life_coplevel", "SCALAR", 3 } },
			{ "G_Aviator", "", 120, { "life_coplevel", "SCALAR", 6 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_blk_POLICE", "", 800, { "", "", -1 } },
			{ "V_TacVestIR_blk", "", 5000, { "life_coplevel", "SCALAR", 2 } },
			{ "V_PlateCarrierIAGL_dgtl", "", 5000, { "life_coplevel", "SCALAR", 2 } },
			{ "ALFR_armee_gilet", "", 1500, { "life_coplevel", "SCALAR", 3 } },
			{ "V_PlateCarrierGL_rgr", "", 1500, { "life_coplevel", "SCALAR", 4 } },
			{ "V_PlateCarrierL_CTRG", "", 1500, { "life_coplevel", "SCALAR", 6 } },
			{ "V_PlateCarrierH_CTRG", "", 1500, { "life_coplevel", "SCALAR", 6 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "ALFR_Police_Bags", "", 800, { "", "", -1 } },
			{ "ALFR_armee_Bags", "", 1500, { "life_coplevel", "SCALAR", 3 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Bandanna_aviator", "", 30, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 30, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 30, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 30, { "", "", -1 } },
			{ "G_Bandanna_oli", "", 30, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 30, { "", "", -1 } },
			{ "G_Bandanna_spor", "", 30, { "", "", -1 } },
			{ "G_Bandanna_tan", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{"B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";

		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};

		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};

		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};

		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};