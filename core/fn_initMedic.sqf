#include <macro.h>
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the medic..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if((FETCH_CONST(life_medicLevel)) < 1) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

// Uniformen Texturen START
[] spawn
{
while {true} do
    {
        waitUntil {uniform player == "U_O_OfficerUniform_ocamo"};
        player setObjectTextureGlobal [0,"textures\medic\medic_uniform.jpg"];
        waitUntil {uniform player != "U_O_OfficerUniform_ocamo"};
    };
};
// Uniformen Texturen END
// Medic Backpack Texture
[] spawn
{
while {true} do
    {
        waitUntil {backpack player == "B_Kitbag_sgg"};
        (unitBackpack player) setObjectTextureGlobal [0,"textures\medic\medic_backpack.jpg"];
        waitUntil {backpack player != "B_Kitbag_sgg"};
    };
};
// Backpack Skins END