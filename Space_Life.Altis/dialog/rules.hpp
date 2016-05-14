/*
	Fichier: rules.hpp
	Serveur: www.space-life.com
	Dev: Space Life Team
*/

class rules
{
    idd = 32154;
    name = "rule";
    movingEnable = false;
    enableSimulation = false;
    
    class controlsBackground
    {
        class RscTitleBackground : Life_RscText
        {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.0875;
            y = 0.06;
            w = 0.825;
            h = 0.04;
        };
        
        class RscBackground : Life_RscText
        {
            colorBackground[] = {0.31,0.31,0.31,1};
            idc = -1;
            x = 0.0875;
            y = 0.12;
            w = 0.825;
            h = 0.82;
        };
        
        class RscTitleText : Life_RscTitle
        {
            colorBackground[] = {0, 0, 0, 0};
            idc = -1;
            text = "A LIRE AVANT DE NOUS REJOINDRE";
            x = 0.0875;
            y = 0.06;
            w = 0.825;
            h = 0.04;
            class Attributes
            {
                align = "center";
            };
        };
                
        class RsclolStatus : Life_RscStructuredText
        {
            idc = -1;
            colorBackground[] = {0, 0, 0, 0};
            sizeEx = 0.0001;
            text = "<t size = '1'>Afin de donner à tous une meilleure experience de jeu, vous devez vous engager à respecter notre réglement qui est disponible sur notre forum.<br / ><br / >- Jouer RP, pas de freekill ou de troll<br/>- Respecter les autres joueurs<br / >- Interdit de fausser le jeu : Hack / Cheat / Duplication / UseBug<br / ><br / >Le TeamSpeak est obligatoire et vous devez lire les règles du serveur : <br / >TS³ : ts.space-life.com<br / >Web : www.space-life.com<br / >Forum : forum.space-life.com <br / ><br /></t><t font ='PuristaBold' size='1.1'>Pour jouer sur notre serveur Vous devez accepter chacunes des conditions indiquées dans le reglement et vous engagez à les respecter sinon sera une sanction en rapport à votre faute !</t>";
            x = 0.1125;
            y = 0.16;
            w = 0.775;
            h = 0.66;
        };    
    };
    
        class Controls
    {
        class naz : Life_RscButtonMenu
        {
            idc = -1;
            text = "Refuser";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            onButtonClick = "closeDialog 0;";
            x = 0.1075;
            y = 0.88;
            w = 0.3;
            h = 0.04;
            class Attributes
            {
                align = "center";
            };
        };
        
        
        class az : Life_RscButtonMenu
        {
            idc = -1;
            text = "Accepter";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            onButtonClick = "rulesok = true; closeDialog 0;";
            x = 0.5825;
            y = 0.88;
            w = 0.3;
            h = 0.04;
            class Attributes
            {
                align = "center";
            };    
        };
    };
};
 