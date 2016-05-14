StartProgress = false;
enableSaving[false,false];

[] execVM "briefing.sqf"; //Load Briefing
BipBipOn=true;
publicVariable "BipBipOn";
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\statusBar.sqf";

StartProgress = true;