#ifndef _RESINCL_HPP
#define _RESINCL_HPP

/*******************/
/*  Tactical menu  */
/*******************/

// Menu commands
  // main menu
#define CMD_SEPARATOR     -1
#define CMD_NOTHING       -2
#define CMD_HIDE_MENU     -3
#define CMD_BACK          -4
// Custom menu command
#define CMD_EXECUTE       -5

enum
{
// note: this CMD should be if possible organized as is menu
// (items from the same menu together)
// this makes searching much easier

//main menu level
CMD_GETIN,
CMD_GETOUT,
CMD_ACTION,

// move submenu

// other commands
CMD_ADVANCE,
CMD_STAY_BACK,
CMD_FLANK_LEFT,
CMD_FLANK_RIGHT,
CMD_NEXT_WAYPOINT,
CMD_HIDE,
CMD_JOIN,
CMD_STOP,
CMD_EXPECT,
CMD_MOVE,

  // formations
CMD_FORM_COLUMN,
CMD_FORM_STAGCOL,
CMD_FORM_WEDGE,
CMD_FORM_ECHLEFT,
CMD_FORM_ECHRIGHT,
CMD_FORM_VEE,
CMD_FORM_LINE,
CMD_FORM_DIAMOND,
CMD_FORM_FILE,

// engage
CMD_ENGAGE,
CMD_LOOSE_FORM,
CMD_KEEP_FORM,

CMD_HOLD_FIRE,
CMD_OPEN_FIRE,
CMD_FIRE,
// status
CMD_WATCH,
CMD_WATCH_AROUND,
CMD_WATCH_AUTO,
CMD_WATCH_DIR,

// combat modes
CMD_STEALTH,
CMD_COMBAT,
CMD_AWARE,
CMD_SAFE,

// heal
CMD_HEAL,

//suppress fire
CMD_SUPPRESS,

CMD_POS_UP,
CMD_POS_MIDDLE,
CMD_POS_DOWN,
CMD_POS_AUTO,
  // teams
CMD_TEAM_MAIN,
CMD_TEAM_RED,
CMD_TEAM_GREEN,
CMD_TEAM_BLUE,
CMD_TEAM_YELLOW,
CMD_ASSIGN_MAIN,
CMD_ASSIGN_RED,
CMD_ASSIGN_GREEN,
CMD_ASSIGN_BLUE,
CMD_ASSIGN_YELLOW,
CMD_TEAM_DISSOLVE,

// radio
CMD_RADIO_ALPHA,
CMD_RADIO_BRAVO,
CMD_RADIO_CHARLIE,
CMD_RADIO_DELTA,
CMD_RADIO_ECHO,
CMD_RADIO_FOXTROT,
CMD_RADIO_GOLF,
CMD_RADIO_HOTEL,
CMD_RADIO_INDIA,
CMD_RADIO_JULIET,

// reply commands

CMD_REPLY_DONE,
CMD_REPLY_FAIL,
CMD_REPLY_COPY,
CMD_REPLY_REPEAT,
CMD_REPLY_WHERE_ARE_YOU,
CMD_REPORT,
CMD_REPLY_ENGAGING,
CMD_REPLY_UNDER_FIRE,
CMD_REPLY_HIT,
CMD_REPLY_ONE_LESS,
CMD_REPLY_FIREREADY,
CMD_REPLY_FIRENOTREADY,
CMD_REPLY_KILLED,
CMD_REPLY_AMMO_LOW,
CMD_REPLY_FUEL_LOW,
CMD_REPLY_INJURED,

CMD_SUPPORT_MEDIC,
CMD_SUPPORT_AMBULANCE,
CMD_SUPPORT_REPAIR,
CMD_SUPPORT_REARM,
CMD_SUPPORT_REFUEL,
CMD_SUPPORT_DONE,

CMD_RADIO_CUSTOM,
CMD_RADIO_CUSTOM_1,
CMD_RADIO_CUSTOM_2,
CMD_RADIO_CUSTOM_3,
CMD_RADIO_CUSTOM_4,
CMD_RADIO_CUSTOM_5,
CMD_RADIO_CUSTOM_6,
CMD_RADIO_CUSTOM_7,
CMD_RADIO_CUSTOM_8,
CMD_RADIO_CUSTOM_9,
CMD_RADIO_CUSTOM_0,

CMD_UNIT_1,
CMD_UNIT_2,
CMD_UNIT_3,
CMD_UNIT_4,
CMD_UNIT_5,
CMD_UNIT_6,
CMD_UNIT_7,
CMD_UNIT_8,
CMD_UNIT_9,
CMD_UNIT_10,
CMD_UNIT_11,
CMD_UNIT_12,
CMD_UNITS_ALL,

CMD_MY_VEHICLE,

CMD_SELECT_MAIN,
CMD_SELECT_RED,
CMD_SELECT_GREEN,
CMD_SELECT_BLUE,
CMD_SELECT_YELLOW,

CMD_VEHICLE_1,
CMD_VEHICLE_2,
CMD_VEHICLE_3,
CMD_VEHICLE_4,
CMD_VEHICLE_5,
CMD_VEHICLE_6,
CMD_VEHICLE_7,
CMD_VEHICLE_8,
CMD_VEHICLE_9,
CMD_VEHICLE_10,
CMD_VEHICLE_11,
CMD_VEHICLE_12,

CMD_SINGLE_UNITS,

CMD_MP_CHANNEL_GLOBAL,
CMD_MP_CHANNEL_SIDE,
CMD_MP_CHANNEL_COMMAND,
CMD_MP_CHANNEL_GROUP,
CMD_MP_CHANNEL_VEHICLE,

CMD_CONVERSATION,

// Context sensitive commands
CMD_MOVE_AUTO,
CMD_STOP_AUTO,
CMD_WATCH_CTX,
CMD_GETIN_AUTO,
CMD_REARM_AUTO,
CMD_ATTACK_AUTO,
CMD_SELECT_AUTO,
CMD_SELECT_AUTO_ADD,
CMD_DESELECT_AUTO,
CMD_JOIN_AUTO,
CMD_OPEN_FIRE_AUTO,
CMD_HOLD_FIRE_AUTO,
CMD_COMPLEX_COMMAND,

CMD_SELECT_UNIT_FROM_BAR,
CMD_DESELECT_UNIT_FROM_BAR,
CMD_SELECT_VEHICLE_FROM_BAR,
CMD_DESELECT_VEHICLE_FROM_BAR,
CMD_SELECT_TEAM_FROM_BAR,
CMD_DESELECT_TEAM_FROM_BAR,

CMD_JOIN_ALL,

CMD_SWITCH_TO_LEADER,
CMD_SWITCH_TO_SELECTED,

CMD_NOTARGET,

CMD_HC_SELECT_AUTO,
CMD_HC_SELECT_AUTO_ADD,
CMD_HC_DESELECT_AUTO,
CMD_HC_SELECT_UNIT_FROM_BAR,
CMD_HC_DESELECT_UNIT_FROM_BAR,
CMD_HC_SELECT_TEAM_FROM_BAR,
CMD_HC_DESELECT_TEAM_FROM_BAR,
};

/// In-game UI hiding animation type
enum HideType
{
  HTNone, // no animation
  HTFade, // fade in / fade out
  HTMoveLeft, // move from / to the left
  HTMoveRight // move from / to the right
};


/*******************/
/*  Controls       */
/*******************/

// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

enum
{
  SPTPlain,
  SPTPercents
};

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2

// Xbox buttons
#define KEY_XINPUT                0x00050000

#define KEY_XBOX_A                KEY_XINPUT + 0
#define KEY_XBOX_B                KEY_XINPUT + 1
#define KEY_XBOX_X                KEY_XINPUT + 2
#define KEY_XBOX_Y                KEY_XINPUT + 3
#define KEY_XBOX_Up               KEY_XINPUT + 4
#define KEY_XBOX_Down             KEY_XINPUT + 5
#define KEY_XBOX_Left             KEY_XINPUT + 6
#define KEY_XBOX_Right            KEY_XINPUT + 7
#define KEY_XBOX_Start            KEY_XINPUT + 8
#define KEY_XBOX_Back             KEY_XINPUT + 9
#define KEY_XBOX_LeftBumper       KEY_XINPUT + 10
#define KEY_XBOX_RightBumper      KEY_XINPUT + 11
#define KEY_XBOX_LeftTrigger      KEY_XINPUT + 12
#define KEY_XBOX_RightTrigger     KEY_XINPUT + 13
#define KEY_XBOX_LeftThumb        KEY_XINPUT + 14
#define KEY_XBOX_RightThumb       KEY_XINPUT + 15
#define KEY_XBOX_LeftThumbXRight  KEY_XINPUT + 16
#define KEY_XBOX_LeftThumbYUp     KEY_XINPUT + 17
#define KEY_XBOX_RightThumbXRight KEY_XINPUT + 18
#define KEY_XBOX_RightThumbYUp    KEY_XINPUT + 19
#define KEY_XBOX_LeftThumbXLeft   KEY_XINPUT + 20
#define KEY_XBOX_LeftThumbYDown   KEY_XINPUT + 21
#define KEY_XBOX_RightThumbXLeft  KEY_XINPUT + 22
#define KEY_XBOX_RightThumbYDown  KEY_XINPUT + 23

// Predefined controls
#define IDC_OK            1
#define IDC_CANCEL        2
#define IDC_AUTOCANCEL    3
#define IDC_ABORT         4
#define IDC_RESTART       5

#define IDC_MAP             51
#define IDC_WEATHER         52
#define IDC_POSITION        53
#define IDC_TIME            54
#define IDC_DATE            55
#define IDC_BRIEFING        56
#define IDC_MAP_NOTES       57
#define IDC_MAP_PLAN        58
#define IDC_MAP_TEAM_SWITCH 59
#define IDC_MAP_GROUP       60
//#define IDC_MAP_BRIEFING    61
//#define IDC_MAP_DEBRIEFING  62
#define IDC_RADIO_ALPHA     63
#define IDC_RADIO_BRAVO     64
#define IDC_RADIO_CHARLIE   65
#define IDC_RADIO_DELTA     66
#define IDC_RADIO_ECHO      67
#define IDC_RADIO_FOXTROT   68
#define IDC_RADIO_GOLF      69
#define IDC_RADIO_HOTEL     70
#define IDC_RADIO_INDIA     71
#define IDC_RADIO_JULIET    72
#define IDC_MAP_NAME        73
#define IDC_WARRANT         74
#define IDC_GPS             75

#define IDC_NOTEPAD_PICTURE 76

// - diary topics (used in multiple displays - diary, map, briefing, debriefing)
#define IDC_DIARY_TOPIC_MAP           80
#define IDC_DIARY_TOPIC_1             81
#define IDC_DIARY_TOPIC_2             82
#define IDC_DIARY_TOPIC_3             83
#define IDC_DIARY_TOPIC_4             84
#define IDC_DIARY_TOPIC_5             85
#define IDC_DIARY_TOPIC_6             86
#define IDC_DIARY_TOPIC_7             87
#define IDC_DIARY_TOPIC_8             88
#define IDC_DIARY_TOPIC_9             89

#define IDC_HSLIDER         98
#define IDC_VSLIDER         99

