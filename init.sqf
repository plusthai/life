StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v3.1.5";
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "admin\fn_loop.sqf";

//[] execVM "scripts\nosidechat.sqf"; //Nosidechat Script
[] execVM "scripts\D41_Wetter.sqf"; //Custom Weather Script
//[] execVM "scripts\intro.sqf"; //Intro Message Script
//[] execVM "scripts\zlt_fastrope.sqf"; //FastRope Script
onPlayerDisconnected { [_id, _name, _uid] call compile preProcessFileLineNumbers "core\functions\fn_onPlayerDisconnect.sqf" };
[] execVM "safezone.sqf";

StartProgress = true;