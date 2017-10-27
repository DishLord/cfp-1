class CfgPatches
{
	class CFP_Backpacks
	{
		units[] = {"SP_Carryall_Black","SP_Carryall_Green","SP_Carryall_Tan","SP_Carryall_White","SP_Carryall_Hunter","SP_Carryall_Hunter2","SP_Carryall_ATacsFG","SP_Carryall_NodUrban","SP_Camelbak_Black","SP_Camelbak_Green","SP_Camelbak_Tan"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
	};
};
class CfgVehicleClasses
{
	class CFP_Backpacks
	{
		displayName = "Backpacks";
	};
};
class CfgVehicles
{
	class B_Carryall_oucamo;
	class SP_Carryall_Black: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Black)";
		picture = "\x\cfp\addons\backpacks\data\Black.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\Black.paa"};
		author = "SP Craig";
	};
	class SP_Carryall_Green: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Green)";
		picture = "\x\cfp\addons\backpacks\data\Green.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\Green.paa"};
		author = "SP Craig";
	};
	class SP_Carryall_Tan: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Tan)";
		picture = "\x\cfp\addons\backpacks\data\Tan.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\Tan.paa"};
		author = "SP Craig";
	};
	class SP_Carryall_White: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (White)";
		picture = "\x\cfp\addons\backpacks\data\White.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\White.paa"};
		author = "SP Craig";
	};
	class SP_Carryall_Hunter: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Hunter)";
		picture = "\x\cfp\addons\backpacks\data\Hunter.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\Hunter.paa"};
		author = "SP Craig";
	};
	class SP_Carryall_Hunter2: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Hunter2)";
		picture = "\x\cfp\addons\backpacks\data\Hunter2.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\Hunter2.paa"};
		author = "SP Craig";
	};
	class SP_Carryall_ATacsFG: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (A-Tacs FG)";
		picture = "\x\cfp\addons\backpacks\data\ATacsFG.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\ATacsFG.paa"};
		author = "SP Craig";
	};
	class SP_Carryall_NodUrban: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 300;
		displayName = "Carryall (Nod Urban)";
		picture = "\x\cfp\addons\backpacks\data\NodUrban.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\NodUrban.paa"};
		author = "SP Craig";
	};
	class SP_Camelbak_Black: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 50;
		displayName = "Camelbak (Black)";
		model = "\x\cfp\addons\backpacks\Camelbak.p3d";
		picture = "\x\cfp\addons\backpacks\data\Black.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\Black.paa"};
		author = "SP Craig";
	};
	class SP_Camelbak_Green: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 50;
		displayName = "Camelbak (Green)";
		model = "\x\cfp\addons\backpacks\Camelbak.p3d";
		picture = "\x\cfp\addons\backpacks\data\Green.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\Green.paa"};
		author = "SP Craig";
	};
	class SP_Camelbak_Tan: B_Carryall_oucamo
	{
		scope = 2;
		maximumLoad = 50;
		displayName = "Camelbak (Tan)";
		model = "\x\cfp\addons\backpacks\Camelbak.p3d";
		picture = "\x\cfp\addons\backpacks\data\Tan.jpg";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\backpacks\data\Tan.paa"};
		author = "SP Craig";
	};
};
//};
