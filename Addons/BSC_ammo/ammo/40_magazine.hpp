class bsc_40_50rnd_he_blue_mag: BSC_mag_base
{
    scope = 1;
    displayname = "40mm HE Plasma Cell (50rnd Blue)";
    ammo = "442_ammo_40mm_blue";
    mass = 0;
    displaynamemagazine = "40mm GL HE";
    shortnamemagazine = "40mm HE";
    count = 50;
    initspeed = 400;
	maxLeadSpeed = 25;
	nameSound = "";
	descriptionShort = "40mm HE";
	muzzleImpulseFactor[] = {0.1,0.1};
    picture="\kobra\442_weapons\ammo\data\ui\DC15a_mag_ui_ca.paa";
    displayNameShort="50rnd";
};
class bsc_40_6rnd_he_blue_mag: bsc_40_50rnd_he_blue_mag
{
    scope= 2;
    displayname = "40mm He Plasma Cell (6rnd Blue)";
    mass = 30;
    count = 6;
    displayNameShort="6nd";
};

class bsc_40_50rnd_he_green_mag: bsc_40_50rnd_he_blue_mag
{
    displayname = "40mm HE Plasma Cell (50rnd Green)";
    ammo = "bsc_ammo_40mm_green";
};
class bsc_40_6rnd_he_green_mag: bsc_40_6rnd_he_blue_mag
{
    displayname = "40mm HE Plasma Cell (6rnd Green)";
    ammo = "bsc_ammo_40mm_green";
};
class bsc_40_50rnd_he_red_mag: bsc_40_50rnd_he_blue_mag
{
    displayname = "40mm HE Plasma Cell (50rnd Red)";
    ammo = "bsc_ammo_40mm_red";
};
class bsc_40_6rnd_he_red_mag: bsc_40_6rnd_he_blue_mag
{
    displayname = "40mm HE Plasma Cell (6rnd Red)";
    ammo = "bsc_ammo_40mm_red";
};
class bsc_40_50rnd_he_purple_mag: bsc_40_50rnd_he_blue_mag
{
    displayname = "40mm HE Plasma Cell (50rnd Purple)";
    ammo = "bsc_ammo_40mm_purple";
};
class bsc_40_6rnd_he_purple_mag: bsc_40_6rnd_he_blue_mag
{
    displayname = "40mm HE Plasma Cell (6rnd Purple)";
    ammo = "bsc_ammo_40mm_purple";
};