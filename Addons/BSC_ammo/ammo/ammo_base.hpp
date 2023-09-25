class BSC_ammo_556_base: BSC_plasma_ammo_base
{
	hit=9;
	typicalspeed = 920;
	dangerRadiusBulletClose=8;
	dangerRadiusHit=12;
	suppressionRadiusBulletClose=8;
	dangerRadusHit=12;
	suppressionRadusBulletClose=6;
	suppressionRadusHit=8;
	audiblefire=35;
	waterFriction=-0.30000001;
	caliber = 0.869565;
	tracerScale = 0.5;
	timetolive=5;
	// effectfly="BSC_plasma_effects_blue";
	// ExplosionEffects="BSC_plasma_impact";
	// cratereffects = "BSC_plasma_impact";
	explosive=0;
	ACE_caliber=5.6900001;
	ACE_bulletLength=23.011999;
	ACE_bulletMass=4.0176001;
	ACE_ammoTempMuzzleVelocityShifts[]={-27.200001,-26.440001,-23.76,-21,-17.540001,-13.1,-7.9499998,-1.62,6.2399998,15.48,27.75};
	ACE_ballisticCoefficients[]={0.15099999};
	ACE_velocityBoundaries[]={};
	ACE_standardAtmosphere="ASM";
	ACE_dragModel=7;
	ACE_muzzleVelocities[]={723,764,796,825,843,866,878,892,906,915,922,900};
	ACE_barrelLengths[]={210.82001,238.75999,269.23999,299.72,330.20001,360.67999,391.16,419.10001,449.57999,480.06,508,609.59998};
};
class BSC_ammo_762_base: BSC_plasma_ammo_base
{
	hit = 12;
	//effectfly="BSC_plasma_effects_blue";
	//ExplosionEffects="BSC_plasma_impact";
	//cratereffects = "BSC_plasma_impact";
	explosive=0;
	visibleFire = 5;
	audibleFire = 70;
	dangerRadiusBulletClose = 8;
	dangerRadiusHit = 12;
	suppressionRadiusBulletClose = 6;
	suppressionRadiusHit = 8;
	typicalSpeed = 835;
	tracerScale = 0.5;
	caliber = 1.8;
	ACE_caliber = 7.823;
	ACE_bulletLength = 28.956;
	ACE_bulletMass = 9.4608;
	ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
	ACE_ballisticCoefficients[] = {0.2};
	ACE_velocityBoundaries[] = {};
	ACE_standardAtmosphere = "ICAO";
	ACE_dragModel = 7;
	ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
	ACE_barrelLengths[] = {254, 406.4, 508, 609.6, 660.4};
};
class BSC_ammo_DMR_762_base: BSC_plasma_ammo_base
{
	hit = 12;
	//effectfly="BSC_plasma_effect_plurple";
	//ExplosionEffects="BSC_plasma_impact";
	//cratereffects = "BSC_plasma_impact";
	explosive=0;
	visibleFire = 5;
	audibleFire = 70;
	dangerRadiusBulletClose = 8;
	dangerRadiusHit = 12;
	suppressionRadiusBulletClose = 6;
	suppressionRadiusHit = 8;
	initspeed = 909;
    maxSpeed=900;
	tracerScale = 0.5;
	caliber = 1.8;
	ACE_caliber = 7.823;
	ACE_bulletLength = 28.956;
	ACE_bulletMass = 9.4608;
	ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
	ACE_ballisticCoefficients[] = {0.2};
	ACE_velocityBoundaries[] = {};
	ACE_standardAtmosphere = "ICAO";
	ACE_dragModel = 7;
	ACE_muzzleVelocities[] = {700, 800, 820, 833, 845};
	ACE_barrelLengths[] = {254, 406.4, 508, 609.6, 660.4};
};
class BSC_ammo_127x108_base: BSC_plasma_ammo_base
{
	hit = 45;
	timetolive=10;
	indirectHit = 0;
	indirectHitRange = 0;
	visibleFire = 5;
	dangerRadiusBulletClose = 12;
	dangerRadiusHit = 16;
	suppressionRadiusBulletClose = 8;
	suppressionRadiusHit = 12;
	visibleFireTime = 3;
	tracerScale = .5;
	cost = 5;
	airLock = 1;
	caliber = 2.8;
	typicalSpeed = 820;
	//effectfly="BSC_plasma_effects_blue";
	//ExplosionEffects="BSC_plasma_impact";
	//cratereffects = "BSC_plasma_impact";
	explosive=0;
};
class BSC_ammo_1036x77_base: BSC_plasma_ammo_base
{
	hit = 85;
	timetolive=10;
	indirectHit = 0;
	indirectHitRange = 0;
	visibleFire = 5;
	dangerRadiusBulletClose = 12;
	dangerRadiusHit = 16;
	suppressionRadiusBulletClose = 8;
	suppressionRadiusHit = 12;
	visibleFireTime = 3;
	tracerScale = .5;
	cost = 5;
	airLock = 1;
	caliber = 2.8;
	typicalSpeed = 820;
	//effectfly="BSC_plasma_effects_blue";
	//ExplosionEffects="BSC_plasma_impact";
	//cratereffects = "BSC_plasma_impact";
	explosive=0;
};
class BSC_ammo_127x99_base: BSC_plasma_ammo_base
{
	hit = 30;
	timetolive=7;
	visibleFire = 8;
	audibleFire = 120;
	dangerRadiusBulletClose = 12;
	dangerRadiusHit = 16;
	suppressionRadiusBulletClose = 8;
	suppressionRadiusHit = 12;
	caliber = 2.6;
	typicalSpeed = 880;
	tracerScale = .5;
	ACE_caliber = 12.954;
	ACE_bulletLength = 58.674;
	ACE_bulletMass = 41.9256;
	ACE_muzzleVelocityVariationSD = 0.35;
	ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
	ACE_ballisticCoefficients[] = {0.67};
	ACE_velocityBoundaries[] = {};
	ACE_standardAtmosphere = "ASM";
	ACE_dragModel = 1;
	ACE_muzzleVelocities[] = {900};
	ACE_barrelLengths[] = {736.6};
	//effectfly="BSC_plasma_effects_blue";
	//ExplosionEffects="BSC_plasma_impact";
	//cratereffects = "BSC_plasma_impact";
	explosive=0;
};
class BSC_ammo_shotgun_base: BSC_shotgun_base
{
	hit = 2;
	typicalSpeed = 400;
	caliber = 1;
	deflecting = 30;
	indirectHit = 2;
	indirectHitRange = 0.4;
	//effectfly="BSC_plasma_effects_blue";
	//ExplosionEffects="BSC_plasma_impact";
	//cratereffects = "BSC_plasma_impact";
	explosive=0;
	class CamShakePlayerFire
	{
		power = 1;
		duration = 0.1;
		frequency = 20;
	};
	class CamShakeHit
	{
		power = 10;
		duration = 1;
		frequency = 20;
	};
	class CamShakeFire
	{
		power = 3;
		duration = 0.5;
		frequency = 20;
		distance = 10;
	};
};
class BSC_ammo_40mm_base: GrenadeBase
{
	lightcolor[]={0.25,0.25,0.5};
	flaresize=5;
	tracerscale=1;
	effectflare="FlareShell";
	tracerstarttime=0;
	tracerendtime=10;
	nvgonly=0;
	effectfly="BSC_plasma_effects_blue";
	hit=80;
	indirecthit=8;
	indirecthitrange=6;
	warheadName="HE";
	visibleFire=1;
	audibleFire=30;
	visibleFireTime=3;
	dangerRadiusHit=60;
	suppressionRadiusHit=24;
	deflecting=0;
	airFriction=-0.001;
	fuseDistance=0;
	typicalSpeed=185;
	caliber=2;
	ExplosionEffects="BSC_plasma_he_impact";
	CraterEffects = "BSC_plasma_he_impact";
	whistleDist=28;
	coefgravity=1;
	soundHit1[]=
	{
		"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
		3.1622777,
		1,
		1500
	};
	soundHit2[]=
	{
		"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
		3.1622777,
		1,
		1500
	};
	soundHit3[]=
	{
		"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
		3.1622777,
		1,
		1500
	};
	soundHit4[]=
	{
		"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
		3.1622777,
		1,
		1500
	};
	multiSoundHit[]=
	{
		"soundHit1",
		0.25,
		"soundHit2",
		0.25,
		"soundHit3",
		0.25,
		"soundHit4",
		0.25
	};
	class CamShakeExplode
	{
		power=8;
		duration=1.2;
		frequency=20;
		distance=74.596397;
	};
	class CamShakeHit
	{
		power=20;
		duration=0.40000001;
		frequency=20;
		distance=1;
	};
	class CamShakeFire
	{
		power=0;
		duration=0.2;
		frequency=20;
		distance=0;
	};
	class CamShakePlayerFire
	{
		power=0;
		duration=0.1;
		frequency=20;
		distance=1;
	};
};
class BSC_ammo_127x108_oc_base: GrenadeBase
{
	hit = 800;
	fuseDistance=0;
	audibleFire=30;
	visibleFireTime=3;
	dangerRadiusHit=60;
	suppressionRadiusHit=24;
	indirectHit = 20;
	indirectHitRange = 2;
	tracerScale = 1;
	explosive = 1;
	ExplosionEffects="BSC_plasma_he_impact";
	CraterEffects = "BSC_plasma_he_impact";
	submunitionammo="ammo_Penetrator_Titan_AT";
	lightcolor[]={0.25,0.25,0.5};
	deflecting=0;
	warheadName="HE";
	submunitionInitSpeed=1000;
	submunitionParentSpeedCoef=0;
	submunitionInitialOffset[]={0,0,-0.5};
	soundHit1[]=
	{
		"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",
		3.1622777,
		1,
		1500
	};
	soundHit2[]=
	{
		"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",
		3.1622777,
		1,
		1500
	};
	soundHit3[]=
	{
		"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",
		3.1622777,
		1,
		1500
	};
	soundHit4[]=
	{
		"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",
		3.1622777,
		1,
		1500
	};
	multiSoundHit[]=
	{
		"soundHit1",
		0.25,
		"soundHit2",
		0.25,
		"soundHit3",
		0.25,
		"soundHit4",
		0.25
	};
	class CamShakeExplode
	{
		power=8;
		duration=1.2;
		frequency=20;
		distance=74.596397;
	};
	class CamShakeHit
	{
		power=20;
		duration=0.40000001;
		frequency=20;
		distance=1;
	};
	class CamShakeFire
	{
		power=0;
		duration=0.2;
		frequency=20;
		distance=0;
	};
	class CamShakePlayerFire
	{
		power=0;
		duration=0.1;
		frequency=20;
		distance=1;
	};
};
class BSC_35mm_AA_base: ammo_AAA_Gun35mm_AA
{
    tracerScale = 2;
    tracerStartTime = 0.05;
    tracerEndTime = 2;
    shotDistractionAI = -0.5;
};

