waitUntil {!isNull player && isPlayer player};

player createDiarySubject ["wasteland", "Help"];
player createDiarySubject ["changelog", "Changelog"];
player createDiarySubject ["404games", "Credits"];

player createDiaryRecord["wasteland",
[
"What is Wasteland?",
"
<br/>
	ToDo:<br/>
"
]
];

player createDiaryRecord["changelog",
[
"0.02",
"
<br/>
		- Added ''Paper Doll'' Character View<br/>
		- Modified various items.<br/>
"
]
];

player createDiaryRecord["changelog",
[
"0.01",
"
<br/>
		Initialization of mission<br/>
		Began work on Hardcore System<br/>
		Removed Vests, Helmets, and Goggles at spawn<br/>
"
]
];

player createDiaryRecord["404games",
[
"404Games",
"
<br/>
	Thanks to the 404 Team for creating Wasteland!<br/>
"
]
];

player createDiaryRecord["404games",
[
"Adrenaline Gaming",
"
<br/>
	LithiumFox - H3XXUS - ZILF<br/>
"
]
];