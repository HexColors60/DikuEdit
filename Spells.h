#ifndef _SPELLS_H_
#define _SPELLS_H_ 1

class Spell
{
public:
	char* SpellName() 
	{ 
		return name; 
	};

	void NameSpell(char* name) 
	{ 
		this->name = name; 
	};

	int	Id() { return id; };

	int Type() 
	{ 
		return type; 
	};

	void Type(int i) 
	{ 
		type = i; 
	};

	bool Active()
	{
		return active;
	};

public:
	
	int id;
	int type;

	bool active; //denotes whether a spell is actualy used in the mud or not
	
	char* name;
};

struct Type
{
	int type;
	char *name;
};

enum Types 
{
	TYPE_ALL		= BV00,
	TYPE_DEFENSIVE	= BV01,
	TYPE_OFFENSIVE	= BV02,
	TYPE_AREA		= BV03,
	TYPE_SELF		= BV04,
	TYPE_MISC		= BV05,
	TYPE_OBJECT		= BV06,
	TYPE_WALLS		= BV07,
	TYPE_TRANSPORT  = BV08,
	TYPE_MAX        = 9,
};

enum Spells 
{
     SPELL_ARMOR					= 1,
     SPELL_TELEPORT					= 2,
     SPELL_BLESS					= 3,
     SPELL_BLINDNESS				= 4,
     SPELL_BURNING_HANDS			= 5,
     SPELL_CALL_LIGHTNING			= 6,
     SPELL_CHARM_PERSON				= 7,
     SPELL_CHILL_TOUCH				= 8,
     SPELL_FULL_HEAL				= 9,
     SPELL_CONE_OF_COLD				= 10,
     SPELL_CONTROL_WEATHER			= 11,
     SPELL_CREATE_FOOD				= 12,
     SPELL_CREATE_WATER				= 13,
     SPELL_CURE_BLIND				= 14,
     SPELL_CURE_CRITIC				= 15,
     SPELL_CURE_LIGHT				= 16,
     SPELL_CURSE					= 17,
     SPELL_CONTINUAL_LIGHT			= 18,
     SPELL_DETECT_INVISIBLE			= 19,
     SPELL_MINOR_CREATION			= 20,
     SPELL_FLAMESTRIKE				= 21,
     SPELL_DISPEL_EVIL				= 22,
     SPELL_EARTHQUAKE				= 23,
     SPELL_ENCHANT_WEAPON			= 24,
     SPELL_ENERGY_DRAIN				= 25,
     SPELL_FIREBALL					= 26,
     SPELL_HARM						= 27,
     SPELL_HEAL						= 28,
     SPELL_INVISIBLE				= 29,
     SPELL_LIGHTNING_BOLT			= 30,
     SPELL_LOCATE_OBJECT			= 31,
     SPELL_MAGIC_MISSILE			= 32,
     SPELL_POISON					= 33,
     SPELL_PROTECT_FROM_EVIL		= 34,
     SPELL_REMOVE_CURSE				= 35,
     SPELL_STONE_SKIN				= 36,
     SPELL_SHOCKING_GRASP			= 37,
     SPELL_SLEEP					= 38,
     SPELL_STRENGTH					= 39,
     SPELL_SUMMON				    = 40,
     SPELL_HASTE					= 41,
     SPELL_WORD_OF_RECALL			= 42,
     SPELL_REMOVE_POISON			= 43,
     SPELL_SENSE_LIFE				= 44,
     SPELL_IDENTIFY					= 45,
     SPELL_VENTRILOQUATE			= 46,
     SPELL_FIRESTORM				= 47,
     SPELL_FIRE_BREATH				= 48,
     SPELL_GAS_BREATH				= 49,
     SPELL_FROST_BREATH				= 50,
     SPELL_ACID_BREATH				= 51,
     SPELL_LIGHTNING_BREATH			= 52,
     SPELL_FARSEE					= 53,
     SPELL_FEAR						= 54,
     SPELL_RECHARGER				= 55,
     SPELL_VITALITY					= 56,
     SPELL_CURE_SERIOUS				= 57,
     SPELL_DESTROY_UNDEAD			= 58,
     SPELL_METEOR_SWARM				= 59,
     SPELL_CREEPING					= 60,
     SPELL_MINOR_GLOBE				= 61,
     SPELL_CHAIN_LIGHTNING			= 62,
     SPELL_DIMENSION_DOOR			= 63,
     SPELL_VIGORIZE_LIGHT			= 64,
     SPELL_VIGORIZE_SERIOUS			= 65,
     SPELL_VIGORIZE_CRITIC			= 66,
     SPELL_DISPEL_INVISIBLE			= 67,
     SPELL_WIZARD_EYE				= 68,
     SPELL_CLAIRVOYANCE				= 69,
     SPELL_REJUVENATE_MAJOR			= 70,
     SPELL_RAY_OF_ENFEEBLEMENT		= 71,
     SPELL_DISPEL_GOOD				= 72,
     SPELL_DEXTERITY				= 73,
     SPELL_REJUVENATE_MINOR			= 74,
     SPELL_AGE						= 75,
     SPELL_CYCLONE					= 76,
     SPELL_BIGBYS_CLENCHED_FIST		= 77,
     SPELL_CONJURE_ELEMENTAL		= 78,
     SPELL_VITALIZE_MANA			= 79,
     SPELL_RELOCATE					= 80,
     SPELL_PROTECT_FROM_GOOD		= 81,
     SPELL_ANIMATE_DEAD				= 82,
     SPELL_LEVITATE					= 83,
     SPELL_FLY						= 84,
     SPELL_WATERBREATH				= 85,
     SPELL_PLANE_SHIFT				= 86,
     SPELL_GATE						= 87,
     SPELL_RESURRECT				= 88,
     SPELL_MASS_CHARM				= 89,
     SPELL_DETECT_EVIL				= 90,
     SPELL_DETECT_GOOD				= 91,
     SPELL_DETECT_MAGIC				= 92,
     SPELL_DISPEL_MAGIC				= 93,
     SPELL_PRESERVE					= 94,
     SPELL_MASS_INVIS				= 95,
     SPELL_PROTECT_FROM_FIRE		= 96,
     SPELL_PROTECT_FROM_COLD		= 97,
     SPELL_PROTECT_FROM_LIGHTNING	= 98,
     SPELL_DARKNESS					= 99,
     SPELL_MINOR_PARALYSIS			= 100,
     SPELL_MAJOR_PARALYSIS			= 101,
     SPELL_SLOW						= 102,
     SPELL_WITHER					= 103,
     SPELL_PROTECT_FROM_GAS			= 104,
     SPELL_PROTECT_FROM_ACID		= 105,
     SPELL_INFRAVISION				= 106,
     SPELL_PRISMATIC_SPRAY			= 107,
     SPELL_FIRESHIELD				= 108,
     SPELL_COLOR_SPRAY				= 109,
     SPELL_INCENDIARY_CLOUD			= 110,
     SPELL_ICE_STORM				= 111,
     SPELL_DISINTEGRATE				= 112,
     SPELL_CAUSE_LIGHT				= 113,
     SPELL_CAUSE_SERIOUS			= 114,
     SPELL_CAUSE_CRITICAL			= 115,
     SPELL_ACID_BLAST				= 116,
     SPELL_FAERIE_FIRE				= 117,
     SPELL_FAERIE_FOG				= 118,
     SPELL_PWORD_KILL				= 119,
     SPELL_PWORD_BLIND				= 120,
     SPELL_PWORD_STUN				= 121,
     SPELL_UNHOLY_WORD				= 122,
     SPELL_HOLY_WORD				= 123,
     SPELL_SUNRAY					= 124,
	 SPELL_UNKNOWN					= 125,
     SPELL_FEEBLEMIND				= 126,
     SPELL_SILENCE					= 127,
     SPELL_TURN_UNDEAD				= 128,
     SPELL_COMMAND_UNDEAD			= 129,
     SPELL_SLOW_POISON				= 130,
     SPELL_COLDSHIELD				= 131,
     SPELL_COMPREHEND_LANGUAGES		= 132,
     SPELL_WRAITHFORM				= 133,
     SPELL_VAMPIRIC_TOUCH			= 134,
     SPELL_PROT_UNDEAD				= 135,
     SPELL_PROT_FROM_UNDEAD			= 136,
     SPELL_COMMAND_HORDE			= 137,
     SPELL_HEAL_UNDEAD				= 138,
     SPELL_ENTANGLE					= 139,
     SPELL_CREATE_SPRING			= 140,
     SPELL_BARKSKIN					= 141,
     SPELL_MOONWELL					= 142,
     SPELL_CREATE_DRACOLICH			= 143,
     SPELL_GLOBE					= 144,
     SPELL_EMBALM					= 145,
     SPELL_SHADOW_BREATH_1			= 146,
     SPELL_SHADOW_BREATH_2			= 147,
     SPELL_WALL_OF_FLAMES			= 148,
     SPELL_WALL_OF_ICE				= 149,
     SPELL_WALL_OF_STONE			= 150,
     SPELL_WALL_OF_IRON				= 151,
     SPELL_WALL_OF_FORCE			= 152,
     SPELL_WALL_OF_BONES			= 153,
     SPELL_LIGHTNING_CURTAIN		= 154,
     SPELL_MOLECULAR_CONTROL		= 155,
     SPELL_MOLECULAR_AGITATION		= 156,
     SPELL_ADRENALINE_CONTROL		= 157,
     SPELL_AURA_SIGHT				= 158,
     SPELL_AWE						= 159,
     SPELL_BALLISTIC_ATTACK			= 160,
     SPELL_BIOFEEDBACK				= 161,
     SPELL_CELL_ADJUSTMENT			= 162,
     SPELL_COMBAT_MIND				= 163,
     SPELL_CONTROL_FLAMES			= 164,
     SPELL_CREATE_SOUND				= 165,
     SPELL_DEATH_FIELD				= 166,
     SPELL_DETONATE					= 167,
     SPELL_DISINTEGRATE2			= 168,
     SPELL_DISPLACEMENT				= 169,
     SPELL_DOMINATION				= 170,
     SPELL_ECTOPLASMIC_FORM			= 171,
     SPELL_EGO_WHIP					= 172,
     SPELL_ENERGY_CONTAINMENT		= 173,
     SPELL_ENHANCE_ARMOR			= 174,
     SPELL_ENHANCED_STR				= 175,
     SPELL_ENHANCED_DEX				= 176,
     SPELL_ENHANCED_AGI				= 177,
     SPELL_ENHANCED_CON				= 178,
     SPELL_FLESH_ARMOR				= 179,
     SPELL_INERTIAL_BARRIOR			= 180,
     SPELL_INFLICT_PAIN				= 181,
     SPELL_INTELLECT_FORTRESS		= 182,
     SPELL_LEND_HEALTH				= 183,
     SPELL_LEVITATION				= 184,
     SPELL_CONFUSE					= 185,
     SPELL_DISEASE					= 186,
     SPELL_CHARM_ANIMAL				= 187,
     SPELL_SOULSHIELD				= 188,
     SPELL_INVIS_MAJOR				= 189,
     SPELL_MASS_HEAL				= 190,
     SPELL_ICE_MISSILE				= 191,
     SPELL_SPIRIT_ARMOR				= 192,
     SPELL_WOLFSPEED				= 193,
     SPELL_TRANSFER_WELLNESS		= 194,
     SPELL_FLAMEBURST				= 195,
     SPELL_SCALDING_BLAST			= 196,
     SPELL_PYTHONSTING				= 197,
     SPELL_SNAILSPEED				= 198,
     SPELL_MOLEVISION				= 199,
     SPELL_PURIFY_SPIRIT			= 200,
     SPELL_PANTHERSPEED				= 201,
     SPELL_MOUSESTRENGTH			= 202,
     SPELL_SUMMON_BEAST				= 203,
     SPELL_HAWKVISION				= 204,
     SPELL_SCORCHING_TOUCH			= 205,
     SPELL_MENDING					= 206,
     SPELL_SOUL_DISTURBANCE			= 207,
     SPELL_SPIRIT_SIGHT				= 208,
     SPELL_BEARSTRENGTH				= 209,
     SPELL_SHREWTAMENESS			= 210,
     SPELL_SENSE_SPIRIT				= 211,
     SPELL_MALISON					= 212,
     SPELL_WELLNESS					= 213,
     SPELL_GREATER_MENDING			= 214,
     SPELL_LIONRAGE					= 215,
     SPELL_SPIRIT_ANGUISH			= 216,
     SPELL_EARTHEN_GRASP			= 217,
     SPELL_SUMMON_SPIRIT			= 218,
     SPELL_GREATER_SOUL_DISTURB		= 219,
     SPELL_SPIRIT_WARD				= 220,
     SPELL_ELEPHANTSTRENGTH			= 221,
     SPELL_GREATER_PYTHONSTING		= 222,
     SPELL_SCATHING_WIND			= 223,
     SPELL_REVEAL_TRUE_FORM			= 224,
     SPELL_GREATER_SPIRIT_SIGHT		= 225,
     SPELL_EARTHEN_RAIN				= 226,
     SPELL_GREATER_SPIRIT_WARD		= 227,
     SPELL_SUSTENANCE				= 228,
     SPELL_CREATE_EARTHEN_PROJ		= 229,
     SPELL_ANIMATE_EARTHEN_PROJ		= 230,
     SPELL_GREATER_SUST				= 231,
     SPELL_COLD_WARD				= 232,
     SPELL_FIRE_WARD				= 233,
     SPELL_LESSER_MENDING			= 234,
     SPELL_MOLTEN_SPRAY				= 235,
     SPELL_TRUE_SEEING				= 236,
     SPELL_BOGUS_TEST				= 237,
     SPELL_RAVENFLIGHT				= 238,
     SPELL_GREATER_RAVENFLIGHT		= 239,
     SPELL_LORE						= 240,
     SPELL_WORMHOLE					= 241,
     SPELL_ETHERPORTAL				= 242,
     SPELL_FULL_HARM				= 243,
     SPELL_CONJURE_GREATER_ELEMENTAL= 244,
     SPELL_GROUP_RECALL				= 245,
     SPELL_GREATER_EARTHEN_GRASP	= 246,
     SPELL_GROUP_STONE_SKIN			= 247,
     SPELL_ENLARGE					= 248,
     SPELL_REDUCE					= 249,
     SPELL_REVEAL_SPIRIT_ESSENCE	= 250,
     SPELL_SPIRIT_JUMP				= 251,
     SPELL_BEHOLDER_DISIN			= 252,
     SPELL_BEHOLDER_DAMAGE			= 253,
     SPELL_ARIEKS_SHATTERING_ICEBALL= 254,
     SPELL_ENRAGE					= 255,
     SPELL_BLINDING_BREATH			= 256,
     SPELL_MIND_BLANK				= 257,
     SPELL_SIGHT_LINK				= 258,
     SPELL_CANIBALIZE				= 259,
     SPELL_TOWER_IRON_WILL			= 260,
     SPELL_MIRROR_IMAGE				= 261,
     SPELL_REVEAL_TRUE_NAME			= 262,
     SPELL_BLUR						= 263,
     SPELL_PRISMATIC_CUBE			= 264,
     SPELL_JUDGEMENT				= 265,
     SPELL_GREATER_WRAITHFORM		= 266,
     SPELL_ELEMENTAL_FORM			= 267,
     SPELL_RAISE_SPECTRE			= 268,
     SPELL_RAISE_WRAITH				= 269,
     SPELL_RAISE_VAMPIRE			= 270,
     SPELL_RAISE_LICH				= 271,
     SPELL_PALADIN_AURA				= 272,
     SPELL_MINDSHIELD				= 273,
     SPELL_AIRY_WATER				= 274,
     SPELL_CURE_DISEASE				= 275,
     SPELL_POLYMORPH_OBJECT			= 276,
     SPELL_IMMOLATE					= 277,
     SPELL_APOCALYPSE				= 278,
     SPELL_SENSE_FOLLOWER			= 279,
     SPELL_PASS_WITHOUT_TRACE		= 280,
     SPELL_ETHER_WARP				= 281,
     SPELL_STARSHELL				= 282,
     SPELL_CLOAK_OF_FEAR			= 283,
     SPELL_VAMPIRE					= 284,
     SPELL_BIGBYS_CRUSHING_HAND		= 285,
     SPELL_STORNOGS_SPHERES			= 286,
     SPELL_STORNOGS_GREATER_SPHERES = 287,
     SPELL_GROUP_GLOBE				= 288,
     SPELL_ETHER_SENSE				= 289,
     SPELL_CALL_OF_THE_WILD			= 290,
     SPELL_HOLY_SACRIFICE			= 291,
     SPELL_BATTLE_ECSTASY			= 292,
     SPELL_DAZZLE					= 293,
     SPELL_HIGHEST					= 294,
};

extern Spell spells[SPELL_HIGHEST];
extern const Type  types[TYPE_MAX];

#endif