#define IDC_DIARY_TOPIC_LIST          1001
#define IDC_DIARY_TOPIC_LISTINDEX     1002
#define IDC_DIARY_TOPIC_HTML          1003
#define IDC_DIARY_TOPIC_ADD_RECORD    1004
#define IDC_DIARY_TOPIC_HTML_GROUP    1013

#define IDC_DIARY_PLAYER_NAME         111
#define IDC_DIARY_MISSION_NAME        112
#define IDC_DIARY_CURRENT_TASK        113
#define IDC_DIARY_PLAYER_RANK         116

#define IDC_DIARY_TOPIC_BACKGROUND    1021
#define IDC_DIARY_SUBTOPIC_BACKGROUND 1022
#define IDC_DIARY_CONTENT_BACKGROUND  1023


// Instances of display
#define IDD_MAIN              0
#define IDD_GAME              1
#define IDD_SINGLE_MISSION    2
#define IDD_OPTIONS           3
#define IDD_CONFIGURE         4
#define IDD_OPTIONS_VIDEO     5
#define IDD_OPTIONS_AUDIO     6
#define IDD_DIFFICULTY        7
#define IDD_MULTIPLAYER       8
#define IDD_LOAD_AAR          9
#define IDD_MAIN_MAP          12
#define IDD_SAVE              13
#define IDD_END               14
#define IDD_SERVER            17
#define IDD_CLIENT            18
#define IDD_IP_ADDRESS        19
#define IDD_SERVER_SETUP      20
#define IDD_CLIENT_SETUP      21
#define IDD_CLIENT_WAIT       22
#define IDD_CHAT              24
#define IDD_CUSTOM_ARCADE     25
#define IDD_ARCADE_MAP        26
#define IDD_ARCADE_UNIT       27
#define IDD_ARCADE_WAYPOINT   28
#define IDD_TEMPLATE_SAVE     29
#define IDD_TEMPLATE_LOAD     30
#define IDD_LOGIN             31
#define IDD_INTEL             32
#define IDD_CAMPAIGN          33
#define IDD_CREDITS           34
#define IDD_INTEL_GETREADY    37
#define IDD_ARCADE_GROUP      40
#define IDD_ARCADE_SENSOR     41
#define IDD_NEW_USER          42
#define IDD_CAMPAIGN_LOAD     43
#define IDD_ARCADE_EFFECTS    44
#define IDD_ARCADE_MARKER     45
#define IDD_MISSION           46
#define IDD_INTRO             47
#define IDD_OUTRO             48
#define IDD_INTERRUPT         49
#define IDD_DEBRIEFING        50
#define IDD_SELECT_ISLAND     51
#define IDD_SERVER_GET_READY  52
#define IDD_CLIENT_GET_READY  53
#define IDD_INSERT_MARKER     54
#define IDD_VOICE_CHAT        55
#define IDD_DEBUG             56
#define IDD_HINTC             57
#define IDD_MISSION_END       58
#define IDD_SERVER_SIDE       59
#define IDD_CLIENT_SIDE       60
#define IDD_MULTIPLAYER_ROLE  61
#define IDD_AWARD             62
#define IDD_CHANNEL           63
#define IDD_PASSWORD          64
#define IDD_MP_PLAYERS        65
#define IDD_REVERT            66
#define IDD_PORT              69
#define IDD_MP_SETUP          70
#define IDD_FILTER            71
#define IDD_HINTC_EX          72
#define IDD_SELECT_PROFILE    73
#define IDD_CAMPAIGN_SELECT   74
#define IDD_PROFILE           75
#define IDD_PROFILE_NAME        76
#define IDD_PROFILE_FACE        77
#define IDD_PROFILE_VOICE       78
#define IDD_PROFILE_CONTROLLER  79
#define IDD_PROFILE_AUDIO       80
#define IDD_PROFILE_VIDEO       81
#define IDD_PROFILE_LIVE        82
#define IDD_MP_TYPE             83
#define IDD_MP_PASSCODE         84
#define IDD_SELECT_DIFFICULTY   85
#define IDD_OPTIMATCH_FILTER    86
#define IDD_QUICKMATCH          87
#define IDD_FRIENDS             88
#define IDD_FRIENDS_OPTIONS     89
#define IDD_XWIZARD_TEMPLATE    90
#define IDD_XWIZARD_INTEL       91
#define IDD_XWIZARD_NAME        92
#define IDD_XWIZARD_ISLAND      93
#define IDD_XWIZARD_WEATHER     94
#define IDD_XWIZARD_TIME        95
#define IDD_XWIZARD_UNIT        96
#define IDD_XWIZARD_MAP         97
#define IDD_XWIZARD_UNIT_SELECT 98
#define IDD_XWIZARD_UNIT_SELECT_CUSTOM  99
#define IDD_XWIZARD_WAYPOINT            100
#define IDD_DOWNLOAD_CONTENT            101
#define IDD_DOWNLOAD_CONTENT_DETAILS    102
#define IDD_XPLAYERS                    103
#define IDD_XPLAYERS_ACTIONS            104
#define IDD_XPLAYERS_FEEDBACK           105
#define IDD_GEAR                        106
#define IDD_DOWNLOAD_CONTENT_INSTALL    108
#define IDD_SERVER_SETTINGS             109
#define IDD_SERVER_ADVANCED             110
#define IDD_SERVER_SELECT_PLAYER        112
#define IDD_DEDICATED_SERVER            114
#define IDD_FRIEND_MISSIONS             115
#define IDD_LIVE_STATS                  116
#define IDD_LIVE_STATS_BOARD            117
#define IDD_NETWORK_CONDITIONS          118
#define IDD_SEND_VOICE_MAIL             119
#define IDD_RECEIVE_VOICE_MAIL          120

#define IDD_EDIT_OBJECT                 121
#define IDD_MISSION_LOAD                122
#define IDD_MISSION_SAVE                123

#define IDD_EDIT_DIARY_RECORD           125

#define IDD_SERVER_VOTED                126
#define IDD_DEDICATED_SERVER_SETTINGS   127

#define IDD_MISSION_EDITOR              128

#define IDD_DIARY                       129

#define IDD_TEAM_SWITCH                 130

#define IDD_CONFIGURE_ACTION            131

#define IDD_HOST_SETTINGS               132

#define IDD_MINIMAP                     133
#define IDD_OVERLAY_CREATE              134
#define IDD_OVERLAY_LOAD                135

#define IDD_ESRB                        136

#define IDD_MISSION_EDITOR_REALTIME     137

//TODO: Has to be checked by Pete!
#define IDD_EDIT_BRIEFING               138
#define IDD_LIVE                        139

#define IDD_SINGLEPLAYER                140

#define IDD_LASE                        141

#define IDD_LAYER_LOAD                  142

#define IDD_CONTROLS                    143
#define IDD_INTERRUPT_REVERT            144

#define IDD_PERFORMANCE                 145
#define IDD_XWIZARD_PARAMS              146
#define IDD_XWIZARD_PARAMETER           147

#define IDD_CONFIGURE_JOYSTICKS         148
#define IDD_CAPTURE                     149
#define IDD_CUSTOMIZE_CONTROLLER        150
#define IDD_GAMEOPTIONS                 151
#define IDD_DIFFICULTY_SELECT           152

//new editor dialog
#define IDD_ARCADE_MODULES              153

#define IDD_SELECT_SAVE                 154

#define IDD_DSINTERFACE                 155

#define IDD_ADDON_ACTIONS               156

// MessageBoxes
#define IDD_MSG_DELETEPLAYER      200
#define IDD_MSG_DELETEGAME        201
#define IDD_MSG_CLEARTEMPLATE     202
#define IDD_MSG_EXITTEMPLATE      203
#define IDD_MSG_LAUNCHGAME        204 // ADDED IN PATCH 1.04

#define IDD_MSG_NEWACCOUNT        205

#define IDD_MSG_FRIENDS_REMOVE    206
#define IDD_MSG_FRIENDS_BLOCK     207
#define IDD_MSG_FRIENDS_INVITE    208

#define IDD_MSG_DELETEMISSION     209

#define IDD_MSG_XONLINE_CONNECTION_FAILED 210
#define IDD_MSG_XONLINE_UPDATE_REQUIRED   211
#define IDD_MSG_XONLINE_SERVER_BUSY       212
#define IDD_MSG_XONLINE_REQUIRED_MSG      213
#define IDD_MSG_XONLINE_RECOMMENDED_MSG   214
#define IDD_MSG_XONLINE_INVALID_USER      215
#define IDD_MSG_XONLINE_WRONG_PASSCODE    216

#define IDD_MSG_CANCEL_SUBSCRIPTION       217
#define IDD_MSG_SUBSCRIBE                 218
#define IDD_MSG_PURCHASE                  219
#define IDD_MSG_INSTALL_ABORT             220
#define IDD_MSG_INSTALL_RESULT            221

#define IDD_MSG_DECLINE_INVITATION        222
#define IDD_MSG_REVOKE_INVITATION         223
#define IDD_MSG_BLOCK_REQUEST             224
#define IDD_MSG_DECLINE_REQUEST           225
#define IDD_MSG_CANCEL_REQUEST            226
#define IDD_MSG_KICK_OFF                  227
#define IDD_MSG_TERMINATE_SESSION         228
#define IDD_MSG_NETWORK_CONDITIONS        229

#define IDD_MSG_STATS_NOT_UPLOADED        230

#define IDD_MSG_LOAD_FAILED               231
#define IDD_MSG_DELETESAVE                232

#define IDD_MSG_DISK_FULL                 233

#define IDD_MSG_RESTART_MISSION           234
#define IDD_MSG_SAVE_MISSION              235
#define IDD_MSG_SIGN_OUT                  236
#define IDD_MSG_LOAD_MISSION              237
#define IDD_MSG_NEGATIVE_FEEDBACK         238
#define IDD_MSG_PENDING_INVITATION        239
#define IDD_MSG_HOST_SESSION              240
#define IDD_MSG_ROLES_LOST                241
#define IDD_MSG_ACCEPT_INVITATION         242
#define IDD_MSG_MP_PLAYER_COUNT           243
#define IDD_MSG_GAME_JOIN                 244
#define IDD_MSG_EDITOR_WIZARD_NONAME_MISSION  245

#define IDD_MSG_RESTART_NEEDED    246

// new editor
#define IDD_MSG_COMMIT_OVERLAY    247
#define IDD_MSG_CLEAR_OVERLAY     248
#define IDD_MSG_LOAD_OVERLAY      249
#define IDD_MSG_EXIT_OVERLAY      250
#define IDD_MSG_CREATE_OVERLAY    251
#define IDD_MSG_CLOSE_OVERLAY     252
#define IDD_MSG_LOAD_AAR          253
#define IDD_MSG_CLEAR_MISSION     254
#define IDD_MSG_RETRY_MISSION     255
#define IDD_MSG_DELETE_DIARY_RECORD 256

// XBOX 360 profile and save messages
#define IDD_MSG_XBOX_NO_SIGN_IN      257
#define IDD_MSG_XBOX_NO_STORAGE      258
#define IDD_MSG_XBOX_STORAGE_CHANGED 259
#define IDD_MSG_XBOX_SAVE_FAILED     260
#define IDD_MSG_XBOX_NO_STORAGE_ON_INVITE      261