class BSC_50mm_he_base: Cannon_30mm_HE_Plane_CAS_02_F
{
    // effectfly="BSC_plasma_effects_blue";
    flaresize=3;
    tracerscale=3;
    hit = 150;
    indirectHit = 10;
    indirectHitRange = 4;
    caliber = 6;
    explosive = 0.65;
    tracerStartTime = 0;
    tracerEndTime = 10;
    allowAgainstInfantry = 1;
};
class BSC_50mm_apfsds_base: Cannon_30mm_HE_Plane_CAS_02_F
{
    // effectfly="BSC_plasma_effects_blue";
    flaresize=3;
    tracerscale=3;
    hit = 240;
    indirectHit = 5;
    indirectHitRange = 0.2;
    caliber = 10;
    explosive = 0;
    tracerStartTime = 0;
    tracerEndTime = 10;
    allowAgainstInfantry = 1;
};

class BSC_75mm_ap_base: Sh_105mm_APFSDS_T_Green
{
    caliber = 18;
    hit = 350;
    // effectfly="BSC_plasma_effect_red";
    flaresize=10;
    tracerscale=2;
};
class BSC_75mm_he_base: Sh_120mm_HE
{
    caliber=6;
    indirectHit=40;
    indirectHitRange=3;
    hit=150;
    explosive=0.89999998;
    // effectfly="BSC_plasma_effect_red";
    flaresize=10;
    tracerscale=2;
};

