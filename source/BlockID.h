#pragma once

// tolua_begin
enum ENUM_BLOCK_ID
{
	E_BLOCK_AIR	= 0,
	E_BLOCK_STONE = 1,
	E_BLOCK_GRASS = 2,
	E_BLOCK_DIRT	= 3,
	E_BLOCK_COBBLESTONE = 4,
	E_BLOCK_PLANKS = 5,
	E_BLOCK_SAPLING = 6,
	E_BLOCK_BEDROCK = 7,
	E_BLOCK_WATER = 8,
	E_BLOCK_STATIONARY_WATER = 9,
	E_BLOCK_LAVA = 10,
	E_BLOCK_STATIONARY_LAVA = 11,
	E_BLOCK_SAND = 12,
	E_BLOCK_GRAVEL = 13,
	E_BLOCK_GOLD_ORE = 14,
	E_BLOCK_IRON_ORE = 15,
	E_BLOCK_COAL_ORE = 16,
	E_BLOCK_LOG = 17,
	E_BLOCK_LEAVES = 18,
	E_BLOCK_SPONGE = 19,
	E_BLOCK_GLASS = 20,
	E_BLOCK_LAPIS_ORE = 21,
	E_BLOCK_LAPIS_BLOCK = 22,
	E_BLOCK_DISPENSER = 23,
	E_BLOCK_SANDSTONE = 24,
	E_BLOCK_NOTE_BLOCK = 25,
	E_BLOCK_BED = 26,
	E_BLOCK_POWERED_RAIL = 27,
	E_BLOCK_DETECTOR_RAIL = 28,
	E_BLOCK_STICKY_PISTON = 29,
	E_BLOCK_COBWEB = 30,
	E_BLOCK_TALL_GRASS = 31,
	E_BLOCK_DEAD_BUSH = 32,
	E_BLOCK_PISTON = 33,
	E_BLOCK_PISTON_EXTENSION = 34,
	E_BLOCK_WOOL = 35,
	E_BLOCK_PISTON_MOVED_BLOCK = 36,
	E_BLOCK_YELLOW_FLOWER = 37,
	E_BLOCK_RED_ROSE = 38,
	E_BLOCK_BROWN_MUSHROOM = 39,
	E_BLOCK_RED_MUSHROOM = 40,
	E_BLOCK_GOLD_BLOCK = 41,
	E_BLOCK_IRON_BLOCK = 42,
	E_BLOCK_DOUBLE_STONE_SLAB = 43,
	E_BLOCK_STONE_SLAB = 44,
	E_BLOCK_BRICK = 45,
	E_BLOCK_TNT = 46,
	E_BLOCK_BOOKCASE = 47,
	E_BLOCK_MOSSY_COBBLESTONE = 48,
	E_BLOCK_OBSIDIAN = 49,
	E_BLOCK_TORCH = 50,
	E_BLOCK_FIRE = 51,
	E_BLOCK_MOB_SPAWNER = 52,
	E_BLOCK_WOODEN_STAIRS = 53,
	E_BLOCK_CHEST = 54,
	E_BLOCK_REDSTONE_WIRE = 55,
	E_BLOCK_DIAMOND_ORE = 56,
	E_BLOCK_DIAMOND_BLOCK = 57,
	E_BLOCK_CRAFTING_TABLE = 58,
	E_BLOCK_WORKBENCH = 58,
	E_BLOCK_CROPS = 59,
	E_BLOCK_FARMLAND = 60,
	E_BLOCK_FURNACE = 61,
	E_BLOCK_LIT_FURNACE = 62,
	E_BLOCK_BURNING_FURNACE = 62,
	E_BLOCK_SIGN_POST = 63,
	E_BLOCK_WOODEN_DOOR = 64,
	E_BLOCK_LADDER = 65,
	E_BLOCK_RAIL = 66,
	E_BLOCK_MINECART_TRACKS = 66,
	E_BLOCK_COBBLESTONE_STAIRS = 67,
	E_BLOCK_WALLSIGN = 68,
	E_BLOCK_LEVER = 69,
	E_BLOCK_STONE_PRESSURE_PLATE = 70,
	E_BLOCK_IRON_DOOR = 71,
	E_BLOCK_WOODEN_PRESSURE_PLATE = 72,
	E_BLOCK_REDSTONE_ORE = 73,
	E_BLOCK_REDSTONE_ORE_GLOWING = 74,
	E_BLOCK_REDSTONE_TORCH_OFF = 75,
	E_BLOCK_REDSTONE_TORCH_ON = 76,
	E_BLOCK_STONE_BUTTON = 77,
	E_BLOCK_SNOW = 78,
	E_BLOCK_ICE = 79,
	E_BLOCK_SNOW_BLOCK = 80,
	E_BLOCK_CACTUS = 81,
	E_BLOCK_CLAY = 82,
	E_BLOCK_SUGARCANE = 83,
	E_BLOCK_REEDS = 83,
	E_BLOCK_JUKEBOX = 84,
	E_BLOCK_FENCE = 85,
	E_BLOCK_PUMPKIN = 86,
	E_BLOCK_NETHERRACK = 87,
	E_BLOCK_SOULSAND = 88,
	E_BLOCK_GLOWSTONE = 89,
	E_BLOCK_NETHER_PORTAL = 90,
	E_BLOCK_JACK_O_LANTERN = 91,
	E_BLOCK_CAKE = 92,
	E_BLOCK_REDSTONE_REPEATER_OFF = 93,
	E_BLOCK_REDSTONE_REPEATER_ON = 94,
	E_BLOCK_LOCKED_CHEST = 95,
	E_BLOCK_TRAPDOOR = 96,
	E_BLOCK_SILVERFISH_EGG = 97,
	E_BLOCK_STONE_BRICKS = 98,
	E_BLOCK_HUGE_BROWN_MUSHROOM = 99,
	E_BLOCK_HUGE_RED_MUSHROOM = 100,
	E_BLOCK_IRON_BARS = 101,
	E_BLOCK_GLASS_PANE = 102,
	E_BLOCK_MELON = 103,
	E_BLOCK_PUMPKIN_STEM = 104,
	E_BLOCK_MELON_STEM = 105,
	E_BLOCK_VINES = 106,
	E_BLOCK_FENCE_GATE = 107,
	E_BLOCK_BRICK_STAIRS = 108,
	E_BLOCK_STONE_BRICK_STAIRS = 109,
	E_BLOCK_MYCELIUM = 110,
	E_BLOCK_LILY_PAD = 111,
	E_BLOCK_NETHER_BRICK = 112,
	E_BLOCK_NETHER_BRICK_FENCE = 113,
	E_BLOCK_NETHER_BRICK_STAIRS = 114,
	E_BLOCK_NETHER_WART = 115,
	E_BLOCK_ENCHANTMENT_TABLE = 116,
	E_BLOCK_BREWING_STAND = 117,
	E_BLOCK_CAULDRON = 118,
	E_BLOCK_END_PORTAL = 119,
	E_BLOCK_END_PORTAL_FRAME = 120,
	E_BLOCK_END_STONE = 121,
	E_BLOCK_DRAGON_EGG = 122,
	E_BLOCK_REDSTONE_LAMP_OFF = 123,
	E_BLOCK_REDSTONE_LAMP_ON = 124,
	E_BLOCK_DOUBLE_WOODEN_SLAB = 125,
	E_BLOCK_WOODEN_SLAB = 126,
	E_BLOCK_COCOA_POD = 127,
	E_BLOCK_SANDSTONE_STAIRS = 128,
	E_BLOCK_EMERALD_ORE = 129,
	E_BLOCK_ENDER_CHEST = 130,
	E_BLOCK_TRIPWIRE_HOOK = 131,
	E_BLOCK_TRIPWIRE = 132,
	E_BLOCK_EMERALD_BLOCK = 133,
	E_BLOCK_SPRUCE_WOOD_STAIRS = 134,
	E_BLOCK_BIRCH_WOOD_STAIRS = 135,
	E_BLOCK_JUNGLE_WOOD_STAIRS = 136,
	E_BLOCK_COMMAND_BLOCK = 137,
	E_BLOCK_BEACON = 138,
	E_BLOCK_COBBLESTONE_WALL = 139,
	E_BLOCK_FLOWER_POT = 140,
	E_BLOCK_CARROTS = 141,
	E_BLOCK_POTATOES = 142,
	E_BLOCK_WOODEN_BUTTON = 143,
	E_BLOCK_HEAD = 144,
	E_BLOCK_ANVIL = 145,
	E_BLOCK_TRAPPED_CHEST = 146,
	E_BLOCK_LIGHT_WEIGHTED_PRESSURE_PLATE = 147,
	E_BLOCK_HEAVY_WEIGHTED_PRESSURE_PLATE = 148,
	
