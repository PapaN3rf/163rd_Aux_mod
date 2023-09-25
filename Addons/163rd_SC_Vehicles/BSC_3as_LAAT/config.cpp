class cfgpatches
{
	class BSC_LAATs
	{
		units[] = {"BSC_Laat_Turret","BSC_Laat_Doors"};
		weapons[] = {};
		requiredversion = 0.1;
		requiredaddons[] = {};
	};
};
class cfgvehicles
{
	class lsd_heli_laati;
	class lsd_heli_laati_ab;
	class 3as_LAAT_Mk1;
	class 3as_LAAT_Mk2;

	class BSC_Laat_Turret: 3as_LAAT_Mk1
	{
		author = "228th BSC Aux Mod";
		displayname = "(BSC) ARC LAAT/I IV";
		scope = 2;
		scopecurator = 2;
		editorSubcategory = "BSC_subcategoryAircraftRotary";
		faction = "BSC_categoryGalacticRepublic";
		scopearsenal = 2;
		crew="Taskforce_Phase_Pilot_trooper";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Hull_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Wings_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Weapons_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Weapon_Details_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Interior_co.paa"};
		class TextureSources
		{
			class base
			{
				displayname = "(BSC) ARC LAAT/I IV";
				author = "Papa n3rf";
				hiddenSelectionsTextures[] = {"BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Hull_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Wings_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Weapons_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Weapon_Details_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Interior_co.paa"};
				factions[] = {"Papa_faction_N3rf_Clones"};
			};
		};
		textureList[] = {"base",0};
	};
	class BSC_Laat_Doors: 3as_LAAT_Mk2
	{
		author = "228th BSC Aux Mod";
		displayname = "(BSC) LAAT/I XI";
		scope = 2;
		scopecurator = 2;
		editorSubcategory = "BSC_subcategoryAircraftRotary";
		faction = "BSC_categoryGalacticRepublic";
		scopearsenal = 2;
		crew="Taskforce_Phase_Pilot_trooper";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"BSC_Vehicles\BSC_3as_LAAT\data\BSC_Door_Hull_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_door_Wings_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_Door_Weapons_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\Door_Weapon_Details_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_Door_Interior_co.paa"};
		class TextureSources
		{
			class base
			{
				displayname = "(BSC) LAAT/I XI";
				author = "Papa n3rf";
				hiddenSelectionsTextures[] = {"BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Hull_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Wings_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_LAAT_Weapons_co.paa","BSC_Vehicles\BSC_3as_LAAT\data\Weapon_Details_CO.paa","BSC_Vehicles\BSC_3as_LAAT\data\BSC_Door_Interior_co.paa"};
				factions[] = {"Papa_faction_N3rf_Clones"};
			};
		};
		textureList[] = {"base",0};
	};
};
