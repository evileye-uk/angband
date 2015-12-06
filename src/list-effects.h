/**
 * \file list-effects.h
 * \brief List of effects
 *
 * name: effect code
 * aim: does the effect require aiming?
 * info: info label for spells
 * args: how many arguments the description takes
 * info flags: flags for object description
 * description: text of description
 */
/* name 							aim		info		args	info flags		description */
EFFECT(RANDOM,						FALSE,	NULL,		0,		EFINFO_NONE,	"randomly ")
EFFECT(DAMAGE,						FALSE,	NULL,		0,		EFINFO_NONE,	"damages the player")
EFFECT(HEAL_HP,						FALSE,	"heal",		2,		EFINFO_HEAL,	"heals %s hitpoints%s")
EFFECT(MON_HEAL_HP,					FALSE,	NULL,		2,		EFINFO_NONE,	"heals monster hitpoints")
EFFECT(NOURISH,						FALSE,	NULL,		1,		EFINFO_CONST,	"feeds you for %d turns")
EFFECT(CRUNCH,						FALSE,	NULL,		0,		EFINFO_NONE,	"crunches")
EFFECT(CURE,						FALSE,	NULL,		2,		EFINFO_CURE,	"cures %s")
EFFECT(TIMED_SET,					FALSE,	NULL,		2,		EFINFO_TIMED,	"administers %s for %s turns")
EFFECT(TIMED_INC,					FALSE,	"dur",		2,		EFINFO_TIMED,	"extends %s for %s turns")
EFFECT(TIMED_INC_NO_RES,			FALSE,	"dur",		2,		EFINFO_TIMED,	"extends %s for %s turns (unresistable)")
EFFECT(MON_TIMED_INC,				FALSE,	NULL,		2,		EFINFO_TIMED,	"increases monster %s by %s turns")
EFFECT(TIMED_DEC,					FALSE,	NULL,		2,		EFINFO_TIMED,	"reduces length of %s by %s turns")
EFFECT(SET_NOURISH,					FALSE,	NULL,		1,		EFINFO_CONST,	"leaves you nourished for %d turns")
EFFECT(CONFUSING,					FALSE,	NULL,		0,		EFINFO_NONE,	"causes your next attack upon a monster to confuse it")
EFFECT(RUNE,						FALSE,	NULL,		0,		EFINFO_NONE,	"inscribes a glyph of warding beneath you, which monsters cannot move onto")
EFFECT(RESTORE_STAT,				FALSE,	NULL,		2,		EFINFO_STAT,	"restores your %s")
EFFECT(DRAIN_STAT,					FALSE,	NULL,		2,		EFINFO_STAT,	"reduces your %s")
EFFECT(LOSE_RANDOM_STAT,			FALSE,	NULL,		2,		EFINFO_STAT,	"reduces a stat other than %s")
EFFECT(GAIN_STAT,					FALSE,	NULL,		2,		EFINFO_STAT,	"increases your %s")
EFFECT(RESTORE_EXP,					FALSE,	NULL,		0,		EFINFO_NONE,	"restores your experience")
EFFECT(GAIN_EXP,					FALSE,	NULL,		1,		EFINFO_CONST,	"grants %d experience points")
EFFECT(LOSE_EXP,					FALSE,	NULL,		0,		EFINFO_NONE,	"loses a quarter of your experience")
EFFECT(DRAIN_MANA,					FALSE,	NULL,		0,		EFINFO_NONE,	"drains some mana")
EFFECT(RESTORE_MANA,				FALSE,	NULL,		0,		EFINFO_NONE,	"restores some mana")
EFFECT(REMOVE_CURSE,				FALSE,	NULL,		0,		EFINFO_NONE,	"removes curses")
EFFECT(REMOVE_ALL_CURSE,			FALSE,	NULL,		0,		EFINFO_NONE,	"removes all curses")
EFFECT(RECALL,						FALSE,	NULL,		0,		EFINFO_NONE,	"returns you from the dungeon or takes you to the dungeon after a short delay")
EFFECT(DEEP_DESCENT,				FALSE,	NULL,		0,		EFINFO_NONE,	"teleports you up to five dungeon levels lower than the lowest point you have reached so far")
EFFECT(ALTER_REALITY,				FALSE,	NULL,		0,		EFINFO_NONE,	"creates a new dungeon level")
EFFECT(MAP_AREA,					FALSE,	NULL,		0,		EFINFO_NONE,	"maps the area around you")
EFFECT(DETECT_TRAPS,				FALSE,	NULL,		0,		EFINFO_NONE,	"detects traps nearby")
EFFECT(DETECT_DOORS,				FALSE,	NULL,		0,		EFINFO_NONE,	"detects doors nearby")
EFFECT(DETECT_STAIRS,				FALSE,	NULL,		0,		EFINFO_NONE,	"detects stairs nearby")
EFFECT(DETECT_GOLD,					FALSE,	NULL,		0,		EFINFO_NONE,	"detects gold nearby")
EFFECT(SENSE_OBJECTS,				FALSE,	NULL,		0,		EFINFO_NONE,	"senses objects nearby")
EFFECT(DETECT_OBJECTS,				FALSE,	NULL,		0,		EFINFO_NONE,	"detects objects nearby")
EFFECT(DETECT_VISIBLE_MONSTERS,		FALSE,	NULL,		0,		EFINFO_NONE,	"detects visible creatures nearby")
EFFECT(DETECT_INVISIBLE_MONSTERS,	FALSE,	NULL,		0,		EFINFO_NONE,	"detects invisible creatures nearby")
EFFECT(DETECT_EVIL,					FALSE,	NULL,		0,		EFINFO_NONE,	"detects evil creatures nearby")
EFFECT(CREATE_STAIRS,				FALSE,	NULL,		0,		EFINFO_NONE,	"creates a staircase beneath your feet")
EFFECT(DISENCHANT,					FALSE,	NULL,		0,		EFINFO_NONE,	"disenchants one of your wielded items")
EFFECT(ENCHANT,						FALSE,	NULL,		0,		EFINFO_NONE,	"attempts to magically enhance an item")
EFFECT(IDENTIFY,					FALSE,	NULL,		0,		EFINFO_NONE,	"reveals to you the extent of an item's magical powers")
EFFECT(IDENTIFY_PACK,				FALSE,	NULL,		0,		EFINFO_NONE,	"identifies all items in your pack")
EFFECT(RECHARGE,					FALSE,	NULL,		0,		EFINFO_NONE,	"tries to recharge a wand or staff, destroying the wand or staff on failure")
EFFECT(PROJECT_LOS,					FALSE,	"power",	2,		EFINFO_SEEN,	"%s which are in line of sight")
EFFECT(PROJECT_LOS_AWARE,			FALSE,	"power",	2,		EFINFO_SEEN,	"%s which are in line of sight")
EFFECT(ACQUIRE,						FALSE,	NULL,		0,		EFINFO_NONE,	"creates good items nearby")
EFFECT(AGGRAVATE,					FALSE,	NULL,		0,		EFINFO_NONE,	"awakens all nearby sleeping monsters and hastens all monsters within line of sight")
EFFECT(SUMMON,						FALSE,	NULL,		1,		EFINFO_SUMM,	"summons %s at the current dungeon level")
EFFECT(BANISH,						FALSE,	NULL,		0,		EFINFO_NONE,	"removes all of a given creature type from the level")
EFFECT(MASS_BANISH,					FALSE,	NULL,		0,		EFINFO_NONE,	"removes all nearby creatures")
EFFECT(PROBE,						FALSE,	NULL,		0,		EFINFO_NONE,	"gives you information on the health and abilities of monsters you can see")
EFFECT(THRUST_AWAY,					FALSE,	NULL,		0,		EFINFO_NONE,	"pushes a creature away")
EFFECT(TELEPORT,					FALSE,	"range",	2,		EFINFO_TELE,	"teleports %s randomly %d grids")
EFFECT(TELEPORT_TO,					FALSE,	NULL,		0,		EFINFO_NONE,	"teleports you to a monster")
EFFECT(TELEPORT_LEVEL,				FALSE,	NULL,		0,		EFINFO_NONE,	"teleports you one level up or down")
EFFECT(DESTRUCTION,					FALSE,	NULL,		1,		EFINFO_QUAKE,	"destroys an area around you in the shape of a circle radius %d, and blinds you for 1d10+10 turns")
EFFECT(EARTHQUAKE,					FALSE,	NULL,		1,		EFINFO_QUAKE,	"causes an earthquake around you of radius %d")
EFFECT(ENLIGHTENMENT,				FALSE,	NULL,		0,		EFINFO_NONE,	"completely lights up and magically maps the level")
EFFECT(LIGHT_AREA,					FALSE,	NULL,		2,		EFINFO_LIGHT,	"lights up the surrounding area, causing %s damage to light-sensitive creatures within %d grids")
EFFECT(DARKEN_AREA,					FALSE,	NULL,		0,		EFINFO_NONE,	"darkens the surrounding area")
EFFECT(BALL,						TRUE,	"dam",		3,		EFINFO_BALL,	"fires a ball of %s with radius %d, dealing %s damage at the centre")
EFFECT(BREATH,						TRUE,	NULL,		3,		EFINFO_BALL,	"fires a ball of %s with radius %d, dealing %s damage at the centre")
EFFECT(SWARM,						TRUE,	"dam",		3,		EFINFO_BALL,	"fires a series of %s balls of radius %d, dealing %s damage at the centre of each")
EFFECT(STAR,						FALSE,	"dam",		2,		EFINFO_BOLTD,	"fires a line of %s in all directions, each dealing %s damage")
EFFECT(STAR_BALL,					FALSE,	"dam",		3,		EFINFO_BALL,	"fires balls of %s with radius %d in all directions, dealing %s damage at the centre of each")
EFFECT(BOLT,						TRUE,	"dam",		2,		EFINFO_BOLTD,	"casts a bolt of %s dealing %s damage")
EFFECT(BEAM,						TRUE,	"dam",		2,		EFINFO_BOLTD,	"casts a beam of %s dealing %s damage")
EFFECT(BOLT_OR_BEAM,				TRUE,	"dam",		2,		EFINFO_BOLTD,	"casts a bolt or beam of %s dealing %s damage")
EFFECT(LINE,						TRUE,	"dam",		2,		EFINFO_BOLTD,	"creates a line of %s dealing %s damage")
EFFECT(ALTER,						TRUE,	NULL,		0,		EFINFO_NONE,	"creates a line which may affect terrain and/or items")
EFFECT(BOLT_STATUS,					TRUE,	NULL,		1,		EFINFO_BOLT,	"casts a bolt which %s")
EFFECT(BOLT_STATUS_DAM,				TRUE,	"dam",		2,		EFINFO_BOLTD,	"casts a bolt which %s, dealing %s damage")
EFFECT(BOLT_AWARE,					TRUE,	"dam",		1,		EFINFO_BOLT,	"creates a bolt which %s")
EFFECT(TOUCH,						FALSE,	NULL,		1,		EFINFO_TOUCH,	"%s on all adjacent squares")
EFFECT(TOUCH_AWARE,					FALSE,	NULL,		1,		EFINFO_TOUCH,	"%s on all adjacent squares")
EFFECT(CURSE_ARMOR,					FALSE,	NULL,		0,		EFINFO_NONE,	"curses your worn armor")
EFFECT(CURSE_WEAPON,				FALSE,	NULL,		0,		EFINFO_NONE,	"curses your wielded melee weapon")
EFFECT(BRAND_WEAPON,				FALSE,	NULL,		0,		EFINFO_NONE,	"brands your wielded melee weapon")
EFFECT(BRAND_AMMO,					FALSE,	NULL,		0,		EFINFO_NONE,	"brands a stack of ammunition")
EFFECT(BRAND_BOLTS,					FALSE,	NULL,		0,		EFINFO_NONE,	"brands bolts with fire, in an unbalanced fashion")
EFFECT(BIZARRE,						TRUE,	NULL,		0,		EFINFO_NONE,	"does bizarre things")
EFFECT(WONDER,						TRUE,	NULL,		0,		EFINFO_NONE,	"creates random and unpredictable effects")
EFFECT(TRAP_DOOR,					FALSE,	NULL,		0,		EFINFO_NONE,	"a trap door which drops you down a level")
EFFECT(TRAP_PIT,					FALSE,	NULL,		0,		EFINFO_NONE,	"a pit trap - the fall might hurt")
EFFECT(TRAP_PIT_SPIKES,				FALSE,	NULL,		0,		EFINFO_NONE,	"a pit trap, with nasty spikes")
EFFECT(TRAP_PIT_POISON,				FALSE,	NULL,		0,		EFINFO_NONE,	"a pit trap, with poisoned spikes")
EFFECT(TRAP_RUNE_SUMMON,			FALSE,	NULL,		0,		EFINFO_NONE,	"a rune which summons monsters")
EFFECT(TRAP_RUNE_TELEPORT,			FALSE,	NULL,		0,		EFINFO_NONE,	"a rune which teleports")
EFFECT(TRAP_SPOT_FIRE,				FALSE,	NULL,		0,		EFINFO_NONE,	"a magical fire trap")
EFFECT(TRAP_SPOT_ACID,				FALSE,	NULL,		0,		EFINFO_NONE,	"a magical acid trap")
EFFECT(TRAP_DART_SLOW,				FALSE,	NULL,		0,		EFINFO_NONE,	"a dart which slows movements")
EFFECT(TRAP_DART_LOSE_STR,			FALSE,	NULL,		0,		EFINFO_NONE,	"a dart which drains strength")
EFFECT(TRAP_DART_LOSE_DEX,			FALSE,	NULL,		0,		EFINFO_NONE,	"a dart which drains dexterity")
EFFECT(TRAP_DART_LOSE_CON,			FALSE,	NULL,		0,		EFINFO_NONE,	"a dart which drains constitution")
EFFECT(TRAP_GAS_BLIND,				FALSE,	NULL,		0,		EFINFO_NONE,	"blinding gas")
EFFECT(TRAP_GAS_CONFUSE,			FALSE,	NULL,		0,		EFINFO_NONE,	"confusing gas")
EFFECT(TRAP_GAS_POISON,				FALSE,	NULL,		0,		EFINFO_NONE,	"poison gas")
EFFECT(TRAP_GAS_SLEEP,				FALSE,	NULL,		0,		EFINFO_NONE,	"soporific gas")