	E_BLOCK_INACTIVE_COMPARATOR = 149,
	E_BLOCK_ACTIVE_COMPARATOR = 150,
	E_BLOCK_DAYLIGHT_SENSOR = 151,
	E_BLOCK_BLOCK_OF_REDSTONE = 152,

	E_BLOCK_NETHER_QUARTZ_ORE = 153,
	E_BLOCK_HOPPER = 154,
	E_BLOCK_QUARTZ_BLOCK = 155,
	E_BLOCK_ACTIVATOR_RAIL = 157,
	
	E_BLOCK_DROPPER = 158,
	
	E_BLOCK_CARPET = 171,
	
	// Keep these two as the last values, without a number - they will get their correct number assigned automagically by C++
	// IsValidBlock() depends on this
	E_BLOCK_NUMBER_OF_TYPES,  ///< Number of individual (different) blocktypes
	E_BLOCK_MAX_TYPE_ID = E_BLOCK_NUMBER_OF_TYPES - 1  ///< Maximum BlockType number used
};
// tolua_end

// tolua_begin
enum ENUM_ITEM_ID
{
	E_ITEM_EMPTY	= -1,

	E_ITEM_FIRST = 256,  // First true item type
	
	E_ITEM_IRON_SHOVEL = 256,
	E_ITEM_IRON_PICKAXE = 257,
	E_ITEM_IRON_AXE = 258,
	E_ITEM_FLINT_AND_STEEL = 259,
	E_ITEM_RED_APPLE = 260,
	E_ITEM_BOW = 261,
	E_ITEM_ARROW = 262,
	E_ITEM_COAL = 263,
	E_ITEM_DIAMOND = 264,
	E_ITEM_IRON = 265,
	E_ITEM_GOLD = 266,
	E_ITEM_IRON_SWORD = 267,
	E_ITEM_WOODEN_SWORD = 268,
	E_ITEM_WOODEN_SHOVEL = 269,
	E_ITEM_WOODEN_PICKAXE = 270,
	E_ITEM_WOODEN_AXE = 271,
	E_ITEM_STONE_SWORD = 272,
	E_ITEM_STONE_SHOVEL = 273,
	E_ITEM_STONE_PICKAXE = 274,
	E_ITEM_STONE_AXE = 275,
	E_ITEM_DIAMOND_SWORD = 276,
	E_ITEM_DIAMOND_SHOVEL = 277,
	E_ITEM_DIAMOND_PICKAXE = 278,
	E_ITEM_DIAMOND_AXE = 279,
	E_ITEM_STICK = 280,
	E_ITEM_BOWL = 281,
	E_ITEM_MUSHROOM_SOUP = 282,
	E_ITEM_GOLD_SWORD = 283,
	E_ITEM_GOLD_SHOVEL = 284,
	E_ITEM_GOLD_PICKAXE = 285,
	E_ITEM_GOLD_AXE = 286,
	E_ITEM_STRING = 287,
	E_ITEM_FEATHER = 288,
	E_ITEM_GUNPOWDER = 289,
	E_ITEM_WOODEN_HOE = 290,
	E_ITEM_STONE_HOE = 291,
	E_ITEM_IRON_HOE = 292,
	E_ITEM_DIAMOND_HOE = 293,
	E_ITEM_GOLD_HOE = 294,
	E_ITEM_SEEDS = 295,
	E_ITEM_WHEAT = 296,
	E_ITEM_BREAD = 297,
	E_ITEM_LEATHER_CAP = 298,
	E_ITEM_LEATHER_TUNIC = 299,
	E_ITEM_LEATHER_PANTS = 300,
	E_ITEM_LEATHER_BOOTS = 301,
	E_ITEM_CHAIN_HELMET = 302,
	E_ITEM_CHAIN_CHESTPLATE = 303,
	E_ITEM_CHAIN_LEGGINGS = 304,
	E_ITEM_CHAIN_BOOTS = 305,
	E_ITEM_IRON_HELMET = 306,
	E_ITEM_IRON_CHESTPLATE = 307,
	E_ITEM_IRON_LEGGINGS = 308,
	E_ITEM_IRON_BOOTS = 309,
	E_ITEM_DIAMOND_HELMET = 310,
	E_ITEM_DIAMOND_CHESTPLATE = 311,
	E_ITEM_DIAMOND_LEGGINGS = 312,
	E_ITEM_DIAMOND_BOOTS = 313,
	E_ITEM_GOLD_HELMET = 314,
	E_ITEM_GOLD_CHESTPLATE = 315,
	E_ITEM_GOLD_LEGGINGS = 316,
	E_ITEM_GOLD_BOOTS = 317,
	E_ITEM_FLINT = 318,
	E_ITEM_RAW_PORKCHOP = 319,
	E_ITEM_COOKED_PORKCHOP = 320,
	E_ITEM_PAINTINGS = 321,
	E_ITEM_GOLDEN_APPLE = 322,
	E_ITEM_SIGN = 323,
	E_ITEM_WOODEN_DOOR = 324,
	E_ITEM_BUCKET = 325,
	E_ITEM_WATER_BUCKET = 326,
	E_ITEM_LAVA_BUCKET = 327,
	E_ITEM_MINECART = 328,
	E_ITEM_SADDLE = 329,
	E_ITEM_IRON_DOOR = 330,
	E_ITEM_REDSTONE_DUST = 331,
	E_ITEM_SNOWBALL = 332,
	E_ITEM_BOAT = 333,
	E_ITEM_LEATHER = 334,
	E_ITEM_MILK = 335,
	E_ITEM_CLAY_BRICK = 336,
	E_ITEM_CLAY = 337,
	E_ITEM_SUGARCANE = 338,
	E_ITEM_SUGAR_CANE = 338,
	E_ITEM_PAPER = 339,
	E_ITEM_BOOK = 340,
	E_ITEM_SLIMEBALL = 341,
	E_ITEM_CHEST_MINECART = 342,
	E_ITEM_FURNACE_MINECART = 343,
	E_ITEM_EGG = 344,
	E_ITEM_COMPASS = 345,
	E_ITEM_FISHING_ROD = 346,
	E_ITEM_CLOCK = 347,
	E_ITEM_GLOWSTONE_DUST = 348,
	E_ITEM_RAW_FISH = 349,
	E_ITEM_COOKED_FISH = 350,
	E_ITEM_DYE = 351,
	E_ITEM_BONE = 352,
	E_ITEM_SUGAR = 353,
	E_ITEM_CAKE = 354,
	E_ITEM_BED = 355,
	E_ITEM_REDSTONE_REPEATER = 356,
	E_ITEM_COOKIE = 357,
	E_ITEM_MAP = 358,
	E_ITEM_SHEARS = 359,
	E_ITEM_MELON_SLICE = 360,
	E_ITEM_PUMPKIN_SEEDS = 361,
	E_ITEM_MELON_SEEDS = 362,
	E_ITEM_RAW_BEEF = 363,
	E_ITEM_STEAK = 364,
	E_ITEM_RAW_CHICKEN = 365,
	E_ITEM_COOKED_CHICKEN = 366,
	E_ITEM_ROTTEN_FLESH = 367,
	E_ITEM_ENDER_PEARL = 368,
	E_ITEM_BLAZE_ROD = 369,
	E_ITEM_GHAST_TEAR = 370,
	E_ITEM_GOLD_NUGGET = 371,
	E_ITEM_NETHER_WART = 372,
	E_ITEM_POTIONS = 373,
	E_ITEM_GLASS_BOTTLE = 374,
	E_ITEM_SPIDER_EYE = 375,
	E_ITEM_FERMENTED_SPIDER_EYE = 376,
	E_ITEM_BLAZE_POWDER = 377,
	E_ITEM_MAGMA_CREAM = 378,
	E_ITEM_BREWING_STAND = 379,
	E_ITEM_CAULDRON = 380,
	E_ITEM_EYE_OF_ENDER = 381,
	E_ITEM_GLISTERING_MELON = 382,
	E_ITEM_SPAWN_EGG = 383,
	E_ITEM_BOTTLE_O_ENCHANTING = 384,
	E_ITEM_FIRE_CHARGE = 385,
	E_ITEM_BOOK_AND_QUILL = 386,
	E_ITEM_WRITTEN_BOOK = 387,
	E_ITEM_EMERALD = 388,
	// TODO: missing an item: item frame
	E_ITEM_FLOWER_POT = 390,
	E_ITEM_CARROT = 391,
	E_ITEM_POTATO = 392,
	E_ITEM_BAKED_POTATO = 393,
	E_ITEM_POISONOUS_POTATO = 394,
	// TODO: missing an item: empty map
	E_ITEM_GOLDEN_CARROT = 396,
	E_ITEM_HEAD = 397,
	E_ITEM_CARROT_ON_STICK = 398,
	// TODO: missing an item: nether star
	E_ITEM_PUMPKIN_PIE = 400,
	E_ITEM_FIREWORK_ROCKET = 401,
	E_ITEM_FIREWORK_STAR = 402,
	E_ITEM_ENCHANTED_BOOK = 403,
	E_ITEM_COMPARATOR = 404,
	E_ITEM_NETHER_BRICK = 405,
	E_ITEM_NETHER_QUARTZ = 406,
	E_ITEM_MINECART_WITH_TNT = 407,
	E_ITEM_MINECART_WITH_HOPPER = 408,
	// TODO: Add horse armour/horse paraphernalia
	
