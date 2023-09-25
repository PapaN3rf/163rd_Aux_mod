class CfgPatches
{
	class SC_Vest
	{
		units[]=
		{
			"SC_backpack_standard_unmarked",
			"SC_backpack_standard_RTO",
			"SC_backpack_standard_heavy",
			"SC_backpack_standard_medic",
			"SC_bag_full",
			"SC_bag_belt",
			"SC_bag_leg",
			"SC_radioAttachment",
			"SC_radioAttachment_bags",
			"SC_backpack_invisible"
		};
		weapons[]=
		{
			"SC_phase2Specialist_vest_unmarked",
			"SC_phase2Basic_vest_unmarked",
			"SC_phase2Recon_vest_unmarked",
			"SC_phase2Engineer_vest_unmarked",
			"SC_phase2ARF_vest_unmarked",
			"SC_phase2Assault_vest_unmarked",
			"SC_phase2CFR_vest_unmarked",
			"SC_phase2Grenadier_vest_unmarked",
			"SC_phase2RHolster_vest_unmarked",
			"SC_phase2AbrCFR_vest_unmarked",
			"SC_phase2AbrLight_vest_unmarked",
			"SC_phase2ForceRecon_vest_unmarked",
			"SC_phase2Heavy_vest_unmarked",
			"SC_phase2ReconSurvival_vest_unmarked",
			"SC_phase2HeavyAlt_vest_unmarked",
			"SC_phase2ForceReconNCO_vest_unmarked",
			"SC_phase2Medic_vest_unmarked",
			"SC_phase2Medic_vest_platoon",
			"SC_phase2Medic_vest_company",
			"SC_phase2ReconNCO_vest_unmarked",
			"SC_phase2ForceReconCommander_vest_unmarked",
			"SC_phase2CloneCommander_vest_unmarked",
			"SC_phase2CloneLieutenant_vest_unmarked",
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"BSC_radioUI",
			"ls_armor_bluefor",
			"A3_characters_f",
			"A3_data_f",
			"SWLB_clones",
			"SWLB_equipment"
		};
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class ls_gar_heavy_backpack;
	class ls_gar_medic_backpack;
	class ls_gar_radio_backpack;
	class ls_gar_heavyMedic_backpack;
	class lsd_gar_phase2_base;
	class B_soldier_base_F;
	class B_Kitbag_rgr;
	class SC_backpack_base: B_Kitbag_rgr
	{
		author = "163rd SC Aux";
		scope=1;
		displayName="(163rd) Backpack | Base";
		maximumload=200;
		model="\ls_equipment_bluefor\backpack\gar\backpack\ls_gar_standard_backpack.p3d";
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[] = {"backpack","cover"};
		hiddenselectionstextures[] = {"163rd_siege_corps\Data\backpacks\Siege_corps_Backpack_co.paa","163rd_siege_corps\Data\backpacks\cover_co.paa"};
	};
	class SC_backpack_standard_base: SC_backpack_base
	{
		scope=1;
		displayName="(163rd) Backpack | Base";
		model="\ls_equipment_bluefor\backpack\gar\backpack\ls_gar_standard_backpack.p3d";
		hiddenselections[] = {"backpack","cover"};
		hiddenselectionstextures[] = {"ls_equipment_bluefor\backpack\gar\backpack\data\backpack_co.paa","ls_equipment_bluefor\backpack\gar\backpack\data\cover_co.paa"};
	};
	class SC_backpack_standard_unmarked: SC_backpack_standard_base
	{
		scope=2;
		displayName="(163rd) Backpack";
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselectionstextures[] = {"163rd_siege_corps\Data\backpacks\Siege_corps_Backpack_co.paa","163rd_siege_corps\Data\backpacks\cover_co.paa"};
	};
	class SC_backpack_standard_RTO: SC_backpack_standard_base
	{
		scope=2;
		displayName="(163rd) Backpack (RTO)";
		picture="\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_radio_backpack.p3d";
		hiddenselections[] = {"backpack","radio","screen"};
		hiddenselectionstextures[] = {"163rd_siege_corps\Data\backpacks\Siege_corps_Backpack_co.paa","ls_equipment_bluefor\backpack\gar\backpack\data\radio_co.paa","ls_equipment_bluefor\backpack\gar\backpack\data\screen_co.paa"};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class SC_backpack_heavy: ls_gar_heavy_backpack
	{
		scopecurator = 2;
		scope = 2;
		model = "ls_equipment_bluefor\backpack\gar\heavyBackpack\ls_gar_heavy_backpack.p3d";
		maximumload = 500;
		displayName="(163rd) Backpack (Heavy)";
		hiddenselections[] = {"backpack","cover","pouches","tube"};
		hiddenselectionstextures[] = {"163rd_siege_corps\Data\backpacks\Siege_corps_EOD_Backpack_co.paa","163rd_siege_corps\Data\backpacks\cover_co.paa","ls_equipment_bluefor\backpack\gar\backpack\data\pouches_co.paa","ls_equipment_bluefor\backpack\gar\backpack\data\tube_co.paa"};
	};
	class SC_backpack_medic: ls_gar_medic_backpack
	{
		scopecurator = 2;
		scope = 2;
		displayname = "(163rd) Medic Backpack";
		model = "ls_equipment_bluefor\backpack\gar\backpack\ls_gar_medic_backpack.p3d";
		maximumload = 500;
		picture = "\SWLB_equipment\backpacks\data\ui\icon_SWLB_clone_backpack_ca.paa";
		hiddenselections[] = {"backpack","cover","medic1","medic2"};
		hiddenselectionstextures[] = {"163rd_siege_corps\Data\backpacks\Siege_corps_Medical_Backpack_co.paa","163rd_siege_corps\Data\backpacks\cover_co.paa","ls_equipment_bluefor\backpack\gar\backpack\data\medic_co.paa","ls_equipment_bluefor\backpack\gar\backpack\data\medic_co.paa"};
	};
	class SC_bag_full: SC_backpack_standard_base
	{
		scope=2;
		displayName="(163rd) Bag (Full)";
		model="\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_equipment\backpacks\data\bag_co.paa",
			"\SWLB_equipment\backpacks\data\bag_co.paa"
		};
	};
	class SC_bag_belt: SC_backpack_standard_base
	{
		scope=2;
		displayName="(163rd) Bag (Belt)";
		model="\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_equipment\backpacks\data\bag_co.paa",
			""
		};
	};
	class SC_bag_leg: SC_backpack_standard_base
	{
		scope=2;
		displayName="(163rd) Bag (Leg)";
		model="\SWLB_equipment\backpacks\SWLB_clone_bag.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"\SWLB_equipment\backpacks\data\bag_co.paa"
		};
	};
	class SC_radioAttachment: SC_backpack_standard_base
	{
		scope=2;
		displayName="(163rd) Radio Attachment";
		model="\SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
		hiddenSelections[]=
		{
			"main",
			"accumulator"
		};
		hiddenSelectionsTextures[]=
		{
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_co.paa",
			"\SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa"
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class SC_radioAttachment_bags: SC_backpack_standard_base
	{
		scope=2;
		displayName="(163rd) Radio Attachment (Bags)";
		model="\SWLB_CEE\data\9423_Backpack.p3d";
		hiddenSelections[]=
		{
			"Accumulator",
			"Camo1",
			"Camo2",
			"Main"
		};
		hiddenSelectionsTextures[]=
		{
			"SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_accumulator_co.paa",
			"SWLB_equipment\backpacks\data\bag_co.paa",
			"SWLB_clones\data\light_accessories_co.paa",
			"SWLB_equipment\backpacks\data\SWLB_clone_RTO_mini_backpack_co.paa"
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
	class SC_backpack_invisible: SC_backpack_standard_base
	{
		scope=2;
		displayName="(163rd) Invisible Backpack";
		model="\SC\SC_props\empty.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=25000;
		tf_subtype="digital_lr";
	};
};
class CfgWeapons
{
	class ItemInfo;
	class HeadgearItem;
	class ls_gar_phase2_uniform;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class SWLB_CEE_Hazard_Vest;
	class SC_Hazard_Vest: SWLB_CEE_Hazard_Vest
	{
		scope = 2;
		scopecurator = 2;
		displayName = "All father's hazard vest";
		model = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		uniformModel = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SWLB_clones\data\light_accessories_co.paa","SC_Clones\data\Misc\228th_Allfather_Vest_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Legs
				{
					hitpointName = "HitLegs";
					armor = 6;
					passThrough = 0.3;
				};
			};
		};
	};
	class SC_vest_base: V_PlateCarrier1_rgr
		{
			scope=1;
			author = "163rd SC Aux";
			displayName="(163rd) Vest | Base";
			class ItemInfo: VestItem
			{
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Specialist_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Specialist Vest | Base";
			model="\SWLB_clones\SWLB_clone_specialist_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\light_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_specialist_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Basic_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Basic Vest | Base";
			model="\SWLB_clones\SWLB_clone_basic_armor.p3d";
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_basic_armor.p3d";
				containerClass="Supply70";
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Recon_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Recon Vest | Base";
			model="\SWLB_clones\SWLB_clone_recon_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"holster",
				"pauldron"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_co.paa",
				"",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_recon_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"holster",
					"pauldron"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Engineer_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Engineer Vest | Base";
			model="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_CEE\data\SWLB_CEE_Engineer_Vest.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2ARF_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone ARF Vest | Base";
			model="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\officer_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_CEE\data\SWLB_CEE_ARF_Vest.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"camo3"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Assault_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Assault Vest | Base";
			model="\SWLB_clones\SWLB_clone_assault_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\light_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_assault_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2CFR_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone CFR Vest | Base";
			model="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_cfr_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Grenadier_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Grenadier Vest | Base";
			model="\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\light_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_grenadier_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2RHolster_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Holster | Base";
			model="\ls_armor_bluefor\vest\gar\clone\lsd_gar_clone_vest.p3d";
			class ItemInfo: VestItem
			{
				uniformModel="\ls_armor_bluefor\vest\gar\clone\lsd_gar_clone_vest.p3d";
				containerClass="Supply70";
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2AbrCFR_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Airborne CFR Vest | Base";
			model="\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"pauldron"
			};
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"ammo",
					"camo1",
					"camo2",
					"pauldron"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2AbrLight_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Airborne Light Vest | Base";
			model="\SWLB_CEE\data\SWLB_CEE_Airborne_Light.p3d";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"pauldron"
			};
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_CEE\data\SWLB_CEE_Airborne_Light.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"ammo",
					"camo1",
					"camo2",
					"pauldron"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Abr_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Airborne Vest | Base";
			model="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"ammo",
				"pauldron"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_co.paa",
				"\SWLB_clones\data\officer_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_airborne_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"ammo",
					"pauldron"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2ForceRecon_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Force Recon Vest | Base";
			model="\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\light_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Heavy_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Heavy Vest | Base";
			model="\ls_armor_bluefor\vest\gar\heavy\ls_gar_heavy_vest.p3d";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"camo3",
				"pauldron"
			};
			hiddenSelectionsTextures[]=
			{
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\light_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\ls_armor_bluefor\vest\gar\heavy\ls_gar_heavy_vest.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"ammo",
					"camo1",
					"camo2",
					"camo3",
					"pauldron"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2ReconSurvival_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Recon Survival Vest | Base";
			model="\SWLB_CEE\data\SWLB_CEE_Recon_Survival.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\mc_camo1_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Survival.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"camo3",
					"camo4"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2HeavyAlt_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Alternative Heavy Vest (Alt) | Base";
			model="\ls_armor_bluefor\vest\gar\heavy\ls_gar_heavyAlt_vest.p3d";
			hiddenSelections[]=
			{
				"ammo",
				"camo1",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"pauldron"
			};
			hiddenSelectionsTextures[]=
			{
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\light_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\\officer_accessories_co.paa",
				"swlb_core\data\common_textures\equipment\bag_co.paa",
				"swlb_core\data\common_textures\accessories\light_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\ls_armor_bluefor\vest\gar\heavy\ls_gar_heavyAlt_vest.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"ammo",
					"camo1",
					"camo2",
					"camo3",
					"camo4",
					"camo5",
					"pauldron"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2ForceReconNCO_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Force Recon NCO Vest | Base";
			model="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3"
			};
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\officer_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_CEE\data\SWLB_CEE_Force_Recon_NCO.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"camo3"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Medic_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Medic Vest | Base";
			model="\SWLB_clones\SWLB_clone_medic_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_medic_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_medic_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2ReconNCO_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Recon NCO Vest | Base";
			model="\SWLB_clones\SWLB_clone_recon_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"holster",
				"pauldron"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_co.paa",
				"",
				"\SWLB_clones\data\heavy_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_recon_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"holster",
					"pauldron"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2ForceReconCommander_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Force Recon Commander Vest | Base";
			model="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
			uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\officer_accessories_co.paa",
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\officer_accessories_co.paa"
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_CEE\data\SWLB_CEE_Recon_Force_Commander.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"camo2",
					"camo3",
					"camo4"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2CloneCommander_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Commander Vest | Base";
			model="\SWLB_clones\SWLB_clone_commander_armor.p3d";
			hiddenSelections[]=
			{
				"camo1",
				"rank"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\officer_accessories_co.paa",
				""
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_commander_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1",
					"rank"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2CloneLieutenant_vest_base: SC_vest_base
		{
			scope=1;
			displayName="(163rd) Clone Lieutenant Vest | Base";
			model="\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\officer_accessories_co.paa",
				""
			};
			class ItemInfo: VestItem
			{
				uniformModel="\SWLB_clones\SWLB_clone_lieutenant_armor.p3d";
				containerClass="Supply70";
				hiddenSelections[]=
				{
					"camo1"
				};
				mass=80;
				class HitpointsProtectionInfo
				{
					class Chest
					{
						HitpointName="HitChest";
						armor=0;
						PassThrough=0;
					};
					class Legs
					{
						hitpointName="HitLegs";
						armor=0;
						passThrough=0;
					};
					class Arms
					{
						hitpointName="HitArms";
						armor=0;
						passThrough=0;
					};
				};
			};
		};
		class SC_phase2Specialist_vest_unmarked: SC_phase2Specialist_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Specialist Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\light_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
		class SC_phase2Basic_vest_unmarked: SC_phase2Basic_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Basic Vest";
		};
		class SC_phase2Recon_vest_unmarked: SC_phase2Recon_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Recon Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_co.paa",
				"",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
		class SC_phase2Engineer_vest_unmarked: SC_phase2Engineer_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Engineer Vest";
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_CEE\data\SWLB_CEE_Engineer_Base.paa"
			};
		};
		class SC_phase2ARF_vest_unmarked: SC_phase2ARF_vest_base
		{
			scope=2;
			displayName="(163rd) Clone ARF Vest";
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\officer_accessories_co.paa"
			};
		};
		class SC_phase2Assault_vest_unmarked: SC_phase2Assault_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Assault Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\light_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
		class SC_phase2CFR_vest_unmarked: SC_phase2CFR_vest_base
		{
			scope=2;
			displayName="(163rd) Clone CFR Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
		class SC_phase2Grenadier_vest_unmarked: SC_phase2Grenadier_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Grenadier Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\light_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
		class SC_phase2RHolster_vest_unmarked: SC_phase2RHolster_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Holster";
		};
		class SC_phase2AbrCFR_vest_unmarked: SC_phase2AbrCFR_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Airborne CFR Vest";
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
		class SC_phase2AbrLight_vest_unmarked: SC_phase2AbrLight_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Airborne Light Vest";
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
		class SC_phase2ForceRecon_vest_unmarked: SC_phase2ForceRecon_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Force Recon Vest";
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\light_accessories_co.paa"
			};
		};
		class SC_phase2Heavy_vest_unmarked: SC_phase2Heavy_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Heavy Vest";
			hiddenSelectionsTextures[]=
			{
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\light_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa"
			};
		};
		class SC_phase2ReconSurvival_vest_unmarked: SC_phase2ReconSurvival_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Recon Survival Vest";
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa",
				"SWLB_clones\data\mc_camo1_co.paa"
			};
		};
		class SC_phase2HeavyAlt_vest_unmarked: SC_phase2HeavyAlt_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Alternative Heavy Vest";
			hiddenSelectionsTextures[]=
			{
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\light_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\\officer_accessories_co.paa",
				"swlb_core\data\common_textures\equipment\bag_co.paa",
				"swlb_core\data\common_textures\accessories\light_accessories_co.paa",
				"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa"
			};
		};
		class SC_phase2ForceReconNCO_vest_unmarked: SC_phase2ForceReconNCO_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Force Recon NCO Vest";
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\officer_accessories_co.paa",
				"SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
		class SC_phase2Medic_vest_unmarked: SC_phase2Medic_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Medic Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_medic_co.paa"
			};
		};
		class SC_phase2Medic_vest_platoon: SC_phase2Heavy_vest_base
		{
			scope=2;
			displayName="(163rd) Platoon Medic Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_medic_co.paa",
				"\SWLB_clones\data\heavy_accessories_medic_co.paa",
				"\SWLB_clones\data\heavy_accessories_medic_co.paa",
				"swlb_core\data\common_textures\accessories\light_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_medic_co.paa"
			};
		};
		class SC_phase2Medic_vest_company: SC_phase2Abr_vest_base
		{
			scope=2;
			displayName="(163rd) Company Medic Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_medic_co.paa",
				"\SWLB_clones\data\officer_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_medic_co.paa",
				"\SWLB_clones\data\heavy_accessories_medic_co.paa"
			};
		};
		class SC_phase2ReconNCO_vest_unmarked: SC_phase2ReconNCO_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Recon NCO Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\heavy_accessories_co.paa",
				"",
				"\SWLB_clones\data\heavy_accessories_co.paa",
				"\SWLB_clones\data\heavy_accessories_co.paa"
			};
		};
		class SC_phase2ForceReconCommander_vest_unmarked: SC_phase2ForceReconCommander_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Force Recon Commander Vest";
			hiddenSelectionsTextures[]=
			{
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\officer_accessories_co.paa",
				"SWLB_clones\data\light_accessories_co.paa",
				"SWLB_clones\data\officer_accessories_co.paa"
			};
		};
		class SC_phase2CloneCommander_vest_unmarked: SC_phase2CloneCommander_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Commander Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\officer_accessories_co.paa",
				""
			};
		};
		class SC_phase2CloneLieutenant_vest_unmarked: SC_phase2CloneLieutenant_vest_base
		{
			scope=2;
			displayName="(163rd) Clone Lieutenant Vest";
			hiddenSelectionsTextures[]=
			{
				"\SWLB_clones\data\officer_accessories_co.paa"
		};
	};
};