// InGameUI
#define IDD_UNITINFO              300
#define IDD_HINT                  301
#define IDD_TASKHINT              302

// Virtual keyboard
#define IDC_VK_SHIFT              1001
#define IDC_VK_CAPSLOCK           1002
#define IDC_VK_SYMBOLS            1003
#define IDC_VK_ACCENTS            1004
#define IDC_VK_BACKSPACE          1005
#define IDC_VK_LEFT               1006
#define IDC_VK_RIGHT              1007
#define IDC_VK_BASE               1010

// Main display controls
#define IDC_MAIN_GAME               101
#define IDC_MAIN_OPTIONS            102
#define IDC_MAIN_TRAINING           103
#define IDC_MAIN_CUSTOM             104
#define IDC_MAIN_MULTIPLAYER        105
#define IDC_MAIN_QUIT               106
#define IDC_MAIN_CREDITS            107
#define IDC_MAIN_ARCADE             108
#define IDC_MAIN_PLAYER             109
#define IDC_MAIN_RANK               110
#define IDC_MAIN_ISLAND             111
#define IDC_MAIN_DATE               112
#define IDC_MAIN_MISSION            113
#define IDC_MAIN_CONTINUE           114
#define IDC_MAIN_EDITOR             115
#define IDC_MAIN_BOOK               116
#define IDC_MAIN_SINGLE             117
#define IDC_MAIN_VERSION            118
#define IDC_MAIN_SINGLE_PROFILES    119
#define IDC_MAIN_CAMPAIGN_PROFILES  120
#define IDC_MAIN_MP_PROFILES        121
#define IDC_MAIN_SETTINGS_PROFILES  122
#define IDC_MAIN_SYSTEM_LINK        123
#define IDC_MAIN_CUSTOM_PROFILES    124
#define IDC_MAIN_SIGN_IN_STATUS     125
#define IDC_MAIN_PLAYER_LABEL       126
#define IDC_MAIN_PLAYER_NAME        127
#define IDC_MAIN_CONTROLS           128
#define IDC_MAIN_PLAYER_ID          129
#define IDC_MAIN_PLAYER_COLOR       130
#define IDC_MAIN_SERVICE_ID_LABEL   131
#define IDC_MAIN_NICKNAME_LABEL     132
#define IDC_MAIN_NICKNAME_BG        133

#define IDC_MAIN_LOAD               134
#define IDC_MAIN_SAVE               135

#define IDC_MAIN_AAR                136
#define IDC_MAIN_ACHIEVEMENTS       137
#define IDC_MAIN_SINGLEPLAYER       138

#define IDC_MAIN_TAB_LOGIN          9001
#define IDC_MAIN_TAB_LIBRARY        9002
#define IDC_MAIN_TAB_SINGLE         9003
#define IDC_MAIN_TAB_MULTIPLAYER    9004
#define IDC_MAIN_TAB_OPTIONS        9005
#define IDC_MAIN_TAB_CONTROLS       9006
#define IDC_MAIN_TAB_EDITOR         9007
#define IDC_MAIN_TAB_QUIT           9008
#define IDC_MAIN_TAB_AAR            9011

#define IDC_BUILD_VERSION           9009
#define IDC_BUILD_DATE              9010

// Single player display controls
#define IDC_SP_TRAINING             101
#define IDC_SP_EDITOR               102
#define IDC_SP_MISSION              103
#define IDC_SP_CAMPAIGN             104

// Select profile display controls
#define IDC_PROFILES_LIST           101
#define IDC_PROFILES_HEAD           102
#define IDC_PROFILES_TITLE          103
#define IDC_PROFILES_CONTROLLER     104
#define IDC_PROFILES_DIFFICULTY     105
#define IDC_PROFILES_MISSION        106
#define IDC_PROFILES_LIVE           107
#define IDC_PROFILES_MISSION_TEXT   108
#define IDC_PROFILES_SIGN_IN_STATUS 109
#define IDC_PROFILES_EDIT           110
#define IDC_PROFILES_DELETE         111

// Edit profile display controls
#define IDC_PROFILE_NAME            101
#define IDC_PROFILE_FACE            102
#define IDC_PROFILE_VOICE           103
#define IDC_PROFILE_CONTROLLER      104
#define IDC_PROFILE_AUDIO           105
#define IDC_PROFILE_VIDEO           106
#define IDC_PROFILE_HEAD            108
#define IDC_PROFILE_SUM_NAME        109
#define IDC_PROFILE_SUM_CONTROLLER  110
#define IDC_PROFILE_SUM_LIVE        111
#define IDC_PROFILE_VOICE_MASK      112
#define IDC_PROFILE_SIGN_IN_STATUS  113
#define IDC_PROFILE_CREDITS         114
#define IDC_PROFILE_STORAGE_DEVICE  115

// Edit profile name display controls
#define IDC_PROFILE_NAME_PREVIEW    101

// Edit profile face
#define IDC_PROF_FACE_FACE          101
#define IDC_PROF_FACE_GLASSES       102
#define IDC_PROF_FACE_HEAD          103

// Edit profile voice
#define IDC_PROF_VOICE_SPEAKER          101
#define IDC_PROF_VOICE_PITCH_TITLE      102
#define IDC_PROF_VOICE_PITCH_VALUE      103
#define IDC_PROF_VOICE_PITCH            104
#define IDC_PROF_VOICE_MASK             105
#define IDC_PROF_VOICE_THROUGH_SPEAKERS 106
#define IDC_PROF_VOICE_HEAD             107
#define IDC_PROF_VOICE_DEFAULT          108

// Edit profile controller
#define IDC_PROF_CONTR_VEHICLE            101
#define IDC_PROF_CONTR_TYPE               102
#define IDC_PROF_CONTR_IMAGE              103
#define IDC_PROF_CONTR_SCHEME             104
#define IDC_PROF_CONTR_SENSITIVITY        105
#define IDC_PROF_CONTR_A                  200
#define IDC_PROF_CONTR_B                  201
#define IDC_PROF_CONTR_Y                  202
#define IDC_PROF_CONTR_X                  203
#define IDC_PROF_CONTR_WHITE              204
#define IDC_PROF_CONTR_BLACK              205
#define IDC_PROF_CONTR_LEFT               206
#define IDC_PROF_CONTR_RIGHT              207
#define IDC_PROF_CONTR_UP                 208
#define IDC_PROF_CONTR_DOWN               209
#define IDC_PROF_CONTR_BACK               210
#define IDC_PROF_CONTR_START              211
#define IDC_PROF_CONTR_LEFT_THUMB         212
#define IDC_PROF_CONTR_LEFT_THUMB_MOVE_X  213
#define IDC_PROF_CONTR_LEFT_THUMB_MOVE_Y  214
#define IDC_PROF_CONTR_RIGHT_THUMB        215
#define IDC_PROF_CONTR_RIGHT_THUMB_MOVE_X 216
#define IDC_PROF_CONTR_RIGHT_THUMB_MOVE_Y 217
#define IDC_PROF_CONTR_LEFT_TRIGGER       218
#define IDC_PROF_CONTR_RIGHT_TRIGGER      219
#define IDC_PROF_CONTR_LEFT_THUMB_MOVE    220
#define IDC_PROF_CONTR_RIGHT_THUMB_MOVE   221
#define IDC_PROF_CONTR_DPAD               222
#define IDC_PROF_CONTR_NEXT_SCHEME        223
#define IDC_PROF_CONTR_PREV_SCHEME        224
#define IDC_PROF_CONTR_Y_AXIS             225
#define IDC_PROF_CONTR_VIBRATIONS         226

// Controller buttons
// #define IDC_CONTROLLER_BUTTONS            101

// Edit profile audio options
#define IDC_PROF_AUDIO_MUSIC_TITLE  101
#define IDC_PROF_AUDIO_MUSIC_VALUE  102
#define IDC_PROF_AUDIO_MUSIC        103
#define IDC_PROF_AUDIO_RADIO_TITLE  104
#define IDC_PROF_AUDIO_RADIO_VALUE  105
#define IDC_PROF_AUDIO_RADIO        106
#define IDC_PROF_AUDIO_EFFECT_TITLE 107
#define IDC_PROF_AUDIO_EFFECT_VALUE 108
#define IDC_PROF_AUDIO_EFFECT       109
#define IDC_PROF_AUDIO_DEFAULT      110

// Edit profile video options
#define IDC_PROF_VIDEO_BRIGHT       101
#define IDC_PROF_VIDEO_BRIGHT_TITLE 102
#define IDC_PROF_VIDEO_BRIGHT_VALUE 103
#define IDC_PROF_VIDEO_GAMMA        104
#define IDC_PROF_VIDEO_GAMMA_TITLE  105
#define IDC_PROF_VIDEO_GAMMA_VALUE  106
#define IDC_PROF_VIDEO_SUBTITLES    107
#define IDC_PROF_VIDEO_RADIO        108
#define IDC_PROF_VIDEO_DEFAULT      109

// Select profile an Xbox live account display controls
#define IDC_PROFILE_LIVE_ACCOUNTS 101
#define IDC_PROFILE_LIVE_CREATE   102

// Select difficulty dialog
#define IDC_DIFF_LIST             101
#define IDC_DIFF_DESC             102

// Single mission display controls
#define IDC_SINGLE_MISSION      101
#define IDC_SINGLE_OVERVIEW     102
#define IDC_SINGLE_MISSION_PAD  103
#define IDC_SINGLE_DIFF         104
#define IDC_SINGLE_LOAD         105
#define IDC_SINGLE_TITLE        106
#define IDC_SINGLE_DELETE       107
#define IDC_SINGLE_COPY         108
#define IDC_SINGLE_EDIT         109

// Xbox style mission wizard
#define IDC_XWIZ_TEMPLATE             101
#define IDC_XWIZ_TEMPLATE_OVERVIEW    102

#define IDC_XWIZ_NAME                 101
#define IDC_XWIZ_ISLAND               102
#define IDC_XWIZ_WEATHER              103
#define IDC_XWIZ_TIME                 104
#define IDC_XWIZ_SUM_NAME             105
#define IDC_XWIZ_SUM_TIME             106
#define IDC_XWIZ_SUM_TEMPLATE         107
#define IDC_XWIZ_SUM_ISLAND           108
#define IDC_XWIZ_SUM_WEATHER          109
#define IDC_XWIZ_SUM_WEATHER_FORECAST 110
#define IDC_XWIZ_UNIT                 111
#define IDC_XWIZ_MAP                  112
#define IDC_XWIZ_SUM_DATE             113
#define IDC_XWIZ_PARAM                114
#define IDC_XWIZ_SAVE                 115

#define IDC_XWIZ_UNITS                101
#define IDC_XWIZ_UNITS_OVERVIEW       102

#define IDC_XWIZ_PARAMS               101
#define IDC_XWIZ_PARAMS_TITLES        102
#define IDC_XWIZ_PARAMS_VALUES        103
#define IDC_EDIT                      104
#define IDD_XWIZARD_PARAMETER_TITLE   105

#define IDC_XWIZ_UNIT_SELECT          101
#define IDC_XWIZ_UNIT_SELECT_TITLE    102

