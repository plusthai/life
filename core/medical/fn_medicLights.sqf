/*
	@Version: 1.0
	@Author: Tonic, [BWG] Joe, Daniel Larusso
	@Edited: 28.08.2013; 08.06.2014
*/
private["_vehicle","_lightRed","_lightBlue","_lightleft","_lightright","_lightfrontleft","_lightfrontright","_leftRed","_attach","_brightness"];
_vehicle = _this select 0;

if(isNil "_vehicle" || isNull _vehicle || !(_vehicle getVariable "lights")) exitWith {};

switch (typeOf _vehicle) do {
	case "C_Offroad_01_F": 				{_attach = [[-0.37, 0.0, 0.56],[0.37, 0.0, 0.56],[-0.28, 2.65, -0.5],[0.22, 2.65, -0.5]];};
	case "C_SUV_01_F": 					{_attach = [[-0.38,2.2,-0.55], [0.36,2.2,-0.55],[-0.28, 2.65, -0.5],[0.22, 2.65, -0.5]];}; //alt: {_attach = 
	case "C_Hatchback_01_sport_F": 		{_attach = [[-0.6, 2, -0.95],[0.6, 2, -0.95],[-0.28, 2.65, -0.5],[0.22, 2.65, -0.5]];};
};

_lightRed = [0.1, 0.1, 20];
_lightBlue = [0.1, 0.1, 20];

_lightleft = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.2;
_lightleft setLightColor _lightBlue;						// Lichtfarbe
_lightleft setLightBrightness 0.2;							// Helligkeit
_lightleft lightAttachObject [_vehicle, _attach select 0];	// Bastelt das Licht an das Fahrzeug
_lightleft setLightAttenuation [0.1, 0, 1000, 130];		// Dämpfung
_lightleft setLightIntensity 8;							// Lichtintesivität					
_lightleft setLightFlareSize 0.38;
_lightleft setLightFlareMaxDistance 120;
_lightleft setLightUseFlare true;
_lightleft setLightDayLight true;							// Licht kann am Tag leuchten
_lightleft setLightAmbient [0.1,0.1,1];

_lightright = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.2;
_lightright setLightColor _lightBlue;
_lightright setLightBrightness 0.2;
_lightright lightAttachObject [_vehicle, _attach select 1];
_lightright setLightAttenuation [0.181, 0, 1000, 130];
_lightright setLightIntensity 8;
_lightright setLightFlareSize 0.38;
_lightright setLightFlareMaxDistance 120;
_lightright setLightUseFlare true;
_lightright setLightDayLight true;
_lightright setLightAmbient [0.1,0.1,1]; 

if(typeOf _vehicle == "C_Hatchback_01_sport_F") then {
	_lightfrontleft = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
	sleep 0.2;
	_lightfrontleft setLightColor _lightBlue;
	_lightfrontleft setLightBrightness 0.2;
	_lightfrontleft lightAttachObject [_vehicle, _attach select 2];
	_lightfrontleft setLightAttenuation [0.1, 0, 1000, 130];
	_lightfrontleft setLightIntensity 8;
	_lightfrontleft setLightFlareSize 0.38;
	_lightfrontleft setLightFlareMaxDistance 120;
	_lightfrontleft setLightUseFlare true;
	_lightfrontleft setLightDayLight true;
	_lightfrontleft setLightAmbient [0.1,0.1,1];
	
	_lightfrontright = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
	sleep 0.2;
	_lightfrontright setLightColor _lightBlue;
	_lightfrontright setLightBrightness 0.2;
	_lightfrontright lightAttachObject [_vehicle, _attach select 3];
	_lightfrontright setLightAttenuation [0.1, 0, 1000, 130];
	_lightfrontright setLightIntensity 8;
	_lightfrontright setLightFlareSize 0.38;
	_lightfrontright setLightFlareMaxDistance 120;
	_lightfrontright setLightUseFlare true;
	_lightfrontright setLightDayLight true;
	_lightfrontright setLightAmbient [0.1,0.1,1]; 
};


