class CfgPatches
{
	class BSC_ammo_weapons
	{
		author[] = {"228th BSC Aux Mod"};
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		
	};
};
class CfgCloudlets
{
	class Default;
	class BSC_impact_spark_plasma_base: default
	{
		interval=0.00089999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=2.5;
		// moveVelocity[]=
		// {
			// "(- inDirX * 2 + surfNormalX / 2) * inSpeed / 200",
			// "( - inDirY * 2 + surfNormalY / 2) * inSpeed / 200",
			// "( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 200"
		// };
		moveVelocity[]=
		{
			0,
			1,
			0
		};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=0.30000001;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,6,4,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=5;
		position[]={0,0,0};
		positionVar[]={0.0099999998,0.0099999998,0.0099999998};
		// moveVelocityVar[]={1,3,1};
		moveVelocityVar[]={1,1,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BSC_impact_spark2_plasma_base: default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.039000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.44999999,0.22499999,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BSC_impact_spark3_plasma_base: default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.039000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.44999999,0.22499999,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class BSC_impact_spark4_plasma_base: default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.039000001;
		moveVelocity[]={0,0,0};
		rotationVelocity=1;
		weight=1.275;
		volume=1;
		rubbing=0;
		size[]={0.44999999,0.22499999,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		lifeTimeVar=0.02;
		position[]={0,0,0};
		positionVar[]={0,0,0};
		moveVelocityVar[]={0,0,0};
		rotationVelocityVar=0;
		sizeVar=0.029999999;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
};
class CfgLights
{
	class Default;
	class BSC_plasma_ammo_blue
{
	diffuse[] = {7,90,186,1};	// Array of RGBA. Purpose unknown
	ambient[] = {0,0,0,0.5};	// Array of RGBA
	intensity = 650;				// Finite number between 0 and 1e10
	brightness = 10;			// Only used if intensity isn't set. Also deprecated. intensity = (brightness*50)^2
	class Attenuation
	{
		start = 0;				// distance with 100% intensity, falloff starts here
		constant = 0;			// constant attenuation coef
		linear = 0;				// linear attenuation coef
		quadratic = 255;			// quadratic attenuation coef
		hardLimitStart = "1e20 * 0.7"; // max distance hard limit start (start of fading of intensity to 0) in meter � default is (1e20 * 0.7)
		hardLimitEnd = 1e+20;	// max distance hard limit end (end of fading of intensity to 0) in meter � default is 1e20
	};
	dayLight = 1;			// boolean (0/1). Is light shown during daylight.
	useFlare = 1;			// boolean (0/1). Is light having a flare effect
	irLight = 1;			// boolean (0/1). Is light visible normally or only with NVGs
	flareSize = 1;			// Default is 1
	flareMaxDistance = 600;	// Default is 600
	position[]={0,3.5,0};	// Position. Purpose unkown. Maybe some offset from the source.
	shape = "";				// String. Purpose unknown.
};
	class BSC_plasma_ammo_red: BSC_plasma_ammo_blue
	{
		color[]={1,0,0,1};
		ambient[]={1,0,0,1};
		diffuse[]={1,0,0};
	};
	class BSC_plasma_ammo_green: BSC_plasma_ammo_blue
	{
		color[]={0,1,0,1};
		ambient[]={0,1,0,1};
		diffuse[]={0,1,0};
	};
	class BSC_plasma_ammo_purple: BSC_plasma_ammo_blue
	{
		color[]={0.5,0,1,1};
		ambient[]={0.5,0,1,1};
		diffuse[]={0.5,0,1};
	};
	class BSC_plasma_ammo_Black: BSC_plasma_ammo_blue
	{
		color[]={1,1,1,1};
		ambient[]={1,1,1,1};
		diffuse[]={1,1,1};
	};
};		
class BSC_plasma_effects_blue
{
	class Light
	{
		simulation = "light";
		type = "BSC_plasma_ammo_blue";
		position[] = {0,0,0};
	};
};
class BSC_plasma_effect_red
{
	class red_plasma
	{
		simulation="light";
		type="BSC_plasma_ammo_red";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class BSC_plasma_effect_green
{
	class green_plasma
	{
		simulation="light";
		type="BSC_plasma_ammo_green";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class BSC_plasma_effect_plurple
{
	class plurple_plasma
	{
		simulation="light";
		type="BSC_plasma_ammo_plurple";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class BSC_plasma_effect_black
{
	class black_plasma
	{
		simulation="light";
		type="BSC_plasma_ammo_Black";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
};
class BSC_plasma_impact
{
	class SparksLight
	{
		simulation="light";
		type="BSC_impact_spark_plasma_base";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="BSC_impact_spark_plasma_base";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	// class ImpactSparks2
	// {
		// simulation="particles";
		// type="BSC_impact_spark2_plasma_base";
		// position[]={0,0,0};
		// intensity=1;
		// interval=1;
		// lifeTime=0.2;
	// };
	// class ImpactSparks3
	// {
		// simulation="particles";
		// type="BSC_impact_spark3_plasma_base";
		// position[]={0,0,0};
		// intensity=1;
		// interval=1;
		// lifeTime=0.2;
	// };
	// class ImpactSparks4
	// {
		// simulation="particles";
		// type="BSC_impact_spark4_plasma_base";
		// position[]={0,0,0};
		// intensity=1;
		// interval=1;
		// lifeTime=0.2;
	// };
};
class BSC_plasma_he_impact
{
	class SparksLight
	{
		simulation="light";
		type="BSC_impact_spark_plasma_base";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class ImpactSparks1
	{
		simulation="particles";
		type="BSC_impact_spark_plasma_base";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks2
	{
		simulation="particles";
		type="BSC_impact_spark2_plasma_base";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks3
	{
		simulation="particles";
		type="BSC_impact_spark3_plasma_base";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class ImpactSparks4
	{
		simulation="particles";
		type="BSC_impact_spark4_plasma_base";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class grenadeExp1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
		position[] = {0,0,0};
		simulation = "particles";
		type = "GrenadeExp";
	};
	class grenadeSmoke1
	{
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		position[] = {0,0,0};
		simulation = "particles";
		type = "GrenadeSmoke1";
	};
};
class BSC_plasma_crater_small
{
	class ExploAmmoStones
	{
		simulation = "particles";
		type = "DirtSmall";
		position[] = {0,0,0};
		intensity = 0.3;
		interval = 0;
		lifeTime = 0.5;
	};
	class CircleDust
	{
		simulation = "particles";
		type = "CircleDustSmall";
		position[] = {0,0,0};
		intensity = 0;
		interval = 0;
		lifeTime = 0;
	};
};
class cfgammo
{
	class BulletCore;
	class GrenadeBase;
	class G_40mm_HEDP;
	class Cannon_30mm_HE_Plane_CAS_02_F;
	class Sh_105mm_APFSDS_T_Green;
	class Sh_120mm_HE;
	class ammo_AAA_Gun35mm_AA;
	class G_40mm_HE;
	class MissileBase;
	class grenadehand;
	class MRAWS_HEAT_F;
	class BulletBase: BulletCore
	{
		class SuperSonicCrack;
	};
	class BSC_plasma_ammo_base: BulletBase
	{
		author="228th Auxiliary Assets";
		model="\BSC_ammo\effects\Blue_trace.p3d";
		cartridge="";
		flaresize=5;
		tracerscale=1.1;
		tracerStartTime=0;
		timetolive=5;
		tracerEndTime=10;
		initTime=0;
		nvgonly=0;
		typicalSpeed=60;
		visibleFire=5;
		audibleFire=20;
		explosive=0.1;
		dangerRadiusBulletClose=4;
		dangerRadiusHit=-1;
		visibleFireTime=4;
		airLock=0;
		irtarget=1;
		effectflare="FlareShell";
		explosionEffects="BSC_impact_flash_small";
		craterEffects="BSC_plasma_crater_small";
		effectfly="BSC_plasma_ammo_effects_blue";
		muzzleEffect="";
		brightness=1000;
		airFriction=-0.00030000001;
		coefgravity=0;
		gravityFactor=0;
		deflecting=0;
		bulletFly1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_1",2.2387211,1,100};
		bulletFly2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_2",2.2387211,1,100};
		bulletFly3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_3",2.2387211,1,100};
		bulletFly4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_4",2.2387211,1,100};
		bulletFly5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_flyby\plasma_flyby_5",2.2387211,1,100};
		bulletFly[] = {"bulletFly1",0.2,"bulletFly2",0.2,"bulletFly3",0.2,"bulletFly4",0.2,"bulletFly5",0.2};
		hitArmor[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitArmorInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		soundHitBody1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_1",2,1,75};
		soundHitBody2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_2",2,1,75};
		soundHitBody3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_3",2,1,75};
		soundHitBody4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_4",2,1,75};
		soundHitBody5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_5",2,1,75};
		soundHitBody6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_6",2,1,75};
		soundHitBody7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_7",2,1,75};
		soundHitBody8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_8",2,1,75};
		soundHitBody9[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_9",2,1,75};
		soundHitBody10[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\body\body_10",2,1,75};
		hitMan[] = {"soundHitBody1",0.1,"soundHitBody2",0.1,"soundHitBody3",0.1,"soundHitBody4",0.1,"soundHitBody5",0.1,"soundHitBody6",0.1,"soundHitBody7",0.1,"soundHitBody8",0.1,"soundHitBody9",0.1,"soundHitBody10",0.1};
		hitBuilding[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		soundDefault1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_1",2,1,75};
		soundDefault2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_2",2,1,75};
		soundDefault3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_3",2,1,75};
		soundDefault4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_4",2,1,75};
		soundDefault5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_5",2,1,75};
		soundDefault6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_6",2,1,75};
		soundDefault7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_7",2,1,75};
		soundDefault8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\default\default_8",2,1,75};
		hitDefault[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		soundHit1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_1",2,1,75};
		soundHit2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_2",2,1,75};
		soundHit3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_3",2,1,75};
		soundHit4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_4",2,1,75};
		soundHit5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\dirt\dirt_5",2,1,75};
		hitGround[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundHard[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitGroundSoft[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		hitFoliage[] = {"soundHitBody1",0.1,"soundHitBody2",0.1,"soundHitBody3",0.1,"soundHitBody4",0.1,"soundHitBody5",0.1,"soundHitBody6",0.1,"soundHitBody7",0.1,"soundHitBody8",0.1,"soundHitBody9",0.1,"soundHitBody10",0.1};
		hitIron[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		soundMetal1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_1",2,1,75};
		soundMetal2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_2",2,1,75};
		soundMetal3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_3",2,1,75};
		soundMetal4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_4",2,1,75};
		soundMetal5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_5",2,1,75};
		soundMetal6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_6",2,1,75};
		soundMetal7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_7",2,1,75};
		soundMetal8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_8",2,1,75};
		soundMetal9[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_9",2,1,75};
		soundMetal10[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\metal\metal_10",2,1,75};
		hitMetal[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalInt[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitMetalPlate[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.1,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.1,"soundMetal8",0.1,"soundMetal9",0.1,"soundMetal10",0.1};
		hitPlastic[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		hitRubber[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		soundConcrete1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_1",2,1,75};
		soundConcrete2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_2",2,1,75};
		soundConcrete3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_3",2,1,75};
		soundConcrete4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_4",2,1,75};
		soundConcrete5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_5",2,1,75};
		soundConcrete6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_6",2,1,75};
		soundConcrete7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_7",2,1,75};
		soundConcrete8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\stone\stone_8",2,1,75};
		hitConcrete[] = {"soundConcrete1",0.125,"soundConcrete2",0.125,"soundConcrete3",0.125,"soundConcrete4",0.125,"soundConcrete5",0.125,"soundConcrete6",0.125,"soundConcrete7",0.125,"soundConcrete8",0.125};
		hitTyre[] = {"soundDefault1",0.125,"soundDefault2",0.125,"soundDefault3",0.125,"soundDefault4",0.125,"soundDefault5",0.125,"soundDefault6",0.125,"soundDefault7",0.125,"soundDefault8",0.125};
		soundWater1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\water\water_1",2,1,75};
		soundWater2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\water\water_2",2,1,75};
		soundWater3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\water\water_3",2,1,75};
		hitWater[] = {"soundWater1",0.33,"soundWater2",0.33,"soundWater3",0.33};
		soundWood1[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_1",2,1,75};
		soundWood2[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_2",2,1,75};
		soundWood3[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_3",2,1,75};
		soundWood4[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_4",2,1,75};
		soundWood5[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_5",2,1,75};
		soundWood6[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_6",2,1,75};
		soundWood7[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_7",2,1,75};
		soundWood8[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_8",2,1,75};
		soundWood9[] = {"MRC\JLTS\weapons\Core\sounds\plasma_hit\wood\wood_9",2,1,75};
		hitWood[] = {"soundWood1",0.11,"soundWood2",0.11,"soundWood3",0.11,"soundWood4",0.11,"soundWood5",0.11,"soundWood6",0.11,"soundWood7",0.11,"soundWood8",0.11,"soundWood9",0.11};
		supersoniccracknear[] = {};
		supersoniccrackfar[] = {};
		soundSetSonicCrack[] = {};
		soundSetBulletFly[] = {"JLTS_plasma_bullet_flyby_soundSet"};
	class HitEffects
		{
			default_mat = "BSC_plasma_impact";
			Hit_Foliage_Banana = "BSC_plasma_impact";
			Hit_Foliage_Dead = "BSC_plasma_impact";
			Hit_Foliage_green = "BSC_plasma_impact";
			Hit_Foliage_Green_big = "BSC_plasma_impact";
			Hit_Foliage_Palm = "BSC_plasma_impact";
			Hit_Foliage_Pine = "BSC_plasma_impact";
			hitBuilding = "BSC_plasma_impact";
			hitConcrete = "BSC_plasma_impact";
			hitFoliage = "BSC_plasma_impact";
			hitGlass = "BSC_plasma_impact";
			hitGlassArmored = "BSC_plasma_impact";
			hitGroundHard = "BSC_plasma_impact";
			hitGroundRed = "BSC_plasma_impact";
			hitGroundSoft = "BSC_plasma_impact";
			hitHay = "BSC_plasma_impact";
			hitMan = "BSC_plasma_impact";
			hitMetal = "BSC_plasma_impact";
			hitMetalPlate = "BSC_plasma_impact";
			hitPlastic = "BSC_plasma_impact";
			hitRubber = "BSC_plasma_impact";
			hitTyre = "BSC_plasma_impact";
			hitVirtual = "BSC_plasma_impact";
			hitWater = "BSC_plasma_impact";
			hitWood = "BSC_plasma_impact";
		};
	};
	class ShotgunBase;
	class BSC_shotgun_base: ShotgunBase
	{
		effectfly="BSC_plasma_blue";
		simulation = "shotSpread";
		model="BSC_ammo\effects\blue_trace.p3d";
		lightcolor[]={0.25,0.25,0.5};
		flaresize=5;
		tracerscale=1.1;
		effectflare="FlareShell";
		tracerstarttime=0;
		tracerendtime=10;
		airfriction=0;
		waterFriction=0;
		coefgravity=0;
		class HitEffects
		{
			default_mat = "BSC_plasma_impact";
			Hit_Foliage_Banana = "BSC_plasma_impact";
			Hit_Foliage_Dead = "BSC_plasma_impact";
			Hit_Foliage_green = "BSC_plasma_impact";
			Hit_Foliage_Green_big = "BSC_plasma_impact";
			Hit_Foliage_Palm = "BSC_plasma_impact";
			Hit_Foliage_Pine = "BSC_plasma_impact";
			hitBuilding = "BSC_plasma_impact";
			hitConcrete = "BSC_plasma_impact";
			hitFoliage = "BSC_plasma_impact";
			hitGlass = "BSC_plasma_impact";
			hitGlassArmored = "BSC_plasma_impact";
			hitGroundHard = "BSC_plasma_impact";
			hitGroundRed = "BSC_plasma_impact";
			hitGroundSoft = "BSC_plasma_impact";
			hitHay = "BSC_plasma_impact";
			hitMan = "BSC_plasma_impact";
			hitMetal = "BSC_plasma_impact";
			hitMetalPlate = "BSC_plasma_impact";
			hitPlastic = "BSC_plasma_impact";
			hitRubber = "BSC_plasma_impact";
			hitTyre = "BSC_plasma_impact";
			hitVirtual = "BSC_plasma_impact";
			hitWater = "BSC_plasma_impact";
			hitWood = "BSC_plasma_impact";
		};
	};
	#include "ammo_base.hpp"
	#include "ammo_color.hpp"
};

class cfgmagazines
{
	class 3Rnd_HE_Grenade_shell;
	class VehicleMagazine;
	class ACE_HuntIR_M203;
	class UGL_FlareWhite_F;
	class UGL_FlareRed_F;
	class UGL_FlareGreen_F;
	class 1Rnd_Smoke_Grenade_shell;
	class 1Rnd_SmokeRed_Grenade_shell;
	class 1Rnd_SmokePurple_Grenade_shell;
	class 1Rnd_SmokeBlue_Grenade_shell;
	class 1Rnd_SmokeGreen_Grenade_shell;
	class Default;
	class HandGrenade;
	
	class CA_Magazine: Default
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		value=1;
		displayName="";
		model="\A3\weapons_F\ammo\mag_univ.p3d";
		picture="";
		modelSpecial="";
		useAction=0;
		useActionTitle="";
		reloadAction="";
		ammo="";
		count=30;
		type=256;
		initSpeed=900;
		selectionFireAnim="zasleh";
		nameSound="magazine";
		maxLeadSpeed=23;
		weaponpoolavailable=1;
		mass=8;
	};
	class BSC_mag_base: CA_Magazine
	{
		author="228th Auxiliary Assets";
		scope=1;
		displayname="all round base";
		initspeed=900;
		nameSound="magazine";
		maxLeadSpeed=25;
		mass=8;
		reloadaction="";
		useactiontitle="";
		modelspecial="";
		tracersevery=1;
		picture = "\MRC\JLTS\weapons\DC15A\data\ui\DC15A_mag_ui_ca.paa";
		type=256;
	};
	#include "556_magazine.hpp"
	#include "762_magazine.hpp"
	#include "762_dmr_magazine.hpp"
	#include "127x108_magazine.hpp"
	#include "127x99_magazine.hpp"
	#include "50_magazine.hpp"
	#include "1036x77_magazine.hpp"
	#include "shotgun_magazine.hpp"
};