class BSC_nlaw_AT: MissileBase
{
	model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_at_fly";
	submunitionAmmo = "ammo_Penetrator_Vorona";
	submunitionDirectionType = "SubmunitionModelDirection";
	submunitionInitSpeed = 2000;
	submunitionParentSpeedCoef = 0;
	submunitionInitialOffset[] = {0, 0, -0.2};
	triggerOnImpact = 1;
	deleteParentWhenTriggered = 0;
	hit = 150;
	warheadName = "TandemHEAT";
	indirectHit = 25;
	indirectHitRange = 2;
	explosive = 0.8;
	cost = 500;
	aiAmmoUsageFlags = "64 + 128 + 256 + 512";
	lockType = 1;
	manualControl = 1;
	manualControlOffset = 80;
	missileManualControlCone = 60;
	maxControlRange = 2000;
	weaponLockSystem = 0;
	explosionSoundEffect = "DefaultExplosion";
	effectsMissileInit = "RocketBackEffectsRPG";
	initTime = 0.05;
	trackOversteer = 1;
	trackLead=0.85000002;
	timeToLive = 30;
	maneuvrability = 6;
	simulationStep = 0.002;
	airFriction = 0.06;
	sideAirFriction = 0.09;
	maxSpeed=200;
	thrustTime = 1;
	thrust = 70;
	fuseDistance = 50;
	effectsMissile = "missile2";
	whistleDist = 150;
	class CamShakeExplode
	{
		power = 11;
		duration = 1.4;
		frequency = 20;
		distance = 91.3296;
	};
	class CamShakeHit
	{
		power = 110;
		duration = 0.6;
		frequency = 20;
		distance = 1;
	};
	class CamShakeFire
	{
		power = 0;
		duration = 0.2;
		frequency = 20;
		distance = 0;
	};
	class CamShakePlayerFire
	{
		power = 0;
		duration = 0.1;
		frequency = 20;
		distance = 1;
	};
};
