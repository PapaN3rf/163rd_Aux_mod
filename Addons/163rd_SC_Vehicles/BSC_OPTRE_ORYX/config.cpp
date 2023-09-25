class CfgPatches
{
	class BSC_IFV_Vehicles
	{
		requiredAddons[] = {"BSC_core","bsc_vehicles_weapons"};
		requiredVersion = 0.1;
		weapons[] = {};
		units[] = {"BSC_IFV_base","BSC_IFV_ORYX","BSC_Lady_Titan","BSC_Jungle_Titan","BSC_T228_Titan",};
	};
};
class cfgVehicles
{
	class OPTRE_M494;
	class LandVehicle;

	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class RCWSOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class EventHandlers;
	};
	class APC_Tracked_03_base_F: Tank_F{};
	class I_APC_Tracked_03_base_F: APC_Tracked_03_base_F{};
	class BSC_IFV_base: I_APC_Tracked_03_base_F
	{
		scope = 0;
		scopeCurator = 0;
		scopeArsenal = 0;
		model = "\OPTRE_Vehicles\Oryx\oryx.p3d";
		author = "Article 2 Studios";
		displayName = "(228th BSC) IFV";
		editorSubcategory = "BSC_subcategoryLandcraftCars";
		faction = "BSC_categoryGalacticRepublic";
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		editorPreview = "\OPTRE_Vehicles\Oryx\data\Preview\OPTRE_M494.jpg";
		side = 1;
		canFloat = 1;
		LODDriverTurnedIn = 1100;
		driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";
		ace_hunterkiller = 1;
		lockDetectionSystem = 4;
		incomingMissileDetectionSystem = 4;
		class TransportMagazines{};
		class transportItems
		{
			class ace_fielddressing
			{
				name = "ACE_fieldDressing";
				count = 50;
			};
			class ace_elastic
			{
				name = "ACE_elasticbandage";
				count = 50;
			};
			class ace_quikclot
			{
				name = "ACE_quikclot";
				count = 50;
			};
			class ace_blood
			{
				name = "ACE_bloodIV";
				count = 15;
			};
			class ace_blood250
			{
				name = "ACE_bloodIV_250";
				count = 15;
			};
			class ace_blood500
			{
				name = "ACE_bloodIV_500";
				count = 15;
			};
			class ace_bodybag
			{
				name = "ACE_bodyBag";
				count = 10;
			};
			class ace_epi
			{
				name = "ACE_Epinephrine";
				count = 50;
			};
			class ace_morphine
			{
				name = "ACE_morphine";
				count = 50;
			};
			class ace_packing
			{
				name = "ACE_packingBandage";
				count = 50;
			};
			class ace_pak
			{
				name = "ACE_personalAidKit";
				count = 15;
			};
			class ace_surgical
			{
				name = "ACE_surgicalKit";
				count = 15;
			};
			class ace_tourniquet
			{
				name = "ACE_tourniquet";
				count = 20;
			};
			class ace_splint
			{
				name = "adv_aceSplint_splint";
				count = 20;
			};
			class ace_toolkit
			{
				name = "Toolkit";
				count = 2;
			};
		};
		class TransportWeapons{};
		class RenderTargets
		{
			class GunnerCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "gunnerview";
					pointDirection = "pip_gunner_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.75;
				};
			};
			class CommanderCam
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "commanderview";
					pointDirection = "pip_commander_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.75;
				};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1_pos";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust2
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffect";
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 2.5;
				material = -1;
				name = "telo";
				visual = "hull";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
			class HitERA_Front
			{
				simulation = "Armor_ERA_Light";
				armorComponent = "ERA_F";
				name = "ERA_F_point";
				armor = -100;
				minimalHit = 1;
				radius = 0.3;
				passThrough = 0;
				visual = "-";
				explosionShielding = 2;
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_F_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_1: HitERA_Front
			{
				name = "ERA_L_1_point";
				armorComponent = "ERA_L_1a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_1_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_2: HitERA_Front
			{
				name = "ERA_L_2_point";
				armorComponent = "ERA_L_1b";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_2_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_3: HitERA_Front
			{
				name = "ERA_L_3_point";
				armorComponent = "ERA_L_2a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_3_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_4: HitERA_Front
			{
				name = "ERA_L_4_point";
				armorComponent = "ERA_L_2b";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_4_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Left_5: HitERA_Front
			{
				name = "ERA_L_5_point";
				armorComponent = "ERA_L_3a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_L_4_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_1: HitERA_Front
			{
				name = "ERA_R_1_point";
				armorComponent = "ERA_R_1a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_1_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_2: HitERA_Front
			{
				name = "ERA_R_2_point";
				armorComponent = "ERA_R_1b";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_2_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_3: HitERA_Front
			{
				name = "ERA_R_3_point";
				armorComponent = "ERA_R_2a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_3_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_4: HitERA_Front
			{
				name = "ERA_R_4_point";
				armorComponent = "ERA_R_2b";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_4_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitERA_Right_5: HitERA_Front
			{
				name = "ERA_R_5_point";
				armorComponent = "ERA_R_3a";
				class DestructionEffects
				{
					ammoExplosionEffect = "";
					effectRadius = 1;
					ignoreFuel = 1;
					class Explo
					{
						simulation = "particles";
						type = "MineExplosionParticles";
						position = "era_R_5_pos";
						lifeTime = 0.01;
						interval = 1;
						intensity = 0.01;
					};
					class Smoke: Explo
					{
						type = "ERASmoke";
						lifeTime = 0.05;
					};
					class Sound: Explo
					{
						simulation = "sound";
						type = "ERA_Explosion";
						lifeTime = 1;
					};
				};
			};
			class HitLTrack: HitLTrack
			{
				armor = 2.0;
				material = -1;
				name = "pasL";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.75;
			};
			class HitRTrack: HitRTrack
			{
				armor = 2.0;
				material = -1;
				name = "pasP";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.75;
			};
			class HitEngine: HitEngine
			{
				armor = 2;
				material = -1;
				name = "engine";
				visual = "-";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.4;
				radius = 0.3;
			};
		};
		simulation = "tankX";
		engineMOI = 8;
		enginePower = 522.2;
		peakTorque = 8750;
		maxFordingDepth = 0;
		waterResistance = 0;
		waterDamageEngine = 0.2;
		waterLeakiness = 10;
		torqueCurve[] = {{0.347826,0.735294},{0.434783,0.911765},{0.521739,1},{0.608696,1},{0.695652,0.985294},{0.782609,0.926471},{0.869565,0.823529},{1,0.676471}};
		thrustDelay = 0.5;
		dampingRateFullThrottle = 0.3;
		dampingRateZeroThrottleClutchEngaged = 3;
		dampingRateZeroThrottleClutchDisengaged = 0.25;
		fuelCapacity = 24;
		brakeIdleSpeed = 1.37;
		maxSpeed = 80;
		slowSpeedForwardCoef = 0.3;
		normalSpeedForwardCoef = 0.6;
		minOmega = 63;
		maxOmega = 209.44;
		idleRpm = 500;
		redRpm = 2000;
		engineLosses = 25;
		transmissionLosses = 15;
		antiRollbarForceCoef = 24;
		antiRollbarForceLimit = 53;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 80;
		clutchStrength = 40;
		latency = 1.2;
		switchTime = 0;
		changeGearType = "rpmratio";
		changeGearOmegaRatios[] = {1,0.521739,0.347826,0.478261,0.978261,0.478261,0.956522,0.608696,0.913043,0.652174,1,0.652174};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-1.45,"N",0,"D1",4.16,"D2",2,"D3",1.28,"D4",0.86};
			TransmissionRatios[] = {"High",13.06};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.2;
		};
		tankTurnForce = 350000;
		tankTurnForceAngMinSpd = 0.6;
		tankTurnForceAngSpd = 0.91;
		accelAidForceCoef = 1.5;
		accelAidForceYOffset = -4.0;
		accelAidForceSpd = 3.4;
		class Wheels
		{
			class L2
			{
				side = "left";
				suspTravelDirection[] = {-0.125,-1,0};
				boneName = "wheel_podkoloL1";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				steering = 0;
				width = 0.45;
				mass = 90;
				MOI = 15;
				maxBrakeTorque = 5000;
				maxDroop = 0.18;
				maxCompression = 0.18;
				sprungMass = 2583.33;
				springStrength = 375000;
				springDamperRate = 17000;
				dampingRate = 1764;
				dampingRateInAir = 1764;
				dampingRateDamaged = 10;
				dampingRateDestroyed = 10000;
				latStiffX = 10;
				latStiffY = 30;
				longitudinalStiffnessPerUnitGravity = 13000;
				frictionVsSlipGraph[] = {{0.0,1.5},{0.5,1.5},{1,1.5}};
			};
			class L3: L2
			{
				boneName = "wheel_podkolol2";
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
			};
			class L4: L2
			{
				boneName = "wheel_podkolol3";
				center = "wheel_1_4_axis";
				boundary = "wheel_1_4_bound";
			};
			class L5: L2
			{
				boneName = "wheel_podkolol4";
				center = "wheel_1_5_axis";
				boundary = "wheel_1_5_bound";
			};
			class L6: L2
			{
				boneName = "wheel_podkolol5";
				center = "wheel_1_6_axis";
				boundary = "wheel_1_6_bound";
			};
			class L7: L2
			{
				boneName = "wheel_podkolol6";
				center = "wheel_1_7_axis";
				boundary = "wheel_1_7_bound";
			};
			class L9: L2
			{
				boneName = "wheel_podkolol9";
				center = "wheel_1_9_axis";
				boundary = "wheel_1_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class L1: L2
			{
				boneName = "";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R2: L2
			{
				side = "right";
				suspTravelDirection[] = {0.125,-1,0};
				boneName = "wheel_podkolop1";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
			};
			class R3: R2
			{
				boneName = "wheel_podkolop2";
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
			};
			class R4: R2
			{
				boneName = "wheel_podkolop3";
				center = "wheel_2_4_axis";
				boundary = "wheel_2_4_bound";
			};
			class R5: R2
			{
				boneName = "wheel_podkolop4";
				center = "wheel_2_5_axis";
				boundary = "wheel_2_5_bound";
			};
			class R6: R2
			{
				boneName = "wheel_podkolop5";
				center = "wheel_2_6_axis";
				boundary = "wheel_2_6_bound";
			};
			class R7: R2
			{
				boneName = "wheel_podkolop6";
				center = "wheel_2_7_axis";
				boundary = "wheel_2_7_bound";
			};
			class R9: R2
			{
				boneName = "wheel_podkolop9";
				center = "wheel_2_9_axis";
				boundary = "wheel_2_9_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
			class R1: R2
			{
				boneName = "";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				maxDroop = 0;
				maxCompression = 0;
			};
		};
		armor = 300;
		crew = "Taskforce_Phase1_EOD_trooper";
		damageResistance = 0.02;
		crewVulnerable = 0;
		crewExplosionProtection = 1;
		armorLights = 1.0;
		armorStructural = 4;
		transportSoldier = 6;
		forceHideDriver = 1;
		driverForceOptics = 0;
		viewdriverInExternal = 1;
		getInAction = "GetInMRAP_01";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		cargoAction[] = {"passenger_apc_narrow_generic02","passenger_apc_narrow_generic03","passenger_apc_generic02","passenger_apc_generic04","passenger_apc_narrow_generic01","passenger_generic01_foldhands","passenger_generic01_leanleft","passenger_generic01_leanright"};
		memoryPointMissile[] = {"spice rakety","usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety","konec hlavne"};
		class UserActions
		{
			class CargoDoorOpen
			{
				userActionID = 60;
				displayName = "Open Cargo Door";
				displayNameDefault = "Open Cargo Door";
				textToolTip = "Open Cargo Door";
				position = "cargodoor_axis";
				radius = 6;
				priority = 2;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""CargoDoor"" < 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""CargoDoor"",1]";
				animPeriod = 5;
			};
			class CargoDoorClose: CargoDoorOpen
			{
				userActionID = 61;
				displayName = "Close Cargo Door";
				displayNameDefault = "Close Cargo Door";
				textToolTip = "Close Cargo Door";
				priority = 2;
				condition = "((this animationPhase ""CargoDoor"" > 0.5) AND (alive this) AND (player in [gunner this, driver this]))";
				statement = "this animate [""CargoDoor"",0]";
				animPeriod = 5;
			};
			class Flip
			{
				displayNameDefault = "Press SPACEBAR to Flip Oryx";
				displayName = "Press SPACEBAR to Flip Oryx";
				position = "";
				radius = 6;
				onlyForPlayer = 1;
				condition = "(alive this) AND !(canmove this)";
				statement = "this setposATL [getPosATL this select 0, getPosATL this select 1, (getPosATL this select 2) + 2]; this setVectorUp surfaceNormal getposATL this;";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "obsTurret";
						gun = "obsGun";
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						stabilizedInAxes = 3;
						minElev = -12;
						maxElev = 45;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = {"bsc_orxy_MG","Laserdesignator_mounted"};
						magazines[] = {"bsc_300Rnd_orxyMG_Mag","bsc_300Rnd_orxyMG_Mag","bsc_300Rnd_orxyMG_Mag","bsc_300Rnd_orxyMG_Mag","Laserbatteries"};
						turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;
						memoryPointGunnerOptics = "commanderview";
						memoryPointGunnerOutOptics = "commanderview";
						gunnerForceOptics = 0;
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						gunnerHasFlares = 1;
						class ViewOptics: RCWSOptics
						{
							initAngleX = 0;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.155;
							minFov = 0.034;
							maxFov = 0.155;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {0,1};
							thermalResolution[] = {4096};
						};
						startEngine = 0;
						viewGunnerInExternal = 1;
						LODTurnedIn = 1100;
						LODTurnedOut = 1100;
						selectionFireAnim = "zasleh3";
					};
				};
				memoryPointGun = "usti hlavne2";
				maxVerticalRotSpeed = "90/45";
				maxHorizontalRotSpeed = "90/45";
				weapons[] = {"Orxy_autocannon_30mm","bsc_orxy_MG","SmokeLauncher"};
				magazines[] = {"bsc_Orxy_50Rnd_autocannon_30mm_mag","bsc_Orxy_50Rnd_autocannon_30mm_mag","bsc_300Rnd_orxyMG_Mag","bsc_300Rnd_orxyMG_Mag","SmokeLauncherMag"};
				minElev = -12;
				maxElev = 35;
				initElev = 0;
				soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
				turretInfoType = "RscOptics_APC_Wheeled_01_gunner";
				selectionFireAnim = "zasleh2";
				gun = "maingun";
				body = "mainturret";
				gunAxis = "Osa Hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerGetInAction = "GetInAMV_cargo";
				gunnerGetOutAction = "GetOutLow";
				LODTurnedIn = 1100;
				turretAxis = "OsaVeze";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400};
				discreteDistanceInitIndex = 5;
				memoryPointGunnerOptics = "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				class OpticsIn
				{
					class Wide: ViewOptics
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0};
						thermalResolution[] = {4096};
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Gunner_02_F";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide
					{
						initFov = 0.07;
						minFov = 0.07;
						maxFov = 0.07;
					};
					class Narrow: Wide
					{
						initFov = 0.028;
						minFov = 0.028;
						maxFov = 0.028;
					};
				};
				castGunnerShadow = 0;
				stabilizedInAxes = 3;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				gunnerForceOptics = 0;
				usePip = 1;
			};
		};
		class AnimationSources
		{
			class muzzle_hide
			{
				source = "reload";
				weapon = "OPTRE_M503_30mm_Autocannon";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "OPTRE_M670_ATGM_Launcher";
			};
			class Missiles_reloadMagazine: Missiles_revolving
			{
				source = "reloadMagazine";
			};
			class CargoDoorAnim
			{
				source = "user";
				animPeriod = 5;
				initPhase = 0;
				sound = "ServoRampSound_2";
			};
			class HitERA_Front_src
			{
				source = "Hit";
				hitpoint = "HitERA_Front";
				raw = 1;
			};
			class HitERA_Left_1_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_1";
				raw = 1;
			};
			class HitERA_Right_1_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_1";
				raw = 1;
			};
			class HitERA_Left_2_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_2";
				raw = 1;
			};
			class HitERA_Right_2_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_2";
				raw = 1;
			};
			class HitERA_Left_3_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_3";
				raw = 1;
			};
			class HitERA_Right_3_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_3";
				raw = 1;
			};
			class HitERA_Left_4_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_4";
				raw = 1;
			};
			class HitERA_Right_4_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_4";
				raw = 1;
			};
			class HitERA_Left_5_src
			{
				source = "Hit";
				hitpoint = "HitERA_Left_5";
				raw = 1;
			};
			class HitERA_Right_5_src
			{
				source = "Hit";
				hitpoint = "HitERA_Right_5";
				raw = 1;
			};
			class showCamonetHull
			{
				displayName = "Attach Hull Camo Net";
				author = "Article 2 Studios";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				forceAnimatePhase = 1;
				forceAnimate[] = {"showBags",1};
				mass = -50;
			};
			class showCamonetTurret
			{
				displayName = "Attach Turret Camo Net";
				author = "Article 2 Studios";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				forceAnimatePhase = 1;
				forceAnimate[] = {"showBagsTurret",1};
				mass = -50;
			};
			class showCamonetgun
			{
				displayName = "Attach Gun Camo Net";
				author = "Article 2 Studios";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showBags
			{
				displayName = "Attach Backpacks";
				author = "Article 2 Studios";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showBagsTurret
			{
				displayName = "Attach Turret Backpacks";
				author = "Article 2 Studios";
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
				mass = -50;
			};
			class showera
			{
				displayName = "Attach Explosive Reactive Armor";
				author = "Article 2 Studios";
				source = "user";
				animPeriod = 0.001;
				initPhase = 1;
				mass = 600;
			};
		};
		animationList[] = {"showCamonetHull",0,"showCamonetgun",0,"showCamonetTurret",0,"showBags",0,"showBagsTurret",0,"showera",0};
		class EventHandlers: EventHandlers
		{
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				hitpoint = "Light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				hitpoint = "Light_L_flare";
				useFlare = 1;
			};
			class LightCarRearL01: Left
			{
				color[] = {200,0,0};
				direction = "rearlight_l_end";
				position = "rearlight_l_flare";
				selection = "rearlight_l";
				hitpoint = "rearlight_l";
				flareSize = 0.8;
				useFlare = 1;
				intensity = 2;
				class Attenuation
				{
					constant = 0;
					hardLimitEnd = 0;
					hardLimitStart = 0;
					linear = 0;
					quadratic = 0;
					start = 0;
				};
			};
			class LightCarRearR01: LightCarRearL01
			{
				direction = "rearlight_r_end";
				position = "rearlight_r_flare";
				selection = "rearlight_r";
				hitpoint = "rearlight_r";
			};
		};
		aggregateReflectors[] = {{"Left","Left2","Right","Right2","LightCarRearL01","LightCarRearR01"}};
		class TextureSources
		{
			class Base
			{
				displayName = "[228th] Standard IFV";
				author = "228th BSC Aux Mod";
				textures[] = {"BSC_Vehicles\BSC_OPTRE_ORYX\data\IFV_Shit_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_main_non_camo_co.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_turret_non_camo_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_scorpion_non_camo_co.paa","\BSC_Vehicles\BSC_OPTRE_ORYX\data\.paa"};
				factions[] = {"BSC_categoryGalacticRepublic"};
			};
		};
		textureList[] = {"base",0};
	};
	class BSC_IFV_ORYX: BSC_IFV_base
	{
		author = "228th BSC Aux Mod";
		scope = 2;
		scopecurator = 2;
		editorPreview = "\OPTRE_Vehicles\Oryx\data\Preview\OPTRE_M494.jpg";
	};
	class BSC_Lady_Titan: BSC_IFV_ORYX
	{
		displayName = "[228th] Lucky lady IFV";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "BSC_subcategoryLandcraftCars";
		faction = "BSC_categoryGalacticRepublic";
		crew = "Taskforce_Phase1_EOD_trooper";
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = {"BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_armor_non_camo_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_main_non_camo_co.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_turret_non_camo_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_scorpion_non_camo_co.paa","\BSC_Vehicles\BSC_OPTRE_ORYX\data\.paa"};
		class TextureSources
		{
			class Base
			{
				displayName = "[228th] Lucky lady IFV";
				author = "228th BSC Aux Mod";
				textures[] = {"BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_armor_non_camo_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_main_non_camo_co.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_turret_non_camo_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_scorpion_non_camo_co.paa","\BSC_Vehicles\BSC_OPTRE_ORYX\data\.paa"};
				factions[] = {"BSC_categoryGalacticRepublic"};
			};
		};
		textureList[] = {"base",0};
	};
	class BSC_Jungle_Titan: BSC_Lady_Titan
	{
		displayName = "[228th] Jungle Titan IFV";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "BSC_subcategoryLandcraftCars";
		faction = "BSC_categoryGalacticRepublic";
		crew = "Taskforce_Phase1_EOD_trooper";
		textureList[] = {"228th_BSC_Jungle_IFV",1};
		hiddenSelectionsTextures[] = {"BSC_Vehicles\BSC_OPTRE_ORYX\data\Camo_Textures\228th_Jungle_armor_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\Camo_Textures\228th_Jungle_main_co.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\Camo_Textures\228th_Jungle_turret_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\Camo_Textures\228th_Jungle_scorpion_co.paa","\BSC_Vehicles\BSC_OPTRE_ORYX\data\.paa"};
		class textureSources
		{
			class 228th_BSC_Jungle_IFV
			{
				displayName = "[228th] Jungle Titan IFV";
				author = "228th BSC Aux Mod";
				textures[] = {"BSC_Vehicles\BSC_OPTRE_ORYX\data\Camo_Textures\228th_Jungle_armor_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\Camo_Textures\228th_Jungle_main_co.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\Camo_Textures\228th_Jungle_turret_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\Camo_Textures\228th_Jungle_scorpion_co.paa","\BSC_Vehicles\BSC_OPTRE_ORYX\data\.paa"};
			};
		};
	};
	class BSC_T228_Titan: BSC_IFV_ORYX
	{
		displayName = "[228th] Titan IFV";
		scope = 2;
		scopeCurator = 2;
		editorSubcategory = "BSC_subcategoryLandcraftCars";
		faction = "BSC_categoryGalacticRepublic";
		crew = "Taskforce_Phase1_EOD_trooper";
		textureList[] = {"228th_BSC_Titan_IFV",1};
		hiddenSelectionsTextures[] = {"BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_armor_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_main_co.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_turret_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\scorpion_mg_co.paa","\BSC_Vehicles\BSC_OPTRE_ORYX\data\.paa"};
		class textureSources
		{
			class 228th_BSC_Titan_IFV
			{
				displayName = "[228th] Titan IFV";
				author = "228th BSC Aux Mod";
				textures[] = {"BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_armor_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_main_co.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\228th_turret_co.paa","BSC_Vehicles\BSC_OPTRE_ORYX\data\scorpion_mg_co.paa","\BSC_Vehicles\BSC_OPTRE_ORYX\data\.paa"};
			};
		};
	};
};