	// Keep these two as the last values of the consecutive list, without a number - they will get their correct number assigned automagically by C++
	// IsValidItem() depends on this!
	E_ITEM_NUMBER_OF_CONSECUTIVE_TYPES,  ///< Number of individual (different) consecutive itemtypes
	E_ITEM_MAX_CONSECUTIVE_TYPE_ID = E_ITEM_NUMBER_OF_CONSECUTIVE_TYPES - 1,  ///< Maximum consecutive ItemType number used

	E_ITEM_FIRST_DISC = 2256,
	E_ITEM_13_DISC = 2256,
	E_ITEM_CAT_DISC = 2257,
	E_ITEM_BLOCKS_DISC = 2258,
	E_ITEM_CHIRP_DISC = 2259,
	E_ITEM_FAR_DISC = 2260,
	E_ITEM_MALL_DISC = 2261,
	E_ITEM_MELLOHI_DISC = 2262,
	E_ITEM_STAL_DISC = 2263,
	E_ITEM_STRAD_DISC = 2264,
	E_ITEM_WARD_DISC = 2265,
	E_ITEM_11_DISC = 2266,
	E_ITEM_WAIT_DISC = 2267,
	
	// Keep these two as the last values of the disc list, without a number - they will get their correct number assigned automagically by C++
	// IsValidItem() depends on this!
	E_ITEM_LAST_DISC_PLUS_ONE,  ///< Useless, really, but needs to be present for the following value
	E_ITEM_LAST_DISC = E_ITEM_LAST_DISC_PLUS_ONE - 1  ///< Maximum disc itemtype number used
};





