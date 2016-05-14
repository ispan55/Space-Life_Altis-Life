/*
    Uniform Script
    Author: Eldayia
    Created for http://altisdev.com
*/

    #define __GETC__(var) (call var)
    
    if (playerSide != independent) then {
        if ((uniform player) == "U_Rangemaster")  then {
            player setObjectTextureGlobal [0, "textures\cop.jpg"]; //Tenue d'intendant - Cop
        };
    } else {
        if ((uniform player) == "U_Rangemaster")  then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"]; //Tenue d'intendant - Medic
        };
    };