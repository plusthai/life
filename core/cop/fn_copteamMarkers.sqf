/*
	File: fn_teamMarkers.sqf
	Author: Bryan "Tonic" by Daniel Larusso & LordNaikon (Keep Calm and RolePlay)
	Edited by: Tomms123 SecretOne with help from Siro @ LinkD.Gaming
	
	Description:
	Marks mcops on the map for other cops when it's open.
*/
private["_markers","_cops"];
_markers = [];
_cops = [];

sleep 0.5;
if(visibleMap) then {
	{if(side _x == west) then {_cops set[count _cops,_x];}} foreach playableUnits; //Fetch list of Cops
	
	//Create markers
	{
		_marker = createMarkerLocal [format["%1_marker",_x],visiblePosition _x];
		_marker setMarkerColorLocal "ColorBlue";
		_marker setMarkerTypeLocal "Mil_dot";
		_marker setMarkerTextLocal format["%1", _x getVariable["realname",name _x]];
	
		_markers set[count _markers,[_marker,_x]];
	} foreach _cops;
		
	while {visibleMap} do
	{
		{
			private["_marker","_unit"];
			_marker = _x select 0;
			_unit = _x select 1;
			if(!isNil "_unit") then
			{
				if(!isNull _unit) then
				{
					_marker setMarkerPosLocal (visiblePosition _unit);
				};
			};
		} foreach _markers;
		if(!visibleMap) exitWith {};
		sleep 0.02;
	};

	{deleteMarkerLocal (_x select 0);} foreach _markers;
	_markers = [];
	_cops = [];
};