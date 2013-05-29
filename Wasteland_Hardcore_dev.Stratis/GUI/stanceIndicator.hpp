class GUI {
	idc = -1;
	colorBackground[] = {1, 1, 1, 0.5};
	type = CT_STATIC;
	style = ST_LEFT;
	colorText[] = {1, 1, 1, 1};
	font = "PuristaMedium";
	sizeEx = 0.04;
	text = "";
};

 class stanceIndicator {
        idd = -1;
		duration = 1e+011;
		movingEnable = 1;
		enableSimulation = 1;
		enableDisplay = 1;
        name = "stanceIndicator";
        onLoad = "uiNamespace setVariable ['stanceIndicator', _this select 0]";
    
		class controls
		{
			class stanceIndicator_STAND_BG: GUI
			{
				idc = -1;
				x = 0.8755 * safezoneW + safezoneX;
				y = 0.043 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1,1, 0.5 };
			};
			class stanceIndicator_CROUCH_BG: GUI
			{
				idc = -1;
				x = 0.8755 * safezoneW + safezoneX;
				y = 0.051 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1,1, 0.5 };
			};
			class stanceIndicator_PRONE_BG: GUI
			{
				idc = -1;
				x = 0.8755 * safezoneW + safezoneX;
				y = 0.059 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1,1, 0.5 };
			};
			class stanceIndicator_STEP_LEFT_BG: GUI
			{
				idc = -1;
				x = 0.8715 * safezoneW + safezoneX;
				y = 0.043 * safezoneH + safezoneY;
				w = ( 0.02 / 6 ) * safezoneW;
				h = ( 0.0055 * safezoneH ) * 4;
				colorBackground[] = { 1, 1,1, 0.5 };
			};
			class stanceIndicator_STEP_RIGHT_BG: GUI
			{
				idc = -1;
				x = (0.869219 + 0.0225) * safezoneW + safezoneX;
				y = 0.043 * safezoneH + safezoneY;
				w = ( 0.02 / 6 ) * safezoneW;
				h = ( 0.0055 * safezoneH ) * 4;
				colorBackground[] = { 1, 1,1, 0.5 };
			};
			class stanceIndicator_STAND_UP: GUI
			{
				idc = 91003;
				x = 0.8755 * safezoneW + safezoneX;
				y = 0.043 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1, 1, 0 };
			};
			class stanceIndicator_STAND_MIDDLE: GUI
			{
				idc = 91002;
				x = 0.8755 * safezoneW + safezoneX + ((( 0.015 / 2 ) * safezoneW) / 2);
				y = 0.043 * safezoneH + safezoneY;
				w = ( 0.015 / 2 ) * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1, 1, 0 };
			};
			class stanceIndicator_STAND_DOWN: GUI
			{
				idc = 91001;
				x = 0.8755 * safezoneW + safezoneX + ((( 0.015 / 4 ) * safezoneW) * 1.5);
				y = 0.043 * safezoneH + safezoneY;
				w = ( 0.015 / 4 ) * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1, 1, 0 };
			};
			class stanceIndicator_CROUCH_UP: GUI
			{
				idc = 92003;
				x = 0.8755 * safezoneW + safezoneX;
				y = 0.051 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1, 1, 0 };
			};
			class stanceIndicator_CROUCH_MIDDLE: GUI
			{
				idc = 92002;
				x = 0.8755 * safezoneW + safezoneX + ((( 0.015 / 2 ) * safezoneW) / 2);
				y = 0.051 * safezoneH + safezoneY;
				w = ( 0.015 / 2 ) * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1, 1, 0 };
			};
			class stanceIndicator_CROUCH_DOWN: GUI
			{
				idc = 92001;
				x = 0.8755 * safezoneW + safezoneX + ((( 0.015 / 4 ) * safezoneW) * 1.5);
				y = 0.051 * safezoneH + safezoneY;
				w = ( 0.015 / 4 ) * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1, 1, 0 };
			};
			class stanceIndicator_PRONE_UP: GUI
			{
				idc = 93003;
				x = 0.8755 * safezoneW + safezoneX;
				y = 0.059 * safezoneH + safezoneY;
				w = 0.015 * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1, 1, 0 };
			};
			class stanceIndicator_PRONE_MIDDLE: GUI
			{
				idc = 93002;
				x = 0.8755 * safezoneW + safezoneX + ((( 0.015 / 2 ) * safezoneW) / 2);
				y = 0.059 * safezoneH + safezoneY;
				w = ( 0.015 / 2 ) * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1, 1, 0 };
			};
			class stanceIndicator_PRONE_DOWN: GUI
			{
				idc = 93001;
				x = 0.8755 * safezoneW + safezoneX + ((( 0.015 / 4 ) * safezoneW) * 1.5);
				y = 0.059 * safezoneH + safezoneY;
				w = ( 0.015 / 4 ) * safezoneW;
				h = 0.006 * safezoneH;
				colorBackground[] = { 1, 1, 1, 0 };
			};
			class stanceIndicator_STEP_LEFT: GUI
			{
				idc = 94001;
				x = 0.8715 * safezoneW + safezoneX;
				y = 0.043 * safezoneH + safezoneY;
				w = ( 0.02 / 6 ) * safezoneW;
				h = ( 0.0055 * safezoneH ) * 4;
				colorBackground[] = { 1, 1, 1, 0.5 };
			};
			class stanceIndicator_STEP_RIGHT: GUI
			{
				idc = 94002;
				x = (0.869219 + 0.0225) * safezoneW + safezoneX;
				y = 0.043 * safezoneH + safezoneY;
				w = ( 0.02 / 6 ) * safezoneW;
				h = ( 0.0055 * safezoneH ) * 4;
				colorBackground[] = { 1, 1, 1, 0.5 };
			};
        };
    };