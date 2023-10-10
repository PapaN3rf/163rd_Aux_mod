class CfgPatches
{
	class Siege_Corps_Aux
	{
		author = "163rd SiegeCorps Auxiliary Assets";
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
	class H_HelmetO_ViperSP_hex_F;
	//swlb nvg//
	class SWLB_clone_rangefinder;
	class SWLB_clone_nvg_spec;
	class SWLB_clone_mcVisor;
	class SWLB_clone_nvg;
	class SWLB_clone_AB_helmet;
	class SiegeCorps_phase1_helmet_base: H_HelmetO_ViperSP_hex_F
	{
		author = "163rd SiegeCorps Auxiliary Assets";
		scope = 1;
		displayName = "[163rd] P1 Helmet (Base)";
		picture = "\ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {"ls_armor_bluefor\helmet\gar\phase1\data\helmet_P1_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
		hiddenSelectionsMaterials[] = {"163rd_siege_corps\Data\Misc\p1Helmet.rvmat","163rd_siege_corps\Data\Misc\p1Helmet.rvmat"};
		model = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
		subItems[] = {};
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
			};
		};
	};
	class SiegeCorps_phase2_helmet_base: H_HelmetO_ViperSP_hex_F
	{
		author = "163rd SiegeCorps Auxiliary Assets";
		scope = 1;
		displayName = "[163rd] P2 Helmet (Base)";
		picture = "ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";
		model = "ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
		hiddenSelections[] = {"camo1","visor"};
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\Helmet\228thTaskForceHelmet_co.paa","BSC_Clones\data\visor\228th_visor_co.paa"};
		hiddenSelectionsMaterials[] = {"163rd_siege_corps\Data\Misc\p2Helmet.rvmat","163rd_siege_corps\Data\Misc\p2Helmet.rvmat"};
		armor = 5;
		armorStructural = 8;
		explosionShielding = 0.5;
		minTotalDamageThreshold = 0.001;
		impactDamageMultiplier = 0.5;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo1","visor"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 50;
					passThrough = 0.5;
				};
			};
		};
	};
	class Siege_Corps_P1_unmarked_Helmet: SiegeCorps_phase1_helmet_base
	{
		scope = 2;
		displayName = "[163rd] Phase 1 Helmet (unmarked)";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\unmarked\163rd_unmarked_Phase1_Helmet_co.paa","163rd_siege_corps\Data\unmarked\163rd_Phase1_unmarked_visor_co.paa","163rd_siege_corps\Data\unmarked\163rd_Phase1_ilum_co.paa"};
	};
	class Siege_Corps_P1_recruit_Helmet: Siege_Corps_P1_unmarked_Helmet
	{
		scope = 2;
		displayName = "[163rd] Phase 1 Helmet (recruit)";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\Helmet\163rd_recruit_Phase1_Helmet_co.paa","163rd_siege_corps\Data\Misc\163rd_Phase1_visor_co.paa","163rd_siege_corps\Data\Misc\163rd_Phase1_ilum_co.paa"};
	};
	class Siege_Corps_P1_Enlisted_Helmet: Siege_Corps_P1_recruit_Helmet
	{
		scope = 2;
		displayName = "[163rd] Phase 1 Helmet (Enlisted)";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\Helmet\163rd_Phase1_helmet_co.paa","163rd_siege_corps\Data\Misc\163rd_Phase1_visor_co.paa","163rd_siege_corps\Data\Misc\163rd_Phase1_ilum_co.paa"};
	};
	//phase 2//
	class Siege_Corps_P2_unmarked_Helmet: SiegeCorps_phase2_helmet_base
	{
		scope = 2;
		displayName = "[163rd] Phase 2 Helmet (unmarked)";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\unmarked\163rd_unmarked_Phase2_Helmet_co.paa","163rd_siege_corps\Data\unmarked\163rd_Phase2_unmarked_visor_co.paa"};
	};
    //NVG//
	class Siege_Corps_NVG: SWLB_clone_nvg
	{
		author = "163rd SiegeCorps Auxiliary Assets";
		scopecurator = 2;
		displayName = "[163rd] Basic NVGs";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\Misc\163rd_nvgs_co.paa"};
	};
	class Siege_Corps_specops_NVG: SWLB_clone_nvg_spec
	{
		author = "163rd SiegeCorps Auxiliary Assets";
		scopecurator = 2;
		displayName = "[163rd] SpecOps Nvgs";
		hiddenSelectionsTextures[] = {"163rd_siege_corps\Data\Misc\163rd_nvgs_co.paa"};
	};
	class ls_gar_phase2_uniform;
	class UniformItem;
	class ItemInfo;
	//base//
	class SiegeCorps_CloneArmor_base_uniform: ls_gar_phase2_uniform
	{
		scope = 1;
		displayName = "[163rd] Armor (Base)";
		author = "163rd SiegeCorps Auxiliary Assets";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "SiegeCorps_CloneArmor_base";
			uniformType = "Neopren";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class SiegeCorps_phase2_cloneArmor_base_uniform: SiegeCorps_CloneArmor_base_uniform
	{
		scope = 1;
		displayName = "[163rd] Phase 2 Armor (Base)";
		author = "163rd SiegeCorps Auxiliary Assets";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "SiegeCorps_CloneArmor_phase2_base_unit";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	//Unmarked//
	class SiegeCorps_phase1_uniform_unmarked: SiegeCorps_phase2_cloneArmor_base_uniform
	{
		scope = 2;
		displayName = "[163rd] Phase 1 unmarked Armor";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "SiegeCorps_phase1_CloneArmor_unmarked";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class SiegeCorps_phase2_uniform_unmarked: SiegeCorps_phase2_cloneArmor_base_uniform
	{
		scope = 2;
		displayName = "[163rd] Phase 2 unmarked Armor";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "SiegeCorps_phase2_CloneArmor_unmarked";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class SiegeCorps_CloneArmor_phase1_base_uniform: SiegeCorps_phase2_cloneArmor_base_uniform
	{
		scope = 2;
		displayName = "[163rd] Phase 1 Armor";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "SiegeCorps_CloneArmor_phase1_base_unit";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	//Ranks//
	class SiegeCorps_cloneArmor_uniform_CR: SiegeCorps_phase2_uniform_unmarked
	{
		displayName = "[163rd] Phase1 armor (CR)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SiegeCorps_phase2_cloneArmor_unit_CR";
			containerClass = "Supply150";
			mass = 10;
		};
	};
	class SiegeCorps_cloneArmor_uniform_CT: SiegeCorps_phase2_uniform_unmarked
	{
		displayName = "[163rd] Phase 1 armor (CT)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SiegeCorps_CloneArmor_phase1_CT";
			containerClass = "Supply150";
			mass = 10;
		};
	};
	//Phase 2//
	class SiegeCorps_phase2_cloneArmor_uniform: SiegeCorps_phase2_uniform_unmarked
	{
		displayName = "[163rd] Phase 2 armor";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "SiegeCorps_CloneArmor_phase2";
			containerClass = "Supply150";
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
	//Gear Stuff//
	class B_Soldier_F: B_soldier_base_F
	{
		class HitPoints;
	};
	class SiegeCorps_CloneArmor_base_unit: B_Soldier_F
	{
		author = "163rd SiegeCorps Auxiliary Assets";
		scope = 1;
		faction = "SC_categoryGalacticRepublic";
		editorSubcategory = "SC_subcategory_Infantry";
		backpack = "";
		uniformClass = "SiegeCorps_ClomeArmor_base_uniform";
		nakedUniform = "lsd_gar_bodyGlove_uniform";
		model = "\ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform.p3d";
		linkedItems[] = {"SiegeCorps_helmet_base"};
		respawnLinkedItems[] = {"SiegeCorps_helmet_base"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {};
		respawnMagazines[] = {};
		items[] = {};
		respawnItems[] = {};
		hiddenSelections[] = {"camo1","camo2","undersuit"};
		hiddenSelectionsTextures[] = {"\163rd_siege_corps\Data\Uniforms\base_Armor_unmarked_lower_co.paa","163rd_siege_corps\Data\Uniforms\base_Armor_unmarked_lower_co.paa","\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"};
		hiddenSelectionsMaterials[] = {"163rd_siege_corps\Data\Misc\Armor_upper.rvmat","163rd_siege_corps\Data\Misc\Armor_lower.rvmat"};
		class HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.8;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 6;
				material = -1;
				name = "neck";
				passThrough = 0.8;
				radius = 0.1;
				explosionShielding = 0.5;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.8;
				radius = 0.2;
				explosionShielding = 0.5;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis: HitHead
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.8;
				radius = 0.24;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.8;
				radius = 0.16;
				explosionShielding = 1;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.8;
				radius = 0.18;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 6;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms: HitBody
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 1;
				radius = 0.1;
				explosionShielding = 1;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 1;
				radius = 0.14;
				explosionShielding = 1;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class Incapacitated: HitLegs
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 1;
				radius = 0;
				explosionShielding = 1;
				visual = "";
				minimalHit = 0;
				depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
			};
		};
	};
	//Unmarked//
	class SiegeCorps_phase1_CloneArmor_unmarked: SiegeCorps_CloneArmor_base_unit
	{
		scope = 2;
		displayName = "[163rd] Phase 1 Unmarked Clone Trooper";
		uniformClass = "SiegeCorps_phase1_uniform_unmarked";
		linkedItems[] = {"Siege_Corps_P1_unmarked_Helmet"};
		respawnLinkedItems[] = {"Siege_Corps_P1_unmarked_Helmet"};
		hiddenSelectionsTextures[] = {"\163rd_siege_corps\Data\Uniforms\P1Armor_unmarked_upper_co.paa","\163rd_siege_corps\Data\Uniforms\P2Armor_unmarked_lower_co.paa","ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"};
	};
	class SiegeCorps_phase2_CloneArmor_unmarked: SiegeCorps_CloneArmor_base_unit
	{
		scope = 2;
		displayName = "[163rd] Phase 2 Unmarked Clone Trooper";
		uniformClass = "SiegeCorps_phase2_uniform_unmarked";
		linkedItems[] = {"Siege_Corps_P2_unmarked_Helmet"};
		backpack = "BSC_backpack_standard_unmarked";
		respawnLinkedItems[] = {"Siege_Corps_P2_unmarked_Helmet"};
		hiddenSelectionsTextures[] = {"\163rd_siege_corps\Data\Uniforms\P2Armor_unmarked_upper_co.paa","\163rd_siege_corps\Data\Uniforms\P2Armor_unmarked_lower_co.paa","ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"};
	};
	//Unit//
	class SiegeCorps_CloneArmor_phase1_base_unit: SiegeCorps_CloneArmor_base_unit
	{
		author = "163rd SiegeCorps Auxiliary Assets";
		scope = 2;
		uniformclass = "SiegeCorps_CloneArmor_phase1_base_uniform";
		faction = "SC_categoryGalacticRepublic";
		editorSubcategory = "SC_subcategory_Infantry";
		hiddenselectionsTextures[] = {"163rd_siege_corps\Data\Uniforms\163rd_recruit_chest_co.paa","163rd_siege_corps\Data\Uniforms\163rd_recruit_legs_co.paa","ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"};
		displayName = "[163rd] Phase 1 Clone Trooper";
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
	};
	class SiegeCorps_CloneArmor_phase1_CR: SiegeCorps_CloneArmor_phase1_base_unit
	{
		author = "163rd SiegeCorps Auxiliary Assets";
		displayName = "[163rd] Phase 2 Armor (CR)";
		scope = 2;
		uniformclass = "SiegeCorps_cloneArmor_uniform_CR";
		faction = "SC_categoryGalacticRepublic";
		editorSubcategory = "SC_subcategory_Infantry";
		hiddenselectionsTextures[] = {"163rd_siege_corps\Data\Uniforms\163rd_recruit_chest_co.paa","163rd_siege_corps\Data\Uniforms\163rd_recruit_legs_co.paa","ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"};
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
	};
	class SiegeCorps_CloneArmor_phase1_CT: SiegeCorps_CloneArmor_phase1_CR
	{
		author = "Papa N3rf";
		scope = 2;
		scopecurator = 2;
		scopearsenal = 2;
		displayName = "[163rd] Phase 1 CloneTrooper";
        backpack = "BSC_backpack_standard_unmarked";
		faction = "SC_categoryGalacticRepublic";
		editorSubcategory = "SC_subcategory_Infantry";
		uniformclass = "SiegeCorps_cloneArmor_uniform_CT";
		hiddenselectionsTextures[] = {"163rd_siege_corps\Data\Uniforms\163rd_Trooper_chest_co.paa","163rd_siege_corps\Data\Uniforms\163rd_Trooper_legs_co.paa","ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"BSC_DC15A_rifle","Throw","Put"};
		respawnWeapons[] = {"BSC_DC15A_rifle","Throw","Put"};
		magazines[] = {"BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag"};
		respawnMagazines[] = {"BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag"};
		linkedItems[]={"SC_phase2Basic_vest_unmarked","Siege_Corps_P1_Helmet","ItemWatch","SWLB_comlink"};
		respawnLinkedItems[]={"SC_phase2Basic_vest_unmarked","Siege_Corps_P1_Helmet","ItemWatch","SWLB_comlink"};
	};
	//phase2//
	class SiegeCorps_CloneArmor_phase2: SiegeCorps_CloneArmor_base_unit
	{
		author = "163rd SiegeCorps Auxiliary Assets";
		scope = 2;
		uniformclass = "SiegeCorps_phase2_cloneArmor_uniform";
		faction = "SC_categoryGalacticRepublic";
		editorSubcategory = "SC_subcategory_Infantry";
		hiddenselectionsTextures[] = {"163rd_siege_corps\Data\Uniforms\163rd_recruit_chest_co.paa","163rd_siege_corps\Data\Uniforms\163rd_recruit_legs_co.paa","ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"};
		displayName = "[163rd] Phase 2 Clone Trooper";
		model = "ls_armor_bluefor\uniform\gar\phase2\ls_gar_phase2_uniform.p3d";
		backpack = "BSC_backpack_standard_unmarked";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		weapons[] = {"BSC_DC15A_rifle","Throw","Put"};
		respawnWeapons[] = {"BSC_DC15A_rifle","Throw","Put"};
		magazines[] = {"BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag"};
		respawnMagazines[] = {"BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag","BSC_DC15A_mag"};
		linkedItems[]={"SC_phase2Basic_vest_unmarked","Siege_Corps_P2_unmarked_Helmet","ItemWatch","SWLB_comlink"};
		respawnLinkedItems[]={"SC_phase2Basic_vest_unmarked","Siege_Corps_P2_unmarked_Helmet","ItemWatch","SWLB_comlink"};
		};
	};