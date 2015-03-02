/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)
    and altislife.com
    DESCRIPTION:
    Stops players from throwing grenades in safety zones.
    
    CONFIGURATION:
    Edit the #defines below.
*/

#define SAFETY_ZONES    [["safe_01", 1000],["safe_02", 100],["safe_03", 200],["safe_04", 100],["safe_05", 100],["safe_06", 100],["safe_07", 100],["safe_08", 100],["safe_09", 300],["safezone_reb", 300]] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]
#define MESSAGE "You are in a SafeZone You can not shoot in safe zone."

     if (isDedicated) exitWith {};
     waitUntil {!isNull player};

switch (playerSide) do
{
	case west:
	{};
	
	case civilian:
	{


     player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
				 deleteVehicle (_this select 6);
				 titleText [MESSAGE, "PLAIN", 3];
				 player setDamage 1;
             };
        }];  
	};
};