#define IDC_XWIZ_UNIT_CLASS               101
#define IDC_XWIZ_UNIT_TYPE                102
#define IDC_XWIZ_UNIT_COUNT               103
#define IDC_XWIZ_UNIT_SIDE                104
#define IDC_XWIZ_UNIT_SELECT_CUSTOM_TITLE 105

#define IDC_XWIZ_WP_TYPE              101
#define IDC_XWIZ_WP_BEHAVIOUR         102
#define IDC_XWIZ_WP_FORMATION         103
#define IDC_XWIZ_WP_COMBAT_MODE       104

#define IDC_XWIZ_ISLAND_LIST          101
#define IDC_XWIZ_ISLAND_MAP           102
#define IDC_XWIZ_ISLAND_SHOTS         103

#define IDC_XWIZ_WEATHER_TITLE            101
#define IDC_XWIZ_WEATHER_VALUE            102
#define IDC_XWIZ_WEATHER_FORECAST_TITLE   103
#define IDC_XWIZ_WEATHER_FORECAST_VALUE   104
#define IDC_XWIZ_FOG_TITLE                105
#define IDC_XWIZ_FOG_VALUE                106
#define IDC_XWIZ_FOG_FORECAST_TITLE       107
#define IDC_XWIZ_FOG_FORECAST_VALUE       108
#define IDC_XWIZ_VIEW_DISTANCE_TITLE      109
#define IDC_XWIZ_VIEW_DISTANCE_VALUE      110

#define IDC_XWIZ_TIME_HOUR      101
#define IDC_XWIZ_TIME_MINUTE    102
#define IDC_XWIZ_TIME_DAY       103
#define IDC_XWIZ_TIME_MONTH     104
#define IDC_XWIZ_TIME_YEAR      105

#define IDC_XWIZ_MAP_POINTS     101
#define IDC_XWIZ_MAP_DELETE     102
#define IDC_XWIZ_MAP_EDIT       103
#define IDC_XWIZ_MAP_INSERT_WP  104
#define IDC_XWIZ_MAP_NOTEPAD    105
#define IDC_XWIZ_MAP_MOVE       106

// Select campaign display
#define IDC_CAMPAIGNS_LIST            101
#define IDC_CAMPAIGNS_CAMPAIGN        102
#define IDC_CAMPAIGNS_DESCRIPTION     103
#define IDC_HOST                      104

// Campaign display
#define IDC_CAMPAIGN_HISTORY          101
#define IDC_CAMPAIGN_MIS_NAME         102
#define IDC_CAMPAIGN_MIS_DESC         103
#define IDC_CAMPAIGN_BOOK             104
#define IDC_CAMPAIGN_CAMPAIGN         105
#define IDC_CAMPAIGN_PREV             106
#define IDC_CAMPAIGN_NEXT             107
#define IDC_CAMPAIGN_DESCRIPTION      108
#define IDC_CAMPAIGN_REPLAY           109
#define IDC_CAMPAIGN_DIFF             110
#define IDC_CAMPAIGN_MISSION          111

#define IDC_CAMPAIGN_DATE             112
#define IDC_CAMPAIGN_SCORE            113
#define IDC_CAMPAIGN_DURATION         114
#define IDC_CAMPAIGN_CASUALTIES       115
#define IDC_CAMPAIGN_KILLS_TITLE      116
#define IDC_CAMPAIGN_ENEMY_ROW        117
#define IDC_CAMPAIGN_FRIENDLY_ROW     118
#define IDC_CAMPAIGN_CIVILIAN_ROW     119
#define IDC_CAMPAIGN_INFANTRY_COLUMN  120
#define IDC_CAMPAIGN_SOFT_COLUMN      121
#define IDC_CAMPAIGN_ARMORED_COLUMN   122
#define IDC_CAMPAIGN_AIRCRAFT_COLUMN  123
#define IDC_CAMPAIGN_TOTAL_COLUMN     124
#define IDC_CAMPAIGN_EINF             125
#define IDC_CAMPAIGN_ESOFT            126
#define IDC_CAMPAIGN_EARM             127
#define IDC_CAMPAIGN_EAIR             128
#define IDC_CAMPAIGN_ETOT             129
#define IDC_CAMPAIGN_FINF             130
#define IDC_CAMPAIGN_FSOFT            131
#define IDC_CAMPAIGN_FARM             132
#define IDC_CAMPAIGN_FAIR             133
#define IDC_CAMPAIGN_FTOT             134
#define IDC_CAMPAIGN_CINF             135
#define IDC_CAMPAIGN_CSOFT            136
#define IDC_CAMPAIGN_CARM             137
#define IDC_CAMPAIGN_CAIR             138
#define IDC_CAMPAIGN_CTOT             139

// Revert display
#define IDC_REVERT_BOOK               101
#define IDC_REVERT_TITLE              102
#define IDC_REVERT_QUESTION           103

// Game display controls
#define IDC_GAME_SELECT       301
#define IDC_SIDE_NAME         101

// Options display controls
#define IDC_OPTIONS_VIDEO             301
#define IDC_OPTIONS_AUDIO             302
#define IDC_OPTIONS_CONFIGURE         303
#define IDC_OPTIONS_DIFFICULTY        304
#define IDC_OPTIONS_NOTEBOOK          305
#define IDC_OPTIONS_CREDITS           306
#define IDC_OPTIONS_GAMEOPTIONS       307

#define IDC_OPTIONS_QUALITY_VALUE     101
#define IDC_OPTIONS_QUALITY_SLIDER    102
#define IDC_OPTIONS_VISIBILITY_VALUE  103
#define IDC_OPTIONS_VISIBILITY_SLIDER 104

#define IDC_OPTIONS_DRAWDISTANCE_VALUE  1336
#define IDC_OPTIONS_DRAWDISTANCE_SLIDER 1337

#define IDC_OPTIONS_RATE_VALUE        105
#define IDC_OPTIONS_RATE_SLIDER       106
#define IDC_OPTIONS_TEXTURES_VALUE    107
#define IDC_OPTIONS_TEXTURES_SLIDER   108
#define IDC_OPTIONS_GAMMA_VALUE       109
#define IDC_OPTIONS_GAMMA_SLIDER      110
#define IDC_OPTIONS_BRIGHT_VALUE      111
#define IDC_OPTIONS_BRIGHT_SLIDER     112
#define IDC_OPTIONS_RESOLUTION        113
#define IDC_OPTIONS_REFRESH           114
#define IDC_OPTIONS_OBJSHADOWS        115
//#define IDC_OPTIONS_VEHSHADOWS        116
//#define IDC_OPTIONS_CLOUDLETS         117
//#define IDC_OPTIONS_HWTL              118
#define IDC_OPTIONS_BLOOD             119
//#define IDC_OPTIONS_MULTITEXTURING    120
#define IDC_OPTIONS_WBUFFER           121
#define IDC_OPTIONS_BLOOD_TEXT        122
#define IDC_OPTIONS_TERRAIN           123

#define IDC_OBJECTS_DETAIL            124
#define IDC_TEXTURE_DETAIL            125
#define IDC_QUALITY_PREFERENCE        126
#define IDC_SHADING_DETAIL            127
#define IDC_SHADOW_DETAIL             128

#define IDC_OPTIONS_VIDEO_DEFAULT     129

#define IDC_ANISO_DETAIL              130
#define IDC_HDR_DETAIL                131
#define IDC_POSTPROCESS_EFFECTS       132
#define IDC_FSAA_DETAIL               133
#define IDC_ASPECT_RATIO              134

#define IDC_OPTIONS_LANGUAGE          135

#define IDC_OPTIONS_IGUISIZE          136
#define IDC_OPTIONS_IGUISIZE_TEXT     137
#define IDC_OPTIONS_HEADBOB           138

#define IDC_VRAM_VALUE           139

#define IDC_OPTIONS_SLIDER_FILLRATE   1234
#define IDC_OPTIONS_VALUE_FILLRATE    1236


#define IDC_OPTIONS_MUSIC_VALUE       101
#define IDC_OPTIONS_MUSIC_SLIDER      102
#define IDC_OPTIONS_EFFECTS_VALUE     103
#define IDC_OPTIONS_EFFECTS_SLIDER    104
#define IDC_OPTIONS_VOICES_VALUE      105
#define IDC_OPTIONS_VOICES_SLIDER     106
#define IDC_OPTIONS_SAMPLING          107
#define IDC_OPTIONS_HWACC             108
#define IDC_OPTIONS_EAX               109
#define IDC_OPTIONS_SINGLE_VOICE      110
#define IDC_OPTIONS_AUDIO_DEFAULT     111
#define IDC_OPTIONS_PLAYER_VOICE      112

#define IDC_DIFFICULTIES_DIFFICULTIES 101
#define IDC_OPTIONS_SUBTITLES         102
#define IDC_OPTIONS_RADIO             103
#define IDC_DIFFICULTIES_DEFAULT      104

#define IDC_DIFF_CADET_ENEMY_LEVEL      105
#define IDC_DIFF_CADET_FRIENDLY_LEVEL   106
#define IDC_DIFF_VETERAN_ENEMY_LEVEL    107
#define IDC_DIFF_VETERAN_FRIENDLY_LEVEL 108

#define IDC_DIFF_CADET_ENEMY_SKILL      109
#define IDC_DIFF_CADET_FRIENDLY_SKILL   110
#define IDC_DIFF_VETERAN_ENEMY_SKILL    111
#define IDC_DIFF_VETERAN_FRIENDLY_SKILL 112

#define IDC_DIFF_TEXT_ENEMY_SKILL       113
#define IDC_DIFF_TEXT_FRIENDLY_SKILL    114

#define IDC_DIFF_CADET_ENEMY_SKILL_ECHO       115
#define IDC_DIFF_CADET_FRIENDLY_SKILL_ECHO    116
#define IDC_DIFF_VETERAN_ENEMY_SKILL_ECHO     117
#define IDC_DIFF_VETERAN_FRIENDLY_SKILL_ECHO  118

// Configure display controls

#define IDC_CONFIG_DEFAULT            101
#define IDC_CONFIG_KEYS               102
#define IDC_CONFIG_XAXIS              103
#define IDC_CONFIG_YAXIS              104
#define IDC_CONFIG_YREVERSED          105
#define IDC_CONFIG_JOYSTICK           106
#define IDC_CONFIG_BUTTONS            107
#define IDC_CONFIG_CONTROLS_PAGE      108
#define IDC_CONFIG_FLOATING_ZONE      109
#define IDC_CONFIG_MOUSE_FILTERING    110

// Multiplayer type display controls
#define IDC_MP_TYPE_RANKED_MATCH      101
#define IDC_MP_TYPE_PLAYER_MATCH      102
#define IDC_MP_TYPE_SYSTEM_LINK       103
#define IDC_MP_TYPE_FRIENDS           104
#define IDC_MP_TYPE_DOWNLOAD          105
#define IDC_MP_TYPE_INFO              106
#define IDC_MP_TYPE_STATS             107
#define IDC_MP_TYPE_SIGN_OUT          108
#define IDC_MP_TYPE_DEDICATED_SERVER  109
#define IDC_MP_TYPE_SERVER            110
#define IDC_MP_TYPE_APPEAR_OFFLINE    111

