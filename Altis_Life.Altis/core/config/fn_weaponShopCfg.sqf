#include <macro.h>
/*
	File: fn_weaponShopCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration file for the weapon shops.
	
	Return:
	String: Close the menu
	Array: 
	[Shop Name,
	[ //Array of items to add to the store
		[classname,Custom Name (set nil for default),price]
	]]
*/
private["_shop"];
_shop = [_this,0,"",[""]] call BIS_fnc_param;
if(_shop == "") exitWith {closeDialog 0}; //Bad shop type passed.

switch(_shop) do {
	case "cop_basic": {
		switch(true) do {
			case (playerSide != west): {"You are not a cop!"};
			default {
				["Altis Cop Shop",
					[
						["SMG_02_F","Rubber SMG",15000], 
                        ["30Rnd_9x21_Mag","Rubber SMG Ammo",500],
						["hgun_P07_snds_F","Rubber Pistol",2000],
						["16Rnd_9x21_Mag","Rubber Pistol Ammo",500],
						["Binocular",nil,150],
						["ItemGPS",nil,100],
						["ToolKit",nil,500],
						["muzzle_snds_L",nil,650],
						["FirstAidKit",nil,150],
						["NVGoggles",nil,2000]
					]
				];
			};
		};
	};
	
	case "med_basic": {
		switch (true) do {
			case (playerSide != independent): {"You are not an EMS Medic"};
			default {
				["Hospital EMS Shop",
					[
						["ItemGPS",nil,100],
						["Binocular",nil,150],
						["ToolKit",nil,250],
						["FirstAidKit",nil,150],
						["Medikit",nil,500],
						["NVGoggles",nil,1200],
						["B_Kitbag_sgg",nil,3000],
						["U_O_OfficerUniform_ocamo",nil,3000]
					]
				];
			};
		};
	};

	case "cop_patrol":
	{
		switch(true) do
		{
			case (playerSide != west): {"You are not a cop!"};
			case (FETCH_CONST(life_coplevel) < 2): {"You are not at a patrol officer rank!"};
			default
			{
				["Altis Patrol Officer Shop",
					[
						//ปืนกล
						["arifle_mas_g36c",nil,10000],
						["arifle_mas_mp5",nil,10000],						
						["SG553",nil,10000],
						["arifle_mas_mk16_l",nil,10000],
						["arifle_mas_mk16",nil,10000],
						["hlc_rifle_saiga12k",nil,10000],
						["arifle_SDAR_F",nil,10000],
						
						//กล้อง
						["optic_Aco",nil,5000],
						["optic_MRCO",nil,5000],
						["optic_DMS",nil,5000],
						["optic_Hamr",nil,5000],
						["optic_mas_Holosight_blk",nil,5000],
						["optic_mas_Holosight_camo",nil,5000],
						
						//แมก
						["30Rnd_mas_556x45_Stanag",nil,100],
						["30Rnd_mas_9x21_Stanag",nil,100],						
						["30Rnd_56x45_GP90",nil,100],
						["30Rnd_mas_556x45_Stanag",nil,100],
						["hlc_10rnd_12g_buck_S12",nil,100],
						["20Rnd_556x45_UW_mag",nil,100],				

										                                                
                        ["MineDetector",nil,1000]
					]
				];
			};
		};
	};
	case "cop_Corporal":
    {
        switch(true) do
        {
            case (playerSide != west): {"You are not a cop!"};
            case (FETCH_CONST(life_coplevel) < 3): {"You are not at a Corporal rank!"};
            default
            {
                ["Altis Corporal Shop",
                    [
						//ปืนกล
						["arifle_mas_g36c",nil,10000],
						["arifle_mas_mp5",nil,10000],						
						["SG553",nil,10000],
						["arifle_mas_mk16_l",nil,10000],
						["arifle_mas_mk16",nil,10000],
						["hlc_rifle_saiga12k",nil,10000],
						["arifle_SDAR_F",nil,10000],						
						["arifle_mas_mk17",nil,10000],
						["srifle_mas_mk17s",nil,10000],
						["arifle_Mk20C_F",nil,10000],
						
						//กล้อง
						["optic_Aco",nil,5000],
						["optic_MRCO",nil,5000],
						["optic_DMS",nil,5000],
						["optic_Hamr",nil,5000],
						["optic_mas_Holosight_blk",nil,5000],
						["optic_mas_Holosight_camo",nil,5000],						
						["optic_DMS",nil,5000],
						
						
						//แม๊ก
						["30Rnd_mas_556x45_Stanag",nil,100],
						["30Rnd_mas_9x21_Stanag",nil,100],						
						["30Rnd_56x45_GP90",nil,100],
						["30Rnd_mas_556x45_Stanag",nil,100],
						["hlc_10rnd_12g_buck_S12",nil,100],
						["20Rnd_556x45_UW_mag",nil,100],						
						["20Rnd_mas_762x51_Stanag",nil,100],
						["30Rnd_556x45_Stanag",nil,100],					
						
                        ["Rangefinder",nil,5000]					
                    ]
                ];
            };
        };
    };
	case "cop_sergeant":
	{
		switch(true) do
		{
			case (playerSide != west): {"You are not a cop!"};
			case (FETCH_CONST(life_coplevel) < 4): {"You are not at a sergeant rank!"};
			default
			{
				["Altis Sergeant Officer Shop",
					[
						//ปืนกล
						["arifle_mas_g36c",nil,10000],
						["arifle_mas_mp5",nil,10000],						
						["SG553",nil,10000],
						["arifle_mas_mk16_l",nil,10000],
						["arifle_mas_mk16",nil,10000],
						["hlc_rifle_saiga12k",nil,10000],
						["arifle_SDAR_F",nil,10000],						
						["arifle_mas_mk17",nil,10000],
						["srifle_mas_mk17s",nil,10000],
						["arifle_Mk20C_F",nil,10000],						
						["arifle_mas_m14",nil,10000],
						["arifle_mas_fal",nil,10000],				
						
						//กล้อง
						["optic_SOS",nil,5000],
						["optic_Aco",nil,5000],
						["optic_MRCO",nil,5000],
						["optic_DMS",nil,5000],
						["optic_Hamr",nil,5000],
						["optic_mas_Holosight_blk",nil,5000],
						["optic_mas_Holosight_camo",nil,5000],						
						["optic_DMS",nil,5000],			
			
						
						//แม๊ก
						["30Rnd_mas_556x45_Stanag",nil,100],
						["30Rnd_mas_9x21_Stanag",nil,100],						
						["30Rnd_56x45_GP90",nil,100],
						["30Rnd_mas_556x45_Stanag",nil,100],
						["hlc_10rnd_12g_buck_S12",nil,100],
						["20Rnd_556x45_UW_mag",nil,100],						
						["20Rnd_mas_762x51_Stanag",nil,100],
						["30Rnd_556x45_Stanag",nil,100],						
						["20Rnd_mas_762x51_Stanag",nil,100],
						
						["ItemWatch",nil,50],
						["ItemCompass",nil,50],
						["Binocular",nil,150],
						["ItemMap",nil,50],
						["ItemGPS",nil,150],
						["ToolKit",nil,250],
						["FirstAidKit",nil,150],
						["Medikit",nil,2000],
						["NVGoggles",nil,2500],
						["B_Carryall_khk",nil,5000]	
					]
				];
			};
		};
	};

    case "cop_Lieutenant":
    {
        switch(true) do
        {
            case (playerSide != west): {"You are not a cop!"};
            case (FETCH_CONST(life_coplevel) < 5): {"You are not at a Lieutenant rank!"};
            default
            {
                ["Altis Lieutenant Shop",
                    [                     
						//ปืนกล
						["arifle_mas_g36c",nil,10000],
						["arifle_mas_mp5",nil,10000],						
						["SG553",nil,10000],
						["arifle_mas_mk16_l",nil,10000],
						["arifle_mas_mk16",nil,10000],
						["hlc_rifle_saiga12k",nil,10000],
						["arifle_SDAR_F",nil,10000],						
						["arifle_mas_mk17",nil,10000],
						["srifle_mas_mk17s",nil,10000],
						["arifle_Mk20C_F",nil,10000],						
						["arifle_mas_m14",nil,10000],
						["arifle_mas_fal",nil,10000],				
						
						//กล้อง
						["optic_SOS",nil,5000],
						["optic_Aco",nil,5000],
						["optic_MRCO",nil,5000],
						["optic_DMS",nil,5000],
						["optic_Hamr",nil,5000],
						["optic_mas_Holosight_blk",nil,5000],
						["optic_mas_Holosight_camo",nil,5000],						
						["optic_DMS",nil,5000],			
			
						
						//แม๊ก
						["30Rnd_mas_556x45_Stanag",nil,100],
						["30Rnd_mas_9x21_Stanag",nil,100],						
						["30Rnd_56x45_GP90",nil,100],
						["30Rnd_mas_556x45_Stanag",nil,100],
						["hlc_10rnd_12g_buck_S12",nil,100],
						["20Rnd_556x45_UW_mag",nil,100],						
						["20Rnd_mas_762x51_Stanag",nil,100],
						["30Rnd_556x45_Stanag",nil,100],						
						["20Rnd_mas_762x51_Stanag",nil,100],
						
						
						["ItemWatch",nil,50],
						["ItemCompass",nil,50],
						["Binocular",nil,150],
						["ItemMap",nil,50],
						["ItemGPS",nil,150],
						["ToolKit",nil,250],
						["FirstAidKit",nil,150],
						["Medikit",nil,2000],
						["NVGoggles",nil,2500],
						["B_Carryall_khk",nil,5000]                                        
                    ]
                ];
            };
        };
    };
	
	case "cop_Captain":
    {
        switch(true) do
        {
            case (playerSide != west): {"You are not a cop!"};
            case (FETCH_CONST(life_coplevel) < 6): {"You are not at a Captain rank!"};
            default
            {
                ["Altis Captain Shop",
                    [
						//ปืนกล					
						["LMG_mas_mk48_F",nil,10000],						
						["srifle_mas_lrr",nil,10000],
						["arifle_mas_g36c",nil,10000],
						["arifle_mas_mp5",nil,10000],						
						["SG553",nil,10000],
						["arifle_mas_mk16_l",nil,10000],
						["arifle_mas_mk16",nil,10000],
						["hlc_rifle_saiga12k",nil,10000],
						["arifle_SDAR_F",nil,10000],						
						["arifle_mas_mk17",nil,10000],
						["srifle_mas_mk17s",nil,10000],
						["arifle_Mk20C_F",nil,10000],						
						["arifle_mas_m14",nil,10000],
						["arifle_mas_fal",nil,10000],			


						//กล้อง
						["optic_SOS",nil,5000],
						["optic_Aco",nil,5000],
						["optic_MRCO",nil,5000],
						["optic_DMS",nil,5000],
						["optic_Hamr",nil,5000],
						["optic_mas_Holosight_blk",nil,5000],
						["optic_mas_Holosight_camo",nil,5000],						
						["optic_DMS",nil,5000],						
						["optic_mas_zeiss",nil,5000],
						
						//แม๊ก
						["30Rnd_mas_556x45_Stanag",nil,100],
						["30Rnd_mas_9x21_Stanag",nil,100],						
						["30Rnd_56x45_GP90",nil,100],
						["30Rnd_mas_556x45_Stanag",nil,100],
						["hlc_10rnd_12g_buck_S12",nil,100],
						["20Rnd_556x45_UW_mag",nil,100],						
						["20Rnd_mas_762x51_Stanag",nil,100],
						["30Rnd_556x45_Stanag",nil,100],						
						["20Rnd_mas_762x51_Stanag",nil,100],						
						["100Rnd_mas_762x51_Stanag",nil,100],
						["10Rnd_mas_338_Stanag",nil,100]                         
                    ]
                ];
            };
        };
    };
	
	case "rebel":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_rebel): {"You don't have a Rebel training license!"};
			default
			{
				["Mohammed's Jihadi Shop",
					[

						//ปืนกล
						["arifle_SDAR_F",nil,50000],
						["arifle_mas_akm",nil,500000],	
						["arifle_mas_aks74u",nil,900000],		
						["arifle_Katiba_F",nil,1000000],		
						["arifle_mas_lee",nil,1200000],		
						["arifle_mas_g3",nil,1600000],		
						["srifle_mas_svd",nil,2000000],		
						["LMG_mas_pkm_F",nil,2500000],			
						
						
						//กล้อง
						["FHQ_optic_AC11704",nil,9000],
						["optic_MRCO",nil,12000],
						["optic_DMS",nil,15000],
						["optic_SOS",nil,25000],
						
						
						
						
						//แมกปืน
						["20Rnd_556x45_UW_mag",nil,5000],
						["5Rnd_mas_762x51_Stanag",nil,5000],
						["100Rnd_mas_762x54_mag",nil,5000],
						["10Rnd_mas_762x54_mag",nil,5000],
						["20Rnd_mas_762x51_Stanag",nil,5000],
						["30Rnd_65x39_caseless_green",nil,5000],
						["30Rnd_mas_545x39_mag",nil,5000],
						["30Rnd_mas_762x39_mag",nil,5000],
						
						
						["SmokeShellRed","Fumigene rouge",5000],
						
						
						
						["Rangefinder",nil,10000]
					
					]
				];
			};
		};
	};
	
	case "gun":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_gun): {"You don't have a Firearms license!"};
			default
			{
				["Billy Joe's Firearms",
					[
						["arifle_SDAR_F",nil,50000],
						["hgun_Rook40_F",nil,90000],
						["C1987_MP7",nil,100000],
                        ["16Rnd_9x21_Mag",nil,25],
                        ["hgun_Pistol_heavy_02_F",nil,120000],
                        ["6Rnd_45ACP_Cylinder",nil,50],
                        ["hgun_ACPC2_F",nil,15000],
                        ["9Rnd_45ACP_Mag",nil,45],
                        ["hgun_PDW2000_F",nil,200000],
                        ["30Rnd_9x21_Mag",nil,75],
                        ["SMG_01_F",nil,280000],
                        ["30Rnd_45ACP_Mag_SMG_01_tracer_green",nil,60],
                        ["SIG_P226",nil,13000],
                        ["C1987_MP7",nil,60000],
                        ["C1987_20Rnd_46x30_mp7",nil,100],
                        ["C1987_40Rnd_46x30_mp7",nil,200],
						["20Rnd_556x45_UW_mag",nil,10000],
                        ["optic_ACO_grn_smg",nil,2500],
                        ["V_Rangemaster_belt",nil,4900]
					]
				];
			};
		};
	};
	
	case "gang":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			default
			{
				["Hideout Armament",
					[
						["hgun_Rook40_F",nil,1500],
						["hgun_Pistol_heavy_02_F",nil,2500],
						["hgun_ACPC2_F",nil,4500],
						["hgun_PDW2000_F",nil,9500],
						["optic_ACO_grn_smg",nil,950],
						["V_Rangemaster_belt",nil,1900],
						["16Rnd_9x21_Mag",nil,25],
						["9Rnd_45ACP_Mag",nil,45],
						["6Rnd_45ACP_Cylinder",nil,50],
						["30Rnd_9x21_Mag",nil,75]
					]
				];
			};
		};
	};
	
	case "genstore":
	{
		["Altis General Store",
			[
				["Binocular",nil,150],
				["ItemGPS",nil,100],
				["ToolKit",nil,1000],
				["FirstAidKit",nil,150],
				["NVGoggles",nil,2000],
				["Chemlight_red",nil,300],
				["Chemlight_yellow",nil,300],
				["Chemlight_green",nil,300],
				["Chemlight_blue",nil,300]
			]
		];
	};
	case "news":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_News): {"You don't have a News training license!"};
			default
			{
				["News Shop",
					[
						["U_I_CombatUniform",clothing,1000],
						["launch_B_Titan_short_F",nil,10000],
						["Rangefinder",nil,10000]
					
					]
				];
			};
		};
	};
		
};
