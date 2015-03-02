/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case west: 
	{
		// ...
		//Seize PlayerWeapons
		life_actions = life_actions + [player addAction["Seize PlayerWeapon",life_fnc_seizePlayerWeapon,cursorTarget,0,false,false,"",'!isNull cursorTarget && (player distance cursorTarget) < 6 && speed cursorTarget < 2 && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && (side cursorTarget == civilian) && (cursorTarget getVariable "restrained")']];
		//...
	};

	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
		
		//earplugs
		life_actions = [player addAction["<t color='#ADFF2F'>Earplugs On/Off</t>",{if (soundVolume != 1) then {1 fadeSound 1;} else {1 fadeSound 0.4;};},"",-6,false,false,"",'vehicle player != player || soundVolume != 1']];
		
		//Lights?
		life_actions = life_actions + [player addAction[localize "Emergency Lights ON",{[vehicle player,"life_fnc_civLights",true,false] spawn BIS_fnc_MP;},"",0,false,false,"",' vehicle player != player && ((typeOf vehicle player) in ["C_Offroad_01_repair_F"]) && !isNil {vehicle player getVariable "lights"} && ((driver vehicle player) == player) && !(vehicle player getVariable ["lights", false])']];

		life_actions = life_actions + [player addAction[localize "Emergency Lights OFF",{vehicle player setVariable["lights",false,true];},"",0,false,false,"", ' vehicle player != player && ((typeOf vehicle player) in ["C_Offroad_01_repair_F"]) && !isNil {vehicle player getVariable "lights"} && ((driver vehicle player) == player) && (vehicle player getVariable ["lights", false]) ']];	
	};	
};