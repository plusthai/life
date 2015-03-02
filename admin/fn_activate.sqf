/*
	File: fn_activate.sqf
*/
if ((getPlayerUID player) in ["76561198079976118"]) then {
;
act = player addAction ["Tools",{execVM "admin\fn_tools.sqf";}];
};