enum
{
	// Please keep this list alpha-sorted by the blocktype / itemtype part
	// then number-sorted for the same block / item
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Block metas:

	// E_BLOCK_CHEST metas:
	E_META_CHEST_FACING_ZM = 2,
	E_META_CHEST_FACING_ZP = 3,
	E_META_CHEST_FACING_XM = 4,
	E_META_CHEST_FACING_XP = 5,
	
	// E_BLOCK_DISPENSER / E_BLOCK_DROPPER metas:
	E_META_DROPSPENSER_FACING_YM = 0,
	E_META_DROPSPENSER_FACING_YP = 1,
	E_META_DROPSPENSER_FACING_ZM = 2,
	E_META_DROPSPENSER_FACING_ZP = 3,
	E_META_DROPSPENSER_FACING_XM = 4,
	E_META_DROPSPENSER_FACING_XP = 5,

	// E_BLOCK_DOUBLE_STEP metas:
	E_META_DOUBLE_STEP_STONE = 0,
	E_META_DOUBLE_STEP_SANDSTONE = 1,
	E_META_DOUBLE_STEP_WOODEN = 2,
	E_META_DOUBLE_STEP_COBBLESTONE = 3,
	E_META_DOUBLE_STEP_BRICK = 4,
	E_META_DOUBLE_STEP_STONE_BRICK = 5,
	E_META_DOUBLE_STEP_NETHER_BRICK = 6,
	E_META_DOUBLE_STEP_STONE_SECRET = 7,
	