// Xbox Live display controls
#define IDC_LIVE_QUICK_MATCH          101
#define IDC_LIVE_CUSTOM_MATCH         102
#define IDC_LIVE_CREATE_MATCH         103

// Friends dialog
#define IDC_FRIENDS_LIST              101
#define IDC_FRIENDS_STATUS            102

// Friends options dialog
#define IDC_FRIENDS_PLAYER            101
#define IDC_FRIENDS_GAME_INVITE       102
#define IDC_FRIENDS_GAME_CANCEL       103
#define IDC_FRIENDS_GAME_ACCEPT       104
#define IDC_FRIENDS_GAME_DECLINE      105
#define IDC_FRIENDS_GAME_JOIN         106
#define IDC_FRIENDS_ACCEPT            107
#define IDC_FRIENDS_DECLINE           108
#define IDC_FRIENDS_STOP              109
#define IDC_FRIENDS_CANCEL            110
#define IDC_FRIENDS_REMOVE            111
#define IDC_FRIENDS_VOICE             112
#define IDC_FRIENDS_FEEDBACK          113
#define IDC_FRIENDS_GAME_INVITE_VOICE 114
#define IDC_FRIENDS_PLAY_MESSAGE      115
#define IDC_FRIENDS_MISSIONS          152
#define IDC_MULTI_BATTLEYE_FILTER     154

// Send voice mail dialog
#define IDC_SVM_TITLE                 101
#define IDC_SVM_PLAYER                102
#define IDC_SVM_RECORD                103
#define IDC_SVM_PLAY                  104
#define IDC_SVM_SEND                  105
#define IDC_SVM_PROGRESS              106
#define IDC_SVM_TIME                  107

// Receive voice mail dialog
#define IDC_RVM_TITLE                 101
#define IDC_RVM_PLAYER                102
#define IDC_RVM_PLAY                  103
#define IDC_RVM_FEEDBACK              104
#define IDC_RVM_PROGRESS              105
#define IDC_RVM_TIME                  106

// Xbox players dialog
#define IDC_XPLAYERS_LIST             101
#define IDC_XPLAYERS_STATUS           102
#define IDC_XPLAYERS_DISABLE_VOICE    103
#define IDC_XPLAYERS_ENABLE_VOICE     104
#define IDC_XPLAYERS_KICKOFF          105

// Xbox players options dialog
#define IDC_XPLAYERS_PLAYER           101
#define IDC_XPLAYERS_ASK              102
#define IDC_XPLAYERS_MUTE             103
#define IDC_XPLAYERS_FEEDBACK         104
#define IDC_XPLAYERS_CANCEL           105
#define IDC_XPLAYERS_ASK_VOICE        107

// Feedback dialog
#define IDC_FEEDBACK_PLAYER           101
#define IDC_FEEDBACK_DATE             102
#define IDC_FEEDBACK_GREAT_SESSION    103
#define IDC_FEEDBACK_GOOD_ATTITUDE    104
#define IDC_FEEDBACK_BAD_NAME         105
#define IDC_FEEDBACK_CURSING          106
#define IDC_FEEDBACK_SCREAM           107
#define IDC_FEEDBACK_CHEAT            108
#define IDC_FEEDBACK_THREAT           109
#define IDC_FEEDBACK_MSG_HARASSING    110
#define IDC_FEEDBACK_MSG_OFFENSIVE    111
#define IDC_FEEDBACK_MSG_SPAM         112

// Download content display controls
#define IDC_DOWNLOAD_CONTENT_LIST     101

#define IDC_DOWNLOAD_CONTENT_TITLE          101
#define IDC_DOWNLOAD_CONTENT_TERMS          102
#define IDC_DOWNLOAD_CONTENT_PICTURE        103
#define IDC_DOWNLOAD_CONTENT_SHOW_PRICE     104

#define IDC_DOWNLOAD_CONTENT_PRICE_TITLE    101
#define IDC_DOWNLOAD_CONTENT_PRICE          102
#define IDC_DOWNLOAD_CONTENT_PRICE_QUESTION 103

#define IDC_INSTALL_CONTENT_PROGRESS  101
#define IDC_INSTALL_CONTENT_NAME      102
#define IDC_INSTALL_CONTENT_TIME      103

// Multiplayer passcode display controls
#define IDC_MP_PASSCODE_FIRST         101

// Multiplayer display controls
#define IDC_MULTI_TITLE               101
#define IDC_MULTI_SESSIONS            102
#define IDC_MULTI_REMOTE              103
#define IDC_MULTI_NEW                 104
#define IDC_MULTI_JOIN                105
#define IDC_MULTI_NOTEBOOK            106
#define IDC_MULTI_PASSWORD            107
#define IDC_MULTI_PORT                108
#define IDC_MULTI_GAMESPY             110
#define IDC_MULTI_SERVER_ICON         111
#define IDC_MULTI_SERVER_COLUMN       112
#define IDC_MULTI_MISSION_ICON        113
#define IDC_MULTI_MISSION_COLUMN      114
#define IDC_MULTI_STATE_ICON          115
#define IDC_MULTI_STATE_COLUMN        116
#define IDC_MULTI_PLAYERS_ICON        117
#define IDC_MULTI_PLAYERS_COLUMN      118
#define IDC_MULTI_PING_ICON           119
#define IDC_MULTI_PING_COLUMN         120
#define IDC_MULTI_PROGRESS            121
#define IDC_MULTI_INTERNET            122
#define IDC_MULTI_REFRESH             123
#define IDC_MULTI_FILTER              124
#define IDC_MULTI_SERVER_FILTER       125
#define IDC_MULTI_MISSION_FILTER      126
#define IDC_MULTI_PLAYERS_FILTER      127
#define IDC_MULTI_PING_FILTER         128
#define IDC_MP_HOST                   129
#define IDC_MP_TYPE                   130
#define IDC_MP_MISSION                131
#define IDC_MP_ISLAND                 132
#define IDC_MP_STATE                  133
#define IDC_MP_TIMELEFT               134
#define IDC_MP_SLOTS_PUBLIC           135
#define IDC_MP_SLOTS_PRIVATE          136
#define IDC_MP_NO_SESSION             137
#define IDC_MP_DIFFICULTY             138
#define IDC_MP_LANGUAGE               139
#define IDC_MULTI_GAMETYPE_ICON       140
#define IDC_MULTI_GAMETYPE_COLUMN     141
#define IDC_MP_PING                   142
#define IDC_MP_PASSWORD               143
#define IDC_MP_PLATFORM               144
#define IDC_MP_COUNTRY                145
#define IDC_MP_VERSION                146
#define IDC_MP_VERSION_REQUIRED       147
#define IDC_MP_MODS                   148
#define IDC_MP_PLAYERS_ROW            149
#define IDC_MULTI_PASSWORDED_FILTER   150
#define IDC_MULTI_FULL_FILTER         151
#define IDC_MULTI_TYPE_FILTER         152
#define IDC_MP_NEXT_SESSION           153
#define IDC_MULTI_BATTLEYE_FILTER     154

#define IDC_OPTIMATCH_FILTER_SPEED        101
#define IDC_OPTIMATCH_FILTER_TYPE         102
#define IDC_OPTIMATCH_FILTER_MIN_PLAYERS  103
#define IDC_OPTIMATCH_FILTER_MAX_PLAYERS  104
#define IDC_OPTIMATCH_FILTER_LANGUAGE     105
#define IDC_OPTIMATCH_FILTER_DIFFICULTY   106

#define IDC_PASSWORD                  101

#define IDC_IP_ADDRESS                101
#define IDC_IP_PORT                   102

#define IDC_PORT_PORT                 101

#define IDC_FILTER_SERVER             101
#define IDC_FILTER_MISSION            102
#define IDC_FILTER_MAXPING            103
#define IDC_FILTER_MINPLAYERS         104
#define IDC_FILTER_MAXPLAYERS         105
#define IDC_FILTER_FULL               106
#define IDC_FILTER_PASSWORDED         107
#define IDC_FILTER_DEFAULT            108
#define IDC_FILTER_TYPE               109
#define IDC_FILTER_BATTLEYE           110

#define IDC_CLIENT_TEXT               101
#define IDC_CLIENT_PLAYERS            102
#define IDC_CLIENT_PROGRESS           103

#define IDC_SERVER_ISLAND             101
#define IDC_SERVER_MISSION            102
#define IDC_SERVER_EDITOR             103
#define IDC_SERVER_DIFF               104
#define IDC_SERVER_PLAYERS            105
#define IDC_SERVER_GAMETYPE           106
#define IDC_SERVER_SLOTS              107
#define IDC_SERVER_SLOTS_PRIVATE      108
#define IDC_SERVER_SLOTS_PUBLIC       109
#define IDC_SERVER_MIN_PLAYERS        110
#define IDC_SERVER_MAX_PLAYERS        111
#define IDC_SERVER_SLOTS_PRIVATE_TITLE  112
#define IDC_SERVER_SLOTS_PRIVATE_TEXT   112
#define IDC_SERVER_SLOTS_PUBLIC_TITLE   113
#define IDC_SERVER_SLOTS_PUBLIC_TEXT    113
#define IDC_SERVER_SLOTS_PUBLIC_VALUE   114
#define IDC_SERVER_SLOTS_PRIVATE_VALUE  115
#define IDC_SERVER_VOTED_MISSIONS       116
#define IDC_SERVER_PLAYERS_TITLE        117
#define IDC_SERVER_TIMEOUT              118
#define IDC_SERVER_VOTED_DIFFICULTY     119
#define IDC_SERVER_DELETE               120
#define IDC_SERVER_COPY                 121
#define IDC_SERVER_EDIT                 122
#define IDC_SERVER_LOAD                 123
#define IDC_SERVER_PRIVATE_SLOTS_TITLE  124
#define IDC_SERVER_PRIVATE_SLOTS_VALUE  125
#define IDC_SERVER_PRIVATE_SLOTS        126
#define IDC_SERVER_MAXIMUM_SLOTS_TITLE  127
#define IDC_SERVER_MAXIMUM_SLOTS        128
#define IDC_SERVER_MAXIMUM_SLOTS_VALUE  129

#define IDC_REQUIRED_BATTLEYE           201

// _VBS3
#define IDC_AAR_SERVER                  121
#define IDC_AAR_SERVER_FILES            122
#define IDC_AAR_DOWNLOADPROGRESS        123
#define IDC_AAR_DOWNLOADSTART           124
#define IDC_AAR_DOWNLOADSTOP            125

// Host settings dialog
#define IDC_HOST_NAME                   101
#define IDC_HOST_PASSWORD               102
#define IDC_HOST_MAX_PLAYERS            103
#define IDC_HOST_PRIVATE                104
#define IDC_HOST_PORT                   105

#define IDC_DED_SERVER_SLOTS_PUBLIC         101
#define IDC_DED_SERVER_SLOTS_PUBLIC_TITLE   102
#define IDC_DED_SERVER_SLOTS_PUBLIC_VALUE   103
#define IDC_DED_SERVER_SLOTS_PRIVATE        104
#define IDC_DED_SERVER_SLOTS_PRIVATE_TITLE  105
#define IDC_DED_SERVER_SLOTS_PRIVATE_VALUE  106

