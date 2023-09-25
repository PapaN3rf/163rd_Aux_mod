class CfgPatches
{
	class bsc_vehicles_weapons
	{
		author = "228th BSC Aux Mod";
		requiredAddons[] = {"A3_Weapons_F","3AS_Weapons","3AS_Main"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {"bsc_oryx_autocannon_ammo"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgAmmo
{
	class ShellBase;
	class BulletBase;
	class SubmunitionBase;
	class B_40MM_GPR;
	class Sh_120mm_HEAT_MP;
	class G_40mm_HEDP;
	class B_30mm_HE;
	class B_35mm_AA;
	class B_20mm;
	class Sh_155mm_AMOS;
	class BSC_plasma_ammo_base;
	class Cannon_30mm_HE_Plane_CAS_02_F;
	class bsc_oryx_autocannon_ammo: B_20mm
	{
		hit = 180;
		indirectHit = 30;
		indirectHitRange = 4;
		explosive = 0.8;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
		cost = 20;
		airFriction = -0.00036;
		fuseDistance = 3;
		typicalSpeed = 960;
		caliber = 18;
		airlock = 0;
		model = "BSC_ammo\effects\Blue_trace_shell";
		aiAmmoUsageFlags = "64 + 128";
		tracerScale = 2.5;
		tracerStartTime = 0.001;
		tracerEndTime = 4.7;
		effectfly = "BSC_plasma_effect_blue";
	};
	class bsc_oryx_autocannon_HE_ammo: BSC_plasma_ammo_base
	{
		soundFly[] = {"",1,1,50};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		explosionSoundEffect = "DefaultExplosion";
		hit = 300;
		indirectHit = 24;
		indirectHitRange = 6;
		warheadName = "HEAT";
		submunitionAmmo = "ammo_Penetrator_120mm";
		submunitionDirectionType = "SubmunitionModelDirection";
		caliber = 20;
		explosive = 0.8;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		model = "BSC_ammo\effects\Blue_trace_shell";
		cost = 40;
		fuseDistance = 3;
		typicalSpeed = 990;
		tracerStartTime = 0.0001;
		tracerScale = 2;
		tracerEndTime = 10;
		aiAmmoUsageFlags = "64 + 128 + 512";
		effectfly = "BSC_plasma_effect_blue";
		class CamShakeExplode
		{
			power = 3.8;
			duration = 0.8;
			frequency = 20;
			distance = 50.8712;
		};
		class CamShakeHit
		{
			power = 19;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.0878;
			duration = 0.8;
			frequency = 20;
			distance = 34.8712;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class bsc_oryxTurret_Plasma: BSC_plasma_ammo_base
	{
		hit = 10;
		caliber = 1.5;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class VehicleMagazine;
	class 200Rnd_40mm_G_belt: VehicleMagazine{};
	class 60RND_40MM_GPR_shells: VehicleMagazine{};
	class 32Rnd_155mm_Mo_shells: VehicleMagazine{};
	class 20Rnd_120mm_HEAT_MP: VehicleMagazine{};
	class 20Rnd_125mm_APFSDS: VehicleMagazine{};
	class magazine_Missile_AMRAAM_D_x1: VehicleMagazine{};
	class PylonMissile_Missile_BIM9X_x1;
	class PylonMissile_Bomb_GBU12_x1;
	class PylonRack_Missile_AGM_02_x2;
	class PylonMissile_1Rnd_Missile_AA_03_F;
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F;
	class bsc_Orxy_50Rnd_autocannon_30mm_mag: VehicleMagazine
	{
		author = "228th BSC Aux Mod";
		scope = 2;
		displayName = "30mm Autocannon";
		displayNameShort = "HE";
		ammo = "bsc_oryx_autocannon_ammo";
		count = 50;
		initSpeed = 960;
		maxLeadSpeed = 83.3333;
		nameSound = "cannon";
		tracersEvery = 1;
		weight = 126;
		muzzleImpulseFactor[] = {1,4};
	};
	class bsc_300Rnd_orxyMG_Mag: VehicleMagazine
	{
		author = "228th BSC Aux Mod";
		scope = 2;
		displayname = "127x99mm 300rnd";
		displayNameShort = "127x99mm";
		ammo = "BSC_ammo_127x99_blue";
		count = 300;
		initSpeed = 1035;
		maxLeadSpeed = 83.3333;
		nameSound = "mg";
		tracersEvery = 1;
		muzzleImpulseFactor[] = {0,0};
	};
};
class CfgWeapons
{
	class CannonCore;
	class autocannon_Base_F: CannonCore
	{
		class player;
	};
	class mortar_155mm_AMOS: CannonCore{};
	class cannon_120mm: CannonCore
	{
		class player;
	};
	class MGun;
	class GMG_20mm;
	class GMG_F: MGun{};
	class GMG_40mm: GMG_F
	{
		class manual;
	};
	class missiles_DAGR;
	class weapon_AMRAAMLauncher;
	class LMG_RCWS: MGun
	{
		class manual: Mgun{};
		class close: manual{};
		class short: close{};
		class medium: close{};
		class far: close{};
	};
	class LMG_M200: LMG_RCWS{};
	class weapon_GBU12Launcher;
	class weapon_AGM_65Launcher;
	class weapon_BIM9xLauncher;
	class RocketPods;
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		class LowROF;
	};
	class bsc_orxy_MG: MGun
	{
		class GunClouds{};
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",0.2818383,1,10};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",0.2818383,1,10};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",0.2818383,1,10};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",0.2818383,1,10};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",0.2818383,1,10};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",0.2818383,1,10};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",0.2818383,1,10};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",0.2818383,1,10};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",0.2818383,1,10};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",0.2818383,1,10};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",0.2818383,1,10};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",0.2818383,1,10};
		soundBullet[] = {"bullet1",0.08,"bullet2",0.084,"bullet3",0.084,"bullet4",0.084,"bullet5",0.093,"bullet6",0.093,"bullet7",0.074,"bullet8",0.074,"bullet9",0.084,"bullet10",0.085,"bullet11",0.083,"bullet12",0.083};
		class GunParticles{};
		scope = 1;
		displayName = "Orxy MG";
		magazines[] = {"bsc_300Rnd_orxyMG_Mag"};
		magazineReloadTime = 5;
		modes[] = {"manual","close","short","medium","far"};
		canLock = 0;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 0;
		FCSZeroingDelay = 1;
		maxZeroing = 1500;
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 3;
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"3AS_DC15A_Shot_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.105;
			dispersion = 0.0016;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
	class Orxy_autocannon_30mm: LMG_M200
	{
		displayName = "Orxy 30mm Autocannon (HE)";
		muzzles[] = {"HE"};
		magazineReloadTime = 5;
		class GunParticles{};
		class HE: autocannon_Base_F
		{
			displayName = "Orxy 30mm Autocannon (HE)";
			magazines[] = {"bsc_Orxy_50Rnd_autocannon_30mm_mag"};
			magazineReloadTime = 5;
			cursorAim = "mg";
			cursor = "EmptyCursor";
			showAimCursorInternal = 1;
			class player: player
			{
				reloadTime = 0.3;
				dispersion = 0.0018;
				magazineReloadTime = 5;
				sounds[] = {"StandardSound_1"};
				class StandardSound_1
				{
					begin1[] = {"3as\3as_saber\sounds\wpn_saberTank_autocannon_fire",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33};
					soundsetshot[] = {"3AS_lightwalkercanon_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
		};
	};
	class 3AS_HeavyRepeater_W: LMG_RCWS
	{
		displayName = "[3AS] Heavy Repeater";
		scope = 1;
		magazines[] = {"3AS_HeavyRepeater_1000Rnd_mag"};
		maxZeroing = 2000;
		class GunParticles{};
		showAimCursorInternal = 0;
		class manual: MGun
		{
			displayName = "[3AS] Heavy Repeater";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundsetshot[] = {"3AS_Z6_SoundSet"};
			};
			reloadTime = 0.0429;
			dispersion = 0.00052;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 1.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 16;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
	};
	class 3AS_BlasterTurret_Repeater: LMG_RCWS
	{
		displayName = "Republic Personal Turret Repeater";
		class gunParticles{};
		class manual: manual
		{
			soundContinuous = 0;
			soundBurst = 0;
			multiplier = 3;
			dispersion = 0.0115;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			reloadTime = 0.2;
		};
		class close: manual
		{
			soundBurst = 0;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 16;
			aiRateOfFire = 0.4;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.75;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.65;
			midRange = 1000;
			midRangeProbab = 0.3;
			maxRange = 1500;
			maxRangeProbab = 0.05;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_dry",1,1,10};
		magazines[] = {"3AS_500_Rnd_BlasterTurret_mag"};
		};
	};
};