	// E_BLOCK_HOPPER metas:
	E_META_HOPPER_FACING_YM  = 0,
	E_META_HOPPER_UNATTACHED = 1,  // Hopper doesn't move items up, there's no YP
	E_META_HOPPER_FACING_ZM  = 2,
	E_META_HOPPER_FACING_ZP  = 3,
	E_META_HOPPER_FACING_XM  = 4,
	E_META_HOPPER_FACING_XP  = 5,

	// E_BLOCK_LEAVES metas:
	E_META_LEAVES_APPLE   = 0,
	E_META_LEAVES_CONIFER = 1,
	E_META_LEAVES_BIRCH   = 2,
	E_META_LEAVES_JUNGLE  = 3,
	
	// E_BLOCK_LOG metas:
	E_META_LOG_APPLE   = 0,
	E_META_LOG_CONIFER = 1,
	E_META_LOG_BIRCH   = 2,
	E_META_LOG_JUNGLE  = 3,
	
	// E_BLOCK_PLANKS metas:
	E_META_PLANKS_APPLE   = 0,
	E_META_PLANKS_CONIFER = 1,
	E_META_PLANKS_BIRCH   = 2,
	E_META_PLANKS_JUNGLE  = 3,
	
	// E_BLOCK_SANDSTONE metas:
	E_META_SANDSTONE_NORMAL   = 0,
	E_META_SANDSTONE_ORNAMENT = 1,
	E_META_SANDSTONE_SMOOTH   = 2,
	
