#include <macro.h>
/*
	File: fn_handleDamage.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Handles damage, specifically for handling the 'tazer' pistol and nothing else.
*/
private["_unit","_damage","_source","_projectile","_part","_curWep","_driver","_luck","_doBreak"];
_unit = SEL(_this,0);
_part = SEL(_this,1);
_damage = SEL(_this,2);
_source = SEL(_this,3);
_projectile = SEL(_this,4);
_curWep = "";
_curMag = "";

if(isPlayer _source && _source isKindOf "Man") then {
	_curWep = currentWeapon _source;
	_curMag = currentMagazine _source;
};

//rubber bullets or vehicle death
if((side _source == west && playerSide != west)) then {
if ((((_curMag in ["30Rnd_45ACP_Mag_SMG_01_Tracer_Green"]) || (_curWep in ["SMG_02_F","hgun_P07_F","hgun_P07_snds_F"])) && (_projectile in ["B_9x21_Ball"]))) then {
	if ((((getDammage _unit) + _damage) >= 0.95) || (_damage >= 0.95)) then {
		_damage = 0;
		[_source] spawn life_fnc_handleDowned;
	};
};
};

// VDM Script
if (vehicle _unit == _unit) then
		{
			if ( _source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Boat" ) then
			{
				diag_log "_Source is Vehicle, Not a player driving a vehicle"
			}
			else
			{
				
				_isVehicle = vehicle _source;
				if (_isVehicle isKindOf "Air" OR _isVehicle isKindOf "Car" OR _isVehicle isKindOf "Boat") then 
				{
					_damage = false;
					player playActionNow "PlayerProne";
				};
			};
		};

[] call life_fnc_hudUpdate;
_damage;