#define IDC_WIZT_TEMPLATES            101
#define IDC_WIZT_OVERVIEW             102
#define IDC_WIZT_NAME                 103

#define IDC_WIZM_EDIT                 101

#define IDC_SRVSETUP_PLAYERS          101
#define IDC_SRVSETUP_UNITS            102
#define IDC_SRVSETUP_ISLAND           103
#define IDC_SRVSETUP_NAME             104
#define IDC_SRVSETUP_DESC             105
#define IDC_SRVSETUP_ASSIGN           106
#define IDC_SRVSETUP_UNASSIGN         107
#define IDC_SRVSETUP_RANDOM           108
#define IDC_SRVSETUP_PARAM1           109
#define IDC_SRVSETUP_PARAM1_TEXT      110
#define IDC_SRVSETUP_PARAM2           111
#define IDC_SRVSETUP_PARAM2_TEXT      112

#define IDC_SRVSIDE_NAME              101
#define IDC_SRVSIDE_ISLAND            102
#define IDC_SRVSIDE_POOL              103
#define IDC_SRVSIDE_WEST              104
#define IDC_SRVSIDE_EAST              105
#define IDC_SRVSIDE_RESIST            106
#define IDC_SRVSIDE_CIVIL             107
#define IDC_SRVSIDE_WEST_TEXT         108
#define IDC_SRVSIDE_EAST_TEXT         109
#define IDC_SRVSIDE_RESIST_TEXT       110
#define IDC_SRVSIDE_CIVIL_TEXT        111
#define IDC_SRVSIDE_DEFAULT           112
#define IDC_SRVSIDE_PARAM1            113
#define IDC_SRVSIDE_PARAM1_TEXT       114
#define IDC_SRVSIDE_PARAM2            115
#define IDC_SRVSIDE_PARAM2_TEXT       116
#define IDC_SRVSIDE_PLAYERS           117

#define IDC_MPROLE_TITLE              101
#define IDC_MPROLE_NAME               102
#define IDC_MPROLE_ISLAND             103
#define IDC_MPROLE_DESC               104
#define IDC_MPROLE_POOL               105
#define IDC_MPROLE_POOL_TEXT          106
#define IDC_MPROLE_ROLES              107
#define IDC_MPROLE_DEFAULT            108
#define IDC_MPROLE_ENABLE             109
#define IDC_MPROLE_SIDES              110
#define IDC_MPROLE_ENABLE_ALL         111

#define IDC_CLIENT_GAME               101

#define IDC_CLIENTMAP_START1          101
#define IDC_CLIENTMAP_START2          102

#define IDC_CLIENT_READY_PLAYERS        120
#define IDC_CLIENT_READY_PLAYERS_TITLE  121
#define IDC_CLIENT_READY_TIMEOUT        122

#define IDC_SERVER_READY_PLAYERS        120
#define IDC_SERVER_READY_PLAYERS_TITLE  121

#define IDC_MP_PLAYERS                101
#define IDC_MP_PL                     102
#define IDC_MP_PL_NAME                103
#define IDC_MP_PL_MAIL                104
#define IDC_MP_PL_ICQ                 105
#define IDC_MP_PL_REMARK              106
#define IDC_MP_SQ                     107
#define IDC_MP_SQ_NAME                108
#define IDC_MP_SQ_ID                  109
#define IDC_MP_SQ_MAIL                110
#define IDC_MP_SQ_WEB                 111
#define IDC_MP_SQ_PICTURE             112
#define IDC_MP_SQ_TITLE               113
#define IDC_MP_KICKOFF                114
#define IDC_MP_BAN                    115
#define IDC_MP_PL_MISSION             116
#define IDC_MP_PL_ISLAND              117
#define IDC_MP_PL_TIME                118
#define IDC_MP_PL_MINPING             119
#define IDC_MP_PL_AVGPING             120
#define IDC_MP_PL_MAXPING             121
#define IDC_MP_PL_MINBAND             122
#define IDC_MP_PL_AVGBAND             123
#define IDC_MP_PL_MAXBAND             124
#define IDC_MP_PL_DESYNC              125
#define IDC_MP_PL_REST                126
#define IDC_MP_MUTE                   127

#define IDC_CLIENT_WAIT_TITLE         130 // is used together with MP_PL

#define IDC_MPSETUP_NAME              101
#define IDC_MPSETUP_ISLAND            102
#define IDC_MPSETUP_DESC              103
#define IDC_MPSETUP_WEST              104
#define IDC_MPSETUP_EAST              105
#define IDC_MPSETUP_GUERRILA          106
#define IDC_MPSETUP_CIVILIAN          107
#define IDC_MPSETUP_ROLES_TITLE       108
#define IDC_MPSETUP_ROLES             109
#define IDC_MPSETUP_PARAM1_TITLE      110
#define IDC_MPSETUP_PARAM1            111
#define IDC_MPSETUP_PARAM2_TITLE      112
#define IDC_MPSETUP_PARAM2            113
#define IDC_MPSETUP_POOL              114
#define IDC_MPSETUP_MESSAGE           115
#define IDC_MPSETUP_KICK              116
#define IDC_MPSETUP_ENABLE_ALL        117
#define IDC_MPSETUP_LOCK              118
#define IDC_MPSETUP_SIDE              119
#define IDC_MPSETUP_POOL_TITLE        120
#define IDC_MPSETUP_TIMEOUT           121
#define IDC_MPSETUP_PLAYERS           122
#define IDC_MPSETUP_FRIENDS           123
#define IDC_MPSETUP_ADVANCED          124
#define IDC_MPSETUP_GAMERCARD         125
#define IDC_MPSETUP_PARTYGUI          126
#define IDC_MPSETUP_ASSIGNROLE        127
#define IDC_MPSETUP_PARAMS            128

#define IDC_MPSETUP_MSG_MESSAGE       101
#define IDC_MPSETUP_MSG_PROGRESS      102
#define IDC_MPSETUP_MSG_TIME          103

#define IDC_SERVER_SETTINGS_PARAM1_TEXT 101
#define IDC_SERVER_SETTINGS_PARAM1      102
#define IDC_SERVER_SETTINGS_PARAM2_TEXT 103
#define IDC_SERVER_SETTINGS_PARAM2      104
#define IDC_SERVER_SETTINGS_AI          105
#define IDC_SERVER_SETTINGS_ASSIGN      106

#define IDC_SERVER_ADVANCED_ROLES       101
#define IDC_SERVER_ADVANCED_DISABLE_ALL 102
#define IDC_SERVER_ADVANCED_AUTOASSIGN  103

#define IDC_SERVER_SELECT_PLAYERS     101

// Main map display controls
#define IDC_MAP_WATCH                 101
#define IDC_MAP_COMPASS               102
#define IDC_MAP_WALKIE_TALKIE         103
#define IDC_MAP_NOTEPAD               104
#define IDC_MAP_WARRANT               105
#define IDC_MAP_GPS                   106
#define IDC_MAP_TEXTURES              107
#define IDC_MAP_BRIEFING_SHOW         108
#define IDC_MAP_BRIEFING_PAGE         109
#define IDC_MAP_PREV_MARKER           110
#define IDC_MAP_NEXT_MARKER           111
#define IDC_MAP_GEAR                  112

// Diary display controls
#define IDC_DIARY                     101
#define IDC_DIARY_INDEX               102
#define IDC_DIARY_PAGE                103
#define IDC_DIARY_ADD                 104

// Select island display controls
#define IDC_SELECT_ISLAND             101
#define IDC_SELECT_ISLAND_NOTEBOOK    102
#define IDC_SELECT_ISLAND_WIZARD      103
#define IDC_SELECT_ISLAND_EDITOR      104
#define IDC_SELECT_ISLAND_EDITOR_OLD  105

// Custom arcade display controls
#define IDC_CUST_GAME                 101
#define IDC_CUST_PLAY                 102
#define IDC_CUST_EDIT                 103
#define IDC_CUST_DELETE               104
#define IDC_CUST_EDIT_2               105

#define IDC_ARCMAP_LOAD               101
#define IDC_ARCMAP_SAVE               102
#define IDC_ARCMAP_CLEAR              103
#define IDC_ARCMAP_MODE               104
#define IDC_ARCMAP_INTEL              105
#define IDC_ARCMAP_MERGE              106
#define IDC_ARCMAP_PREVIEW            107
#define IDC_ARCMAP_CONTINUE           108
#define IDC_ARCMAP_SECTION            109
#define IDC_ARCMAP_IDS                111
#define IDC_ARCMAP_TEXTURES           112
#define IDC_ARCMAP_MISSION_NAME       113

#define IDC_ARCUNIT_TITLE             101
#define IDC_ARCUNIT_SIDE              102
#define IDC_ARCUNIT_VEHICLE           103
#define IDC_ARCUNIT_RANK              104
#define IDC_ARCUNIT_CTRL              105
#define IDC_ARCUNIT_CLASS             107
#define IDC_ARCUNIT_HEALTH            108
#define IDC_ARCUNIT_FUEL              109
#define IDC_ARCUNIT_AMMO              110
#define IDC_ARCUNIT_AZIMUT            111
#define IDC_ARCUNIT_SPECIAL           112
#define IDC_ARCUNIT_AGE               113
#define IDC_ARCUNIT_AZIMUT_PICTURE    114
#define IDC_ARCUNIT_PLACE             115
#define IDC_ARCUNIT_PRESENCE          116
#define IDC_ARCUNIT_PRESENCE_COND     117
#define IDC_ARCUNIT_TEXT              118
#define IDC_ARCUNIT_LOCK              119
#define IDC_ARCUNIT_INIT              120
#define IDC_ARCUNIT_SKILL             121
#define IDC_ARCUNIT_DESC              122
#define IDC_ARCUNIT_FACTION           123

#define IDC_ARCGRP_SIDE               101
#define IDC_ARCGRP_TYPE               102
#define IDC_ARCGRP_NAME               103
#define IDC_ARCGRP_AZIMUT             104
#define IDC_ARCGRP_AZIMUT_PICTURE     105
#define IDC_ARCGRP_FACTION            106

#define IDC_ARCWP_TITLE               101
#define IDC_ARCWP_TYPE                102
#define IDC_ARCWP_SEQ                 103
#define IDC_ARCWP_DESC                104
#define IDC_ARCWP_SEMAPHORE           105
#define IDC_ARCWP_FORM                106
#define IDC_ARCWP_SPEED               107
#define IDC_ARCWP_COMBAT              108
#define IDC_ARCWP_PLACE               109
#define IDC_ARCWP_EFFECTS             110
#define IDC_ARCWP_TIMEOUT_MIN         111
#define IDC_ARCWP_TIMEOUT_MAX         112
#define IDC_ARCWP_TIMEOUT_MID         113
#define IDC_ARCWP_HOUSEPOS            114
#define IDC_ARCWP_HOUSEPOSTEXT        115
#define IDC_ARCWP_EXPACTIV            116
#define IDC_ARCWP_SHOW                117
#define IDC_ARCWP_EXPCOND             118
#define IDC_ARCWP_SCRIPT              119
#define IDC_ARCWP_PREC                120

