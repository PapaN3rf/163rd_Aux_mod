class CfgPatches
{
	class Siege_Corps_Aux
	{
		author = "163rd SC Aux";
		requiredAddons[] = {"SC_core"};
	 	units[]={"SC_Recruit_Armor","SC_Trooper_Armor"};
        weapons[]={};
	};
};
class CfgWeapons
{
	class HeadgearItem;
	class ItemCore;
	class ls_gar_phase1_helmet;
	class ls_gar_phase2_helmet;
  	class ls_gar_phase2Insulated_helmet;
 	class ls_gar_phase1Arf_helmet;
	class ls_gar_phase2Arf_helmet;
  	class ls_gar_phase1Pilot_helmet;
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_atrtDriver_helmet;
 	class ls_gar_galacticMarine_helmet;
  	class ls_gar_desert_helmet;
	class ls_gar_arc_helmet;
	class ls_gar_airborne_helmet;
	class ls_gar_engineer_helmet;
	class ls_gar_barc_helmet;
	class ls_gar_rex_helmet;
	class ls_gar_scout_helmet;
	class lsd_gar_airborne_helmet;
	class ls_sob_phase1SpecOp_helmet;
	//swlb nvg//
	class SWLB_clone_rangefinder;
	class SWLB_clone_nvg_spec;
	class SWLB_clone_mcVisor;
	class SWLB_clone_nvg;
	class SWLB_clone_AB_helmet;

	class basic_phase_1_Helmet: ls_gar_phase1_helmet
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "Republic Trooper P1 Helmet";
		picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";
		model = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {"ls_armor_bluefor\helmet\gar\phase1\data\helmet_P1_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		armor = 5;
		armorStructural = 8;
		explosionShielding = 0.5;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
				class Face: Head
				{
					hitpointName = "HitFace";
				};
			};
		};
	};
	class Siege_Corps_P1_recruit_Helmet: basic_phase_1_Helmet
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "(163rd Siege Corps) recruit P1 Helmet";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\Helmet\163rd_recruit_Phase1_Helmet_co.paa","163rd_siege_corps\Data\Misc\163rd_Phase1_visor_co.paa","163rd_siege_corps\Data\Misc\163rd_Phase1_ilum_co.paa"};
	};
    class Siege_Corps_P1_Helmet: Siege_Corps_P1_recruit_Helmet
	{
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayname = "(163rd Siege Corps) P1 Helmet";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\Helmet\163rd_Phase1_helmet_co.paa","163rd_siege_corps\Data\Misc\163rd_Phase1_visor_co.paa","163rd_siege_corps\Data\Misc\163rd_Phase1_ilum_co.paa"};
	};
    //NVG//
	class Siege_Corps_NVG: SWLB_clone_nvg
	{
		author = "163rd SC Aux";
		scopecurator = 2;
		displayName = "(163rd Siege Corps) Basic NVGs";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\Misc\163rd_nvgs_co.paa"};
	};
	class Siege_Corps_specops_NVG: SWLB_clone_nvg_spec
	{
		author = "163rd SC Aux";
		scopecurator = 2;
		displayName = "(163rd Siege Corps) SpecOps Nvgs";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\Misc\163rd_nvgs_co.paa"};
	};
	class ls_gar_phase2_uniform;
	class UniformItem;
	class Siege_Corps_recruit_Uniform: ls_gar_phase2_uniform
	{
		displayName = "(163rd Siege Corps) Clone Recruit armor";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SC_Recruit_Armor";
			containerClass = "Supply100";
			mass = 10;
		};
	};
	class Siege_Corps_trooper_Uniform: ls_gar_phase2_uniform
	{
		displayName = "(163rd Siege Corps) Clone Trooper armor";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SC_Trooper_Armor";
			containerClass = "Supply200";
			mass = 10;
		};
	};
};
class CfgVehicles
{
	class ls_gar_phase2_base;
	class ls_gar_medic_backpack;
	class ls_gar_radio_backpack;
	class ls_gar_standard_backpack;
	class ls_gar_heavy_backpack;
	class ls_gar_heavyMedic_backpack;
	class lsd_gar_marine_backpack;
	class UniformSlotInfo;
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase{};
	class B_Soldier_base_F: SoldierWB{};
	//clone_backpacks//
	//Gear Stuff//
	class SC_Recruit_Armor: ls_gar_phase2_base
	{
		author = "163rd SC Aux";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		uniformclass = "Siege_Corps_recruit_Uniform";
		faction = "SC_categoryGalacticRepublic";
		editorSubcategory = "SC_subcategory_Infantry";
		hiddenselectionsTextures[] = {"163rd_siege_corps\Data\Armour\163rd_recruit_chest_co.paa","163rd_siege_corps\Data\Armour\163rd_recruit_legs_co.paa","ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"};
		displayName = "(163rd Siege Corps) Recruit Clone Trooper";
		model = "ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform.p3d";
		backpack = "BSC_backpack_standard_unmarked";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"BSC_DC15A_rifle","Throw","Put"};
		respawnWeapons[] = {"BSC_DC15A_rifle","Throw","Put"};
		magazines[] = {"BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag"};
		respawnMagazines[] = {"BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag"};
		linkedItems[]={"SC_phase2Basic_vest_unmarked","Siege_Corps_P1_recruit_Helmet","ItemWatch","SWLB_comlink"};
		respawnLinkedItems[]={"SC_phase2Basic_vest_unmarked","Siege_Corps_P1_recruit_Helmet","ItemWatch","SWLB_comlink"};
		armor = 4;
		armorStructural = 4;
		explosionShielding = 0.2;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.2;
	};
	class SC_Trooper_Armor: SC_Recruit_Armor
	{
		author = "Papa N3rf";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "(163rd Siege Corps) Phase 1 CloneTrooper";
        backpack = "BSC_backpack_standard_unmarked";
		faction = "SC_categoryGalacticRepublic";
		editorSubcategory = "SC_subcategory_Infantry";
		uniformclass = "Siege_Corps_trooper_Uniform";
		hiddenselectionsTextures[] = {"163rd_siege_corps\Data\Armour\163rd_Trooper_chest_co.paa","163rd_siege_corps\Data\Armour\163rd_Trooper_legs_co.paa","ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"BSC_DC15A_rifle","Throw","Put"};
		respawnWeapons[] = {"BSC_DC15A_rifle","Throw","Put"};
		magazines[] = {"BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag"};
		respawnMagazines[] = {"BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag"};
		linkedItems[]={"SC_phase2Basic_vest_unmarked","Siege_Corps_P1_Helmet","ItemWatch","SWLB_comlink"};
		respawnLinkedItems[]={"SC_phase2Basic_vest_unmarked","Siege_Corps_P1_Helmet","ItemWatch","SWLB_comlink"};
		};
	};
};
