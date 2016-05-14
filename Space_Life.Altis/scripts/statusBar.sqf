waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

_rscLayer = "statusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["statusBar","PLAIN"];
systemChat format["the-life.fr", _rscLayer];

[] spawn {
	sleep 5;
	_statusText = "Bienvenue sur SpaceLife !";
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
	{
		sleep 1;
		_counter = _counter - 1;
		_statusText = "Bienvenue sur SpaceLife !";
		((uiNamespace getVariable "statusBar")displayCtrl 1000)ctrlSetText format["%3 | FPS: %1 | Joueur connecté : %2 | TS3 : teamspeak-6.verygames.net:50292   ", round diag_fps, count playableUnits, _statusText, _counter];
	};
};