#define IDC_ARCEFF_SOUND              103
#define IDC_ARCEFF_VOICE              104
#define IDC_ARCEFF_SOUND_ENV          105
#define IDC_ARCEFF_SOUND_DET          106
#define IDC_ARCEFF_MUSIC              107
#define IDC_ARCEFF_TITTYPE            108
#define IDC_ARCEFF_TITEFF             109
#define IDC_ARCEFF_TITTEXT            110
#define IDC_ARCEFF_TITRES             111
#define IDC_ARCEFF_TITOBJ             112
//#define IDC_ARCEFF_PLAYERONLY         113
#define IDC_ARCEFF_CONDITION          113
#define IDC_ARCEFF_TEXT_TITTEXT       114

#define IDC_ARCSENS_TITLE             101
#define IDC_ARCSENS_A                 102
#define IDC_ARCSENS_B                 103
#define IDC_ARCSENS_ANGLE             104
#define IDC_ARCSENS_ACTIV             105
#define IDC_ARCSENS_PRESENCE          106
#define IDC_ARCSENS_REPEATING         107
#define IDC_ARCSENS_INTERRUPT         108
#define IDC_ARCSENS_TIMEOUT_MIN       109
#define IDC_ARCSENS_TIMEOUT_MAX       110
#define IDC_ARCSENS_TIMEOUT_MID       111
#define IDC_ARCSENS_TYPE              112
#define IDC_ARCSENS_OBJECT            113
#define IDC_ARCSENS_TEXT              114
#define IDC_ARCSENS_AGE               115
#define IDC_ARCSENS_EFFECTS           116
#define IDC_ARCSENS_EXPCOND           117
#define IDC_ARCSENS_EXPACTIV          118
#define IDC_ARCSENS_EXPDESACTIV       119
#define IDC_ARCSENS_RECT              120
#define IDC_ARCSENS_NAME              121

#define IDC_ARCMARK_TITLE             101
#define IDC_ARCMARK_NAME              102
#define IDC_ARCMARK_MARKER            103
#define IDC_ARCMARK_TYPE              104
#define IDC_ARCMARK_COLOR             105
#define IDC_ARCMARK_A                 106
#define IDC_ARCMARK_B                 107
#define IDC_ARCMARK_ANGLE             108
#define IDC_ARCMARK_TYPE_TEXT         109
#define IDC_ARCMARK_FILL              110
#define IDC_ARCMARK_TEXT              111

#define IDC_INTEL_RESISTANCE          101
#define IDC_INTEL_MONTH               102
#define IDC_INTEL_DAY                 103
#define IDC_INTEL_HOUR                104
#define IDC_INTEL_MINUTE              105
#define IDC_INTEL_BRIEFING_NAME       106
#define IDC_INTEL_BRIEFING_DESC       107
#define IDC_INTEL_WEATHER             108
#define IDC_INTEL_FOG                 109
#define IDC_INTEL_WEATHER_FORECAST    110
#define IDC_INTEL_FOG_FORECAST        111
#define IDC_INTEL_YEAR                112

// Chat
#define IDC_CHANNEL                   101
#define IDC_CHANNEL_VOICE             102

#define IDC_CHAT                      101

#define IDC_VOICE_CHAT                101

// Save / load template
#define IDC_TEMPL_NAME                101
#define IDC_TEMPL_TITLE               102
#define IDC_TEMPL_MODE                103
#define IDC_TEMPL_ISLAND              104

// Login display
#define IDC_LOGIN_USER                101
#define IDC_LOGIN_NEW                 102
#define IDC_LOGIN_DELETE              103
#define IDC_LOGIN_EDIT                104
#define IDC_LOGIN_NOTEBOOK            105

#define IDC_NEW_USER_NAME             101
#define IDC_NEW_USER_FACE             102
#define IDC_NEW_USER_SPEAKER          103
#define IDC_NEW_USER_PITCH            104
#define IDC_NEW_USER_TITLE            105
#define IDC_NEW_USER_HEAD             106
#define IDC_NEW_USER_GLASSES          107
#define IDC_NEW_USER_NOTEBOOK         108
#define IDC_NEW_USER_HEAD_AREA        109
#define IDC_NEW_USER_ID               110
#define IDC_NEW_USER_SQUAD            111
#define IDC_NEW_USER_SQUAD_TEXT       112

// Interrupt display
#define IDC_INT_OPTIONS               101
#define IDC_INT_LOAD                  102
#define IDC_INT_SAVE                  103
#define IDC_INT_ABORT                 104
#define IDC_INT_RETRY                 105
#define IDC_INT_TITLE                 106
#define IDC_INT_SETTINGS              107
#define IDC_INT_FRIENDS               108
#define IDC_INT_PLAYERS               109
#define IDC_INT_APPEAR_OFFLINE        110
#define IDC_INT_MISSION               111
#define IDC_INT_SIGN_IN_STATUS        112
#define IDC_INT_EDIT_MAP              113
#define IDC_INT_EDIT_3D               114
#define IDC_INT_EDIT_PREVIEW          115
#define IDC_INT_EDIT_REALTIME         116
#define IDC_INT_RESTART               117
#define IDC_INT_DIARY                 118
#define IDC_INT_REVERT                119
#define IDC_INT_MISSIONNAME           120
#define IDC_INT_DIFFICULTY            121

// Interrupt revert display
#define IDC_INT_REVERT_TYPE           101

// Select save display
#define IDC_SELECT_SAVE_SLOTS         101

// Mission end display
#define IDC_ME_SUBTITLE               101
#define IDC_ME_QUOTATION              102
#define IDC_ME_AUTHOR                 103
#define IDC_ME_RETRY                  104
#define IDC_ME_LOAD                   105
#define IDC_ME_RESTART                106
#define IDC_ME_TEAM_SWITCH            107

// Get ready display
#define IDC_GETREADY_NAME             101
#define IDC_GETREADY_DESC             102
#define IDC_GETREADY_PRIMARY          105
#define IDC_GETREADY_SECONDARY        106
#define IDC_GETREADY_PLAYER           107
#define IDC_GETREADY_DATE             108
#define IDC_GETREADY_MODE             110
#define IDC_GETREADY_PRIMARY_TEXT     111
#define IDC_GETREADY_SECONDARY_TEXT   112
#define IDC_GETREADY_EDITMODE         113
#define IDC_GETREADY_TITLE            114

#define IDC_GEAR_UNIT                 101
#define IDC_GEAR_SKILL                102
#define IDC_GEAR_VEHICLE              103
#define IDC_GEAR_POOL                 105
#define IDC_GEAR_OVERVIEW             106
#define IDC_GEAR_SLOT_PRIMARY         107
#define IDC_GEAR_SLOT_SECONDARY       108
#define IDC_GEAR_SLOT_ITEM1           109
#define IDC_GEAR_SLOT_ITEM2           110
#define IDC_GEAR_SLOT_ITEM3           111
#define IDC_GEAR_SLOT_ITEM4           112
#define IDC_GEAR_SLOT_ITEM5           113
#define IDC_GEAR_SLOT_ITEM6           114
#define IDC_GEAR_SLOT_ITEM7           115
#define IDC_GEAR_SLOT_ITEM8           116
#define IDC_GEAR_SLOT_ITEM9           117
#define IDC_GEAR_SLOT_ITEM10          118
#define IDC_GEAR_SLOT_ITEM11          119
#define IDC_GEAR_SLOT_ITEM12          120
#define IDC_GEAR_SLOT_HANDGUN         121
#define IDC_GEAR_SLOT_HANGUN_ITEM1    122
#define IDC_GEAR_SLOT_HANGUN_ITEM2    123
#define IDC_GEAR_SLOT_HANGUN_ITEM3    124
#define IDC_GEAR_SLOT_HANGUN_ITEM4    125
#define IDC_GEAR_SLOT_HANGUN_ITEM5    126
#define IDC_GEAR_SLOT_HANGUN_ITEM6    127
#define IDC_GEAR_SLOT_HANGUN_ITEM7    128
#define IDC_GEAR_SLOT_HANGUN_ITEM8    129
#define IDC_GEAR_SLOT_SPECIAL1        130
#define IDC_GEAR_SLOT_SPECIAL2        131
#define IDC_GEAR_REARM                132
#define IDC_GEAR_CONTINUE             133
#define IDC_GEAR_SLOT_INVENTORY1      134
#define IDC_GEAR_SLOT_INVENTORY2      135
#define IDC_GEAR_SLOT_INVENTORY3      136
#define IDC_GEAR_SLOT_INVENTORY4      137
#define IDC_GEAR_SLOT_INVENTORY5      138
#define IDC_GEAR_SLOT_INVENTORY6      139
#define IDC_GEAR_SLOT_INVENTORY7      140
#define IDC_GEAR_SLOT_INVENTORY8      141
#define IDC_GEAR_SLOT_INVENTORY9      142
#define IDC_GEAR_SLOT_INVENTORY10     143
#define IDC_GEAR_SLOT_INVENTORY11     144
#define IDC_GEAR_SLOT_INVENTORY12     145

#define IDC_GEAR_ADD_ITEM             146
#define IDC_GEAR_REMOVE_ITEM          147

#define IDC_GEAR_FILTER 148
#define IDC_GEAR_FILTER_ICON1 149
#define IDC_GEAR_FILTER_ICON2 150
#define IDC_GEAR_FILTER_ICON3 151
#define IDC_GEAR_FILTER_ICON4 152
#define IDC_GEAR_FILTER_ICON5 153
#define IDC_GEAR_FILTER_ICON6 154      

// Debriefing
/*
#define IDC_DEBRIEFING_LEFT           101
#define IDC_DEBRIEFING_RIGHT          102
*/
#define IDC_DEBRIEFING_STAT           103
#define IDC_DEBRIEFING_RESTART        104
#define IDC_DEBRIEFING_PAD2           105
#define IDC_DEBRIEFING_PLAYERS_TITLE_BG 106
#define IDC_DEBRIEFING_PLAYERS_TITLE  107
#define IDC_DEBRIEFING_PLAYERS_BG     108
#define IDC_DEBRIEFING_PLAYERS        109
#define IDC_DEBRIEFING_TIMEOUT        110
#define IDC_DEBRIEFING_RESULT         111
#define IDC_DEBRIEFING_TITLE          112
#define IDC_DEBRIEFING_DEBRIEFING     113
#define IDC_DEBRIEFING_OBJECTIVES     114
#define IDC_DEBRIEFING_INFO           115
#define IDC_DEBRIEFING_SHOW_PLAYERS   116
#define IDC_DEBRIEFING_SHOW_PAGE2     117
#define IDC_DEBRIEFING_LIVE_STATS     118
#define IDC_DEBRIEFING_PREV_PAGE      119
#define IDC_DEBRIEFING_NEXT_PAGE      120
#define IDC_DEBRIEFING_LOAD           121

#define IDC_DEBRIEFING_TEXT_GROUP       122
#define IDC_DEBRIEFING_OBJECTIVES_GROUP 123
#define IDC_DEBRIEFING_STATS_GROUP      124

// Debug display
#define IDC_DEBUG_EXP                 101
#define IDC_DEBUG_APPLY               102
#define IDC_DEBUG_LOG                 103