if(typeOf _vehicle == "C_SUV_01_F") then {
	_lightfrontleft = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
	sleep 0.2;
	_lightfrontleft setLightColor _lightBlue;
	_lightfrontleft setLightBrightness 0.2;
	_lightfrontleft lightAttachObject [_vehicle, _attach select 2];
	_lightfrontleft setLightAttenuation [0.1, 0, 1000, 130];
	_lightfrontleft setLightIntensity 8;
	_lightfrontleft setLightFlareSize 0.38;
	_lightfrontleft setLightFlareMaxDistance 120;
	_lightfrontleft setLightUseFlare true;
	_lightfrontleft setLightDayLight true;
	_lightfrontleft setLightAmbient [0.1,0.1,1];
	
	_lightfrontright = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
	sleep 0.2;
	_lightfrontright setLightColor _lightBlue;
	_lightfrontright setLightBrightness 0.2;
	_lightfrontright lightAttachObject [_vehicle, _attach select 3];
	_lightfrontright setLightAttenuation [0.1, 0, 1000, 130];
	_lightfrontright setLightIntensity 8;
	_lightfrontright setLightFlareSize 0.38;
	_lightfrontright setLightFlareMaxDistance 120;
	_lightfrontright setLightUseFlare true;
	_lightfrontright setLightDayLight true;
	_lightfrontright setLightAmbient [0.1,0.1,1]; 
};

if(typeOf _vehicle == "C_Offroad_01_F") then {
	_lightfrontleft = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
	sleep 0.2;
	_lightfrontleft setLightColor _lightBlue;
	_lightfrontleft setLightBrightness 0.2;
	_lightfrontleft lightAttachObject [_vehicle, _attach select 2];
	_lightfrontleft setLightAttenuation [0.1, 0, 1000, 130];
	_lightfrontleft setLightIntensity 8;
	_lightfrontleft setLightFlareSize 0.38;
	_lightfrontleft setLightFlareMaxDistance 120;
	_lightfrontleft setLightUseFlare true;
	_lightfrontleft setLightDayLight true;
	_lightfrontleft setLightAmbient [0.1,0.1,1];
	
	_lightfrontright = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
	sleep 0.2;
	_lightfrontright setLightColor _lightBlue;
	_lightfrontright setLightBrightness 0.2;
	_lightfrontright lightAttachObject [_vehicle, _attach select 3];
	_lightfrontright setLightAttenuation [0.1, 0, 1000, 130];
	_lightfrontright setLightIntensity 8;
	_lightfrontright setLightFlareSize 0.38;
	_lightfrontright setLightFlareMaxDistance 120;
	_lightfrontright setLightUseFlare true;
	_lightfrontright setLightDayLight true;
	_lightfrontright setLightAmbient [0.1,0.1,1]; 
};

if (sunOrMoon < 1) then {
	_brightness = 6;
} else {
	_brightness = 6;
};

_leftRed = true;  
while {(alive _vehicle)} do {



	if (!(_vehicle getVariable "lights")) exitWith {};
	if (_leftRed) then {  
		_leftRed = false;  
		_lightright setLightBrightness 0;
		_lightfrontright setLightBrightness 0;
		sleep 0.05;
		_lightleft setLightBrightness _brightness;  
		_lightfrontleft setLightBrightness _brightness;  
	} else {  
		_leftRed = true;  
		_lightleft setLightBrightness 0;  
		_lightfrontleft setLightBrightness 0;  
		sleep 0.05;
		_lightright setLightBrightness _brightness;  
		_lightfrontright setLightBrightness _brightness;  
	};
	sleep 0.22;  
};  
deleteVehicle _lightleft;
deleteVehicle _lightright;
deleteVehicle _lightfrontleft;
deleteVehicle _lightfrontright;