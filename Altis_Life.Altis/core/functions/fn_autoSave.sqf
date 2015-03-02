/*
@Version: 0.3
@Author: =IFD= Cryptonat modified by Jennova for 3.1.4
@Edited: 14/08/14

Description:
Saves the player's gear every 10 minutes.
*/

while {true} do {
sleep 600; 
[] call SOCK_fnc_updateRequest;
hint parseText format [ localize "STR_BTK_Autosave", profileName];
};