	// E_BLOCK_SAPLING metas (lowest 3 bits):
	E_META_SAPLING_APPLE   = 0,
	E_META_SAPLING_CONIFER = 1,
	E_META_SAPLING_BIRCH   = 2,
	E_META_SAPLING_JUNGLE  = 3,
	
	// E_BLOCK_SILVERFISH_EGG metas:
	E_META_SILVERFISH_EGG_STONE = 0,
	E_META_SILVERFISH_EGG_COBBLESTONE = 1,
	E_META_SILVERFISH_EGG_STONE_BRICK = 2,
	
	// E_BLOCK_STEP metas:
	E_META_STEP_STONE = 0,
	E_META_STEP_SANDSTONE = 1,
	E_META_STEP_PLANKS = 2,
	E_META_STEP_COBBLESTONE = 3,
	E_META_STEP_BRICK = 4,
	E_META_STEP_STONE_BRICK = 5,
	E_META_STEP_NETHER_BRICK = 6,
	E_META_STEP_STONE_SECRET = 7,
	
	// E_BLOCK_STONE_BRICKS metas:
	E_META_STONE_BRICK_NORMAL = 0,
	E_META_STONE_BRICK_MOSSY = 1,
	E_META_STONE_BRICK_CRACKED = 2,
	E_META_STONE_BRICK_ORNAMENT = 3,
	
	// E_BLOCK_TALL_GRASS metas:
	E_META_TALL_GRASS_DEAD_SHRUB = 0,
	E_META_TALL_GRASS_GRASS      = 1,
	E_META_TALL_GRASS_FERN       = 2,
	
	// E_BLOCK_TORCH, E_BLOCK_REDSTONE_TORCH_OFF, E_BLOCK_REDSTONE_TORCH_ON metas:
	E_META_TORCH_EAST  = 1,  // east face of the block, pointing east
	E_META_TORCH_WEST  = 2,
	E_META_TORCH_SOUTH = 3,
	E_META_TORCH_NORTH = 4,
	E_META_TORCH_FLOOR = 5,
	E_META_TORCH_XM = 1,  // Torch attached to the XM side of its block
	E_META_TORCH_XP = 2,  // Torch attached to the XP side of its block
	E_META_TORCH_ZM = 3,  // Torch attached to the ZM side of its block
	E_META_TORCH_ZP = 4,  // Torch attached to the ZP side of its block
	
	// E_BLOCK_WOODEN_DOUBLE_STEP metas:
	E_BLOCK_WOODEN_DOUBLE_STEP_APPLE = 0,
	E_BLOCK_WOODEN_DOUBLE_STEP_CONIFER = 1,
	E_BLOCK_WOODEN_DOUBLE_STEP_BIRCH = 2,
	E_BLOCK_WOODEN_DOUBLE_STEP_JUNGLE = 3,
	
	// E_BLOCK_WOODEN_STEP metas:
	E_BLOCK_WOODEN_STEP_APPLE = 0,
	E_BLOCK_WOODEN_STEP_CONIFER = 1,
	E_BLOCK_WOODEN_STEP_BIRCH = 2,
	E_BLOCK_WOODEN_STEP_JUNGLE = 3,

	// E_BLOCK_WOOL metas:
	E_META_WOOL_WHITE      = 0,
	E_META_WOOL_ORANGE     = 1,
	E_META_WOOL_MAGENTA    = 2,
	E_META_WOOL_LIGHTBLUE  = 3,
	E_META_WOOL_YELLOW     = 4,
	E_META_WOOL_LIGHTGREEN = 5,
	E_META_WOOL_PINK       = 6,
	E_META_WOOL_GRAY       = 7,
	E_META_WOOL_LIGHTGRAY  = 8,
	E_META_WOOL_CYAN       = 9,
	E_META_WOOL_PURPLE     = 10,
	E_META_WOOL_BLUE       = 11,
	E_META_WOOL_BROWN      = 12,
	E_META_WOOL_GREEN      = 13,
	E_META_WOOL_RED        = 14,
	E_META_WOOL_BLACK      = 15,
	

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// Item metas:
	
	// E_ITEM_COAL metas:
	E_META_COAL_NORMAL   = 0,
	E_META_COAL_CHARCOAL   = 1,
	
