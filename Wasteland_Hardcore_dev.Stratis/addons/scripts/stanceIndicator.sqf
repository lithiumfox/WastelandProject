if (isDedicated) exitWith {};

#define STAND_UP 91003
#define STAND_MIDDLE 91002
#define STAND_DOWN 91001
#define CROUCH_UP 92003
#define CROUCH_MIDDLE 92002
#define CROUCH_DOWN 92001
#define PRONE_UP 93003
#define PRONE_MIDDLE 93002
#define PRONE_DOWN 93001
#define STEP_LEFT 94001
#define STEP_RIGHT 94002
#define IDC_ARRAY [STAND_UP, STAND_MIDDLE, STAND_DOWN, CROUCH_UP, CROUCH_MIDDLE, CROUCH_DOWN, PRONE_UP, PRONE_MIDDLE, PRONE_DOWN, STEP_LEFT, STEP_RIGHT];
#define ACTIVE_COLOR [1, 1, 1, 1];

disableSerialization;

setStance =
{
	_position = call getStance;
	_stance = _position select 0;
	_verticalPosition = _position select 1;
	_horizontalPosition = _position select 2;
	_display = uiNameSpace getVariable "stanceIndicator";

	[] call resetStance;

	if( _stance == "STAND" ) then
	{
		switch (_verticalPosition) do
		{
			case "UP":
			{
				(_display displayCtrl STAND_UP) ctrlSetBackgroundColor ACTIVE_COLOR;
			};

			case "MIDDLE":
			{
				(_display displayCtrl STAND_MIDDLE) ctrlSetBackgroundColor ACTIVE_COLOR;
			};

			case "DOWN":
			{
				(_display displayCtrl STAND_DOWN) ctrlSetBackgroundColor ACTIVE_COLOR;
			};
		};
	};

	if( _stance == "CROUCH" ) then
	{
		switch (_verticalPosition) do
		{
			case "UP":
			{
				(_display displayCtrl CROUCH_UP) ctrlSetBackgroundColor ACTIVE_COLOR;
			};

			case "MIDDLE":
			{
				(_display displayCtrl CROUCH_MIDDLE) ctrlSetBackgroundColor ACTIVE_COLOR;
			};

			case "DOWN":
			{
				(_display displayCtrl CROUCH_DOWN) ctrlSetBackgroundColor ACTIVE_COLOR;
			};
		};
	};
	
	if( _stance == "PRONE" ) then
	{
		switch (_verticalPosition) do
		{
			case "UP":
			{
				(_display displayCtrl PRONE_UP) ctrlSetBackgroundColor ACTIVE_COLOR;
			};

			case "MIDDLE":
			{
				(_display displayCtrl PRONE_MIDDLE) ctrlSetBackgroundColor ACTIVE_COLOR;
			};

			case "DOWN":
			{
				(_display displayCtrl PRONE_DOWN) ctrlSetBackgroundColor ACTIVE_COLOR;
			};
		};
	};

	switch (_horizontalPosition) do
	{
		case "LEFT":
		{
			(_display displayCtrl STEP_LEFT) ctrlSetBackgroundColor ACTIVE_COLOR;
		};

		case "RIGHT":
		{
			(_display displayCtrl STEP_RIGHT) ctrlSetBackgroundColor ACTIVE_COLOR;
		};
	};
};

getStance =
{
	_animation = animationState player;
	_stance = stance player;
	_vPosition = "MIDDLE";
	_hPosition = "MIDDLE";

	// get vertical position
	if ( [_animation, "down"] call findStr ) then
	{
		_vPosition = "DOWN";
	};
	
	if ( [_animation, "up"] call findStr ) then
	{
		_vPosition = "UP";
	};
	
	// get horizontal position
	if ( [_animation, "left"] call findStr ) then
	{
		_hPosition = "LEFT";
	};
	
	if ( [_animation, "right"] call findStr ) then
	{
		_hPosition = "RIGHT";
	};
	
	[_stance, _vPosition, _hPosition]
};

resetStance = 
{
	_display = uiNameSpace getVariable "stanceIndicator";
	{
		(_display displayCtrl _x) ctrlSetBackgroundColor [1, 1, 1, 0];
	} forEach IDC_ARRAY;
};

findStr =
{
	_str1 = toArray(_this select 0);
	_str2 = toArray(_this select 1);
	_substr = [];
	_result = false;
	
	for "_i" from 0 to ((count _str2) - 1) do 
	{
		_substr set [_i, _str1 select (count _str1 - count _str2 + _i)];
	};
	
	if([_substr, _str2] call BIS_fnc_areEqual) then 
	{
		_result = true;
	};
	
	_result
};

/*----------------------------------*/

waitUntil {!isNull player && player == player};

500 cutRsc ["stanceIndicator", "PLAIN"];

[] call setStance;
_position = call getStance;


player addEventHandler ["AnimDone", 
{
	_position = call getStance;
	[] call setStance;
}];