#define IDC_DEBUG_EXP1                121
#define IDC_DEBUG_EXP2                122
#define IDC_DEBUG_EXP3                123
#define IDC_DEBUG_EXP4                124

#define IDC_DEBUG_RES1                141
#define IDC_DEBUG_RES2                142
#define IDC_DEBUG_RES3                143
#define IDC_DEBUG_RES4                144

#define IDC_DEBUG_CLEAR_LOG           151
#define IDC_DEBUG_FILTER_EDIT         152

// DS interface display
#define IDC_DSI_PLAYERLIST            101
#define IDC_DSI_MISSONLIST            102

// HintC display
#define IDC_HINTC_BG                  101
#define IDC_HINTC_HINT                102
#define IDC_HINTC_TITLE               103
#define IDC_HINTC_CONTINUE            104
#define IDC_HINTC_LINE1               105
#define IDC_HINTC_LINE2               106

// Insert marker display
#define IDC_INSERT_MARKER             101
#define IDC_INSERT_MARKER_PICTURE     102

// InGameUI
// - unit info
#define IDC_IGUI_TIME                 101
#define IDC_IGUI_DATE                 102
#define IDC_IGUI_NAME                 103
#define IDC_IGUI_UNIT                 104
#define IDC_IGUI_VALUE_EXP            106
#define IDC_IGUI_COMBAT_MODE          107
#define IDC_IGUI_VALUE_HEALTH         109
#define IDC_IGUI_VALUE_ARMOR          111
#define IDC_IGUI_VALUE_FUEL           113
#define IDC_IGUI_CARGO_MAN            114
#define IDC_IGUI_CARGO_FUEL           115
#define IDC_IGUI_CARGO_REPAIR         116
#define IDC_IGUI_CARGO_AMMO           117
#define IDC_IGUI_WEAPON               118
#define IDC_IGUI_AMMO                 119
#define IDC_IGUI_VEHICLE              120
#define IDC_IGUI_SPEED                121
#define IDC_IGUI_ALT                  122
#define IDC_IGUI_FORMATION            123
#define IDC_IGUI_BG                   124
#define IDC_IGUI_COMMANDER            125
#define IDC_IGUI_DRIVER               126
#define IDC_IGUI_GUNNER               127

#define IDC_IGUI_ALT_WANTED           128
#define IDC_IGUI_SPEED_WANTED         129
#define IDC_IGUI_POSITION             130
#define IDC_IGUI_OPTIC                131

// _VBS3
  #define IDC_IGUI_MAGAZINE             132
  #define IDC_IGUI_OVR_STATUS           133
  //TI
  #define IDC_IGUI_TI_BACK              134
  #define IDC_IGUI_TI_MODE              135
  #define IDC_IGUI_TI_BRIGHTNESS_TXT    136
  #define IDC_IGUI_TI_BRIGHTNESS        137
  #define IDC_IGUI_TI_CONTRAST_TXT      138
  #define IDC_IGUI_TI_CONTRAST          139
  #define IDC_IGUI_TI_AUTO_CONTRAST     140

  //LASE
  #define IDC_IGLR_RANGE							  141
  #define IDC_IGLR_BG								    142
  #define IDC_IGLR_RANGE_NUM						143

  //AVRS
  #define IDC_IGUI_NICK                 144
  #define IDC_IGUI_NICK_VAL             145
  #define IDC_IGUI_BANK                 146
  #define IDC_IGUI_BANK_VAL             147
// !_VBS3
#define IDC_IGUI_HEADING                148

// !new arrowhead
#define IDC_IGUI_WEAPON_MODE            149
#define IDC_IGUI_WEAPON_GUNNER          150
#define IDC_IGUI_COUNTER_MEASURES_AMMO  151
#define IDC_IGUI_COUNTER_MEASURES_MODE  152

#define IDC_IGUI_RADARRANGE             153

// weapon/turret info controls
#define IDC_IGUI_WEAPON_DISTANCE        151

// - hint
#define IDC_IGHINT_BG                 101
#define IDC_IGHINT_HINT               102

// - task hint
#define IDC_IGTASKHINT_BG             103
#define IDC_IGTASKHINT_HINT           104

// - load mission progress bar
#define IDC_LOAD_MISSION_NAME         101
#define IDC_LOAD_MISSION_DATE         102
#define IDC_PROGRESS_TIME             103
#define IDC_PROGRESS_PROGRESS         104
#define IDC_LOAD_MISSION_PICTURE      105
#define IDC_LOAD_MISSION_TEXT         106

// - dedicated server dialog
#define IDC_DS_REPORT                 101
#define IDC_DS_PLAYERS                102
#define IDC_DS_FRIENDS                103

// - friend's missions dialog
#define IDC_FRIEND_MISSIONS_LIST      101

// - live statistics dialogs
#define IDC_LIVE_STATS_BOARDS         101

#define IDC_LIVE_STATS_LIST           101
#define IDC_LIVE_STATS_COUNT          102
#define IDC_LIVE_STATS_TITLE          103
#define IDC_LIVE_STATS_PLAYER         104
#define IDC_LIVE_STATS_BEGIN          105
#define IDC_LIVE_STATS_END            106
#define IDC_LIVE_STATS_PREV           107
#define IDC_LIVE_STATS_NEXT           108
#define IDC_LIVE_STATS_FRIENDS        109
#define IDC_LIVE_STATS_GAMER_CARD     110

#define IDC_RECEIVING_TEXT            101
#define IDC_RECEIVING_TIME            102

#define IDC_MSG_BOX_MESSAGE           101

#define IDC_EDITOR_OBJECTS            201
#define IDC_EDITOR_ATTRIBUTES         202
#define IDC_EDITOR_BACKGROUND         203
#define IDC_EDITOR_MENU               204
#define IDC_EDITOR_SAVE               205
#define IDC_EDITOR_LOAD               206
#define IDC_EDITOR_RESTART            207
#define IDC_EDITOR_PREVIEW            208
#define IDC_EDITOR_MAP                209
#define IDC_EDITOR_CLEAR              210
#define IDC_EDITOR_TYPE_LIST          211

// editor menu system
#define IDC_EDITOR_FILE               212
#define IDC_EDITOR_VIEW               213
#define IDC_EDITOR_USER               214
#define IDC_EDITOR_MENU_FILE          216
#define IDC_EDITOR_MENU_VIEW          217
#define IDC_EDITOR_MENU_USER          218

#define IDC_EDITOR_CONTROLS_HELP      220
#define IDC_EDITOR_LOAD_AAR           221

#define IDC_EDITOR_ADDOBJ_TYPES       222
#define IDC_EDITOR_ADDOBJ_CATEGORIES  223
#define IDC_EDITOR_ADDOBJ_LISTING     224

#define IDC_MINI_MAP                  225

// editor tree filtering
#define IDC_EDITOR_OBJECTS_FILTER         236
#define IDC_EDITOR_TREE_EXPAND_ALL        237
#define IDC_EDITOR_TREE_EXPAND_ALL_BACK   238
#define IDC_EDITOR_TREE_COLLAPSE_ALL      239
#define IDC_EDITOR_TREE_COLLAPSE_ALL_BACK 240

#define IDC_EDIT_OBJECT_CONTROLS      101
#define IDC_EDIT_OBJECT_TOGGLE_BUTTON 102

#define IDC_NEW_OBJECT_TYPE           101
#define IDC_NEW_OBJECT_PARENT         102

#define IDC_MISSION_LOAD_ISLAND       101
#define IDC_MISSION_LOAD_MISSION      102

#define IDC_MISSION_SAVE_MISSION      101
#define IDC_MISSION_SAVE_TITLE        102
#define IDC_MISSION_SAVE_DESCRIPTION  103
#define IDC_MISSION_SAVE_PLACEMENT    104

#define IDC_OVERLAY_CREATE_NAME       101
#define IDC_OVERLAY_LOAD_NAME         101
#define IDC_OVERLAY_LOAD_MISSION      102

#define IDC_EDIT_DIARY_RECORD         101
#define IDC_EDIT_DIARY_TITLE          102

#define IDC_LOAD_AAR_NAME             101

#define IDC_EDITOR_EB_PLAN            101
#define IDC_EDITOR_EB_NOTES           102
#define IDC_EDITOR_EB_SIDE            103
#define IDC_EDITOR_EB_OBJECTIVES      104
#define IDC_EDITOR_EB_NEW_OBJECTIVE   105
#define IDC_EDITOR_EB_ADD_OBJECTIVE   106
#define IDC_EDITOR_EB_DEL_OBJECTIVE   107

// - team switch display

#define IDC_TEAM_SWITCH_ROLES         101

// - configure action display

#define IDC_CONFIGURE_ACTION_TITLE    101
#define IDC_CONFIGURE_ACTION_KEYS     102
#define IDC_CONFIGURE_ACTION_SPECIAL  103
#define IDC_CONFIGURE_ACTION_DELETE   104
#define IDC_CONFIGURE_ACTION_DEFAULT  105
#define IDC_CONFIGURE_ACTION_CLEAR    106
#define IDC_CONFIGURE_ACTION_CANCEL   107
#define IDC_CONFIGURE_ACTION_PREV     108
#define IDC_CONFIGURE_ACTION_NEXT     109

// - controls display
#define IDC_CONTROLS_TYPE             101
#define IDC_CONTROLS_CONFIGURE        102

// - miniMap display

#define IDC_MINIMAP                   101

// - scripting help display
#define IDC_SCRITING_HELP             101
#define IDC_SCRITING_HELP_BACK        102
#define IDC_SCRITING_HELP_FORWARD     103
#define IDC_SCRITING_HELP_EXAMPLE     104

// - performance display
#define IDC_PERF_INDEX                101
#define IDC_PERF_ENABLE               102
#define IDC_PERF_GRAPH                103
#define IDC_PERF_GRAPH_TITLE          104
#define IDC_PERF_MAXTIME              105

// - capture display
#define IDC_CAPTURE_INDEX             101
#define IDC_CAPTURE_TIMELINES         102
#define IDC_CAPTURE_ZOOMIN            103
#define IDC_CAPTURE_ZOOMOUT           104
#define IDC_CAPTURE_EXPORT            105
#define IDC_CAPTURE_INFO              106

// - joysticks configuration display
#define IDC_CONTROLLER_CUSTOMIZE      101
#define IDC_CONTROLLER_ENABLE         102
#define IDC_CONTROLLER_XINPUT_LIST    103
#define IDC_CONTROLLER_LIST           104

// - customize controllers
#define IDC_CUSTOMIZE_CTRL_SENSITIVITIES  101
#define IDC_CUSTOMIZE_CTRL_UNMAP          102
#define IDC_CUSTOMIZE_CTRL_DEFAULT    103
#define IDC_CUSTOMIZE_CTRL_TITLE      104
#define IDC_SENSITIVITY_SLIDER        120


// - helper IDC for DisplayCampaignLoadLight
#define IDC_MP_CAMPAIGN_RESTART          150
#define IDC_MP_CAMPAIGN_REPLAY           151
#define IDC_MP_CAMPAIGN_LOAD             152

// - addon actions display
#define IDC_ADDON_ACTIONS                101

#endif