	// E_ITEM_DYE metas:
	E_META_DYE_BLACK      = 0,
	E_META_DYE_RED        = 1,
	E_META_DYE_GREEN      = 2,
	E_META_DYE_BROWN      = 3,
	E_META_DYE_BLUE       = 4,
	E_META_DYE_PURPLE     = 5,
	E_META_DYE_CYAN       = 6,
	E_META_DYE_LIGHTGRAY  = 7,
	E_META_DYE_GRAY       = 8,
	E_META_DYE_PINK       = 9,
	E_META_DYE_LIGHTGREEN = 10,
	E_META_DYE_YELLOW     = 11,
	E_META_DYE_LIGHTBLUE  = 12,
	E_META_DYE_MAGENTA    = 13,
	E_META_DYE_ORANGE     = 14,
	E_META_DYE_WHITE      = 15,

	// E_ITEM_GOLDEN_APPLE metas:
	E_META_GOLDEN_APPLE_NORMAL = 0,
	E_META_GOLDEN_APPLE_ENCHANTED = 1,

	// E_ITEM_MINECART_TRACKS metas:
	E_META_TRACKS_X = 1,
	E_META_TRACKS_Z = 0,
		
	// E_ITEM_SPAWN_EGG spawn EntityIDs:
	// See also E_ENTITY_TYPE_XXX, since entity type and spawn egg meta are the same
	E_META_SPAWN_EGG_CREEPER       = 50,
	E_META_SPAWN_EGG_SKELETON      = 51,
	E_META_SPAWN_EGG_SPIDER        = 52,
	E_META_SPAWN_EGG_ZOMBIE        = 54,
	E_META_SPAWN_EGG_GIANT         = 53,
	E_META_SPAWN_EGG_SLIME         = 55,
	E_META_SPAWN_EGG_GHAST         = 56,
	E_META_SPAWN_EGG_ZOMBIE_PIGMAN = 57,
	E_META_SPAWN_EGG_ENDERMAN      = 58,
	E_META_SPAWN_EGG_CAVE_SPIDER   = 59,
	E_META_SPAWN_EGG_SILVERFISH    = 60,
	E_META_SPAWN_EGG_BLAZE         = 61,
	E_META_SPAWN_EGG_MAGMA_CUBE    = 62,
	E_META_SPAWN_EGG_ENDER_DRAGON  = 63,
	E_META_SPAWN_EGG_PIG           = 90,
	E_META_SPAWN_EGG_SHEEP         = 91,
	E_META_SPAWN_EGG_COW           = 92,
	E_META_SPAWN_EGG_CHICKEN       = 93,
	E_META_SPAWN_EGG_SQUID         = 94,
	E_META_SPAWN_EGG_WOLF          = 95,
	E_META_SPAWN_EGG_MOOSHROOM     = 96,
	E_META_SPAWN_EGG_SNOW_GOLEM    = 97,
	E_META_SPAWN_EGG_OCELOT        = 98,
	E_META_SPAWN_EGG_IRON_GOLEM    = 99,
	E_META_SPAWN_EGG_VILLAGER      = 120,
} ;




enum
{
	// See also E_META_SPAWN_EGG_XXX, since entity type and spawn egg meta are the same
	E_ENTITY_TYPE_CREEPER       = 50,
	E_ENTITY_TYPE_SKELETON      = 51,
	E_ENTITY_TYPE_SPIDER        = 52,
	E_ENTITY_TYPE_GIANT         = 53,
	E_ENTITY_TYPE_ZOMBIE        = 54,
	E_ENTITY_TYPE_SLIME         = 55,
	E_ENTITY_TYPE_GHAST         = 56,
	E_ENTITY_TYPE_ZOMBIE_PIGMAN = 57,
	E_ENTITY_TYPE_ENDERMAN      = 58,
	E_ENTITY_TYPE_CAVE_SPIDER   = 59,
	E_ENTITY_TYPE_SILVERFISH    = 60,
	E_ENTITY_TYPE_BLAZE         = 61,
	E_ENTITY_TYPE_MAGMA_CUBE    = 62,
	E_ENTITY_TYPE_ENDER_DRAGON  = 63,
	E_ENTITY_TYPE_WITHER        = 64,
	E_ENTITY_TYPE_BAT           = 65,
	E_ENTITY_TYPE_WITCH         = 66,
	E_ENTITY_TYPE_PIG           = 90,
	E_ENTITY_TYPE_SHEEP         = 91,
	E_ENTITY_TYPE_COW           = 92,
	E_ENTITY_TYPE_CHICKEN       = 93,
	E_ENTITY_TYPE_SQUID         = 94,
	E_ENTITY_TYPE_WOLF          = 95,
	E_ENTITY_TYPE_MOOSHROOM     = 96,
	E_ENTITY_TYPE_SNOW_GOLEM    = 97,
	E_ENTITY_TYPE_OCELOT        = 98,
	E_ENTITY_TYPE_IRON_GOLEM    = 99,
	E_ENTITY_TYPE_VILLAGER      = 120,
} ;




enum eDimension
{
	dimNether    = -1,
	dimOverworld = 0,
	dimEnd       = 1,
} ;





/// Damage type, used in the TakeDamageInfo structure and related functions
enum eDamageType
{
	// Canonical names for the types (as documented in the plugin wiki):
	dtAttack,           // Being attacked by a mob
	dtLightning,        // Hit by a lightning strike
	dtFalling,          // Falling down; dealt when hitting the ground
	dtDrowning,         // Drowning in water / lava
	dtSuffocating,      // Suffocating inside a block
	dtStarving,         // Hunger
	dtCactusContact,    // Contact with a cactus block
	dtLavaContact,      // Contact with a lava block
	dtPoisoning,        // Having the poison effect
	dtOnFire,           // Being on fire
	dtFireContact,      // Standing inside a fire block
	dtInVoid,           // Falling into the Void (Y < 0)
	dtPotionOfHarming,
	dtAdmin,            // Damage applied by an admin command
	
	// Some common synonyms:
	dtPawnAttack   = dtAttack,
	dtEntityAttack = dtAttack,
	dtMob          = dtAttack,
	dtMobAttack    = dtAttack,
	dtFall         = dtFalling,
	dtDrown        = dtDrowning,
	dtSuffocation  = dtSuffocating,
	dtStarvation   = dtStarving,
	dtHunger       = dtStarving,
	dtCactus       = dtCactusContact,
	dtCactuses     = dtCactusContact,
	dtCacti        = dtCactusContact,
	dtLava         = dtLavaContact,
	dtPoison       = dtPoisoning,
	dtBurning      = dtOnFire,
	dtInFire       = dtFireContact,
	dtPlugin       = dtAdmin,
} ;

// tolua_end




// fwd: cItem.h:
class cItem;





// tolua_begin

/// Translates a blocktype string into blocktype. Takes either a number or an items.ini alias as input. Returns -1 on failure.
extern BLOCKTYPE BlockStringToType(const AString & a_BlockTypeString);

/// Translates an itemtype string into an item. Takes either a number, number^number, number:number or an items.ini alias as input. Returns true if successful.
extern bool StringToItem(const AString & a_ItemTypeString, cItem & a_Item);

/// Translates a full item into a string. If the ItemType is not recognized, the ItemType number is output into the string.
extern AString ItemToString(const cItem & a_Item);

/// Translates itemtype into a string. If the type is not recognized, the itemtype number is output into the string.
extern AString ItemTypeToString(short a_ItemType);

/// Translates a full item into a fully-specified string (including meta and count). If the ItemType is not recognized, the ItemType number is output into the string.
extern AString ItemToFullString(const cItem & a_Item);

/// Translates a biome string to biome enum. Takes either a number or a biome alias (built-in). Returns -1 on failure.
extern EMCSBiome StringToBiome(const AString & a_BiomeString);

/// Translates a mob string ("ocelot") to mobtype (E_ENTITY_TYPE_OCELOT)
extern int StringToMobType(const AString & a_MobString);

/// Translates a dimension string to dimension enum. Takes either a number or a dimension alias (built-in). Returns -1000 on failure
extern eDimension StringToDimension(const AString & a_DimensionString);

/// Translates damage type constant to a string representation (built-in).
extern AString DamageTypeToString(eDamageType a_DamageType);

/// Translates a damage type string to damage type. Takes either a number or a damage type alias (built-in). Returns -1 on failure
extern eDamageType StringToDamageType(const AString & a_DamageString);

// tolua_end





// Block properties:
extern NIBBLETYPE g_BlockLightValue[256];
extern NIBBLETYPE g_BlockSpreadLightFalloff[256];
extern bool       g_BlockTransparent[256];
extern bool       g_BlockOneHitDig[256];
extern bool       g_BlockPistonBreakable[256];
extern bool       g_BlockIsSnowable[256];
extern bool       g_BlockRequiresSpecialTool[256];
extern bool       g_BlockIsSolid[256];





