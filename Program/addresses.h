#ifndef ADDRESSES_H_INCLUDED
#define ADDRESSES_H_INCLUDED

// CONSTANTS
// Pedestals
#define ENEMY_FLAG_WIDTH 1
#define ITEMID_WIDTH 4
#define NUMBER_PEDESTALS 124
#define NUMBER_KEYITEMS 8
#define NUMBER_DSSCARDS 20


// Enemy drop
#define NUMBER_ENEMIES 141 /* Technically should be 142, but the last one doesn't matter so we leave it out. */
#define NUMBER_ITEMS 55
#define NUMBER_ITEMS_INCLUDING_DSS 75
#define CONSTANT_ENEMY_DATA_LENGTH 20
#define DROP_WIDTH 2
#define OFFSET_TO_ENEMYDROPS 12

//#define ENEMY_FLAG_TRICKCANDLE 0xB3
//#define ENEMY_FLAG_SCARYCANDLE 0xB5

// ITEMS
// Key Items
#define KEYITEM_DASHBOOTS { 0xE8, 0x01, 0x00, 0x00 }
#define KEYITEM_DOUBLE { 0xE8, 0x01, 0x01, 0x00 }
#define KEYITEM_TACKLE { 0xE8, 0x01, 0x02, 0x00 }
#define KEYITEM_KICKBOOTS { 0xE8, 0x01, 0x03, 0x00 }
#define KEYITEM_HEAVYRING { 0xE8, 0x01, 0x04, 0x00 }
#define KEYITEM_CLEANSING { 0xE8, 0x01, 0x06, 0x00 }
#define KEYITEM_ROCWING { 0xE8, 0x01, 0x07, 0x00 }
#define KEYITEM_LASTKEY { 0xE8, 0x01, 0x08, 0x00 }
#define KEYITEM_MAP { 0xE8, 0x01, 0x05, 0x00 } // Actually comes between Heavy Ring and Cleansing, but is cut content

// Max Ups
#define MAXUP_HEARTMAXUP { 0xE4, 0x01, 0x00, 0x00 }
#define MAXUP_HPMAXUP { 0xE4, 0x01, 0x01, 0x00 }
#define MAXUP_MPMAXUP { 0xE4, 0x01, 0x02, 0x00 }

// "Shinning" Armor
#define SPECIALITEM_SHINNINGARMOR { 0xE7, 0x01, 0x00, 0x00 }

// DSS Cards
#define DSSCARD_SALAMANDER { 0xE6, 0x01, 0x00, 0x00 }
#define DSSCARD_SERPENT { 0xE6, 0x01, 0x01, 0x00 }
#define DSSCARD_MANDRAGORA { 0xE6, 0x01, 0x02, 0x00 }
#define DSSCARD_GOLEM { 0xE6, 0x01, 0x03, 0x00 }
#define DSSCARD_COCKATRICE { 0xE6, 0x01, 0x04, 0x00 }
#define DSSCARD_MANTICORE { 0xE6, 0x01, 0x05, 0x00 }
#define DSSCARD_GRIFFIN { 0xE6, 0x01, 0x06, 0x00 }
#define DSSCARD_THUNDERBIRD { 0xE6, 0x01, 0x07, 0x00 }
#define DSSCARD_UNICORN { 0xE6, 0x01, 0x08, 0x00 }
#define DSSCARD_BLACKDOG { 0xE6, 0x01, 0x09, 0x00 }
#define DSSCARD_MERCURY { 0xE6, 0x01, 0x0A, 0x00 }
#define DSSCARD_VENUS { 0xE6, 0x01, 0x0B, 0x00 }
#define DSSCARD_JUPITER { 0xE6, 0x01, 0x0C, 0x00 }
#define DSSCARD_MARS { 0xE6, 0x01, 0x0D, 0x00 }
#define DSSCARD_DIANA { 0xE6, 0x01, 0x0E, 0x00 }
#define DSSCARD_APOLLO { 0xE6, 0x01, 0x0F, 0x00 }
#define DSSCARD_NEPTUNE { 0xE6, 0x01, 0x10, 0x00 }
#define DSSCARD_SATURN { 0xE6, 0x01, 0x11, 0x00 }
#define DSSCARD_URANUS { 0xE6, 0x01, 0x12, 0x00 }
#define DSSCARD_PLUTO { 0xE6, 0x01, 0x13, 0x00 }

// ADDRESSES
// Boss Room Candle Addresses
//#define ADDRESS_TRICKCANDLE_ENEMY_FLAG 0x000D7F18
//#define ADDRESS_SCARYCANDLE_ENEMY_FLAG 0x000D858C

// Enemy Data
#define ADDRESS_ENEMY_DATA_TABLE 0x000CB2B8

// Pedestal Item Value Addresses
#define ADDRESS_SEALED_ROOM3 0x000D0310
#define ADDRESS_CATACOMB1 0x000D0658
#define ADDRESS_CATACOMB3 0x000D0370
#define ADDRESS_CATACOMB3B 0x000D0364
#define ADDRESS_CATACOMB4 0x000D0934
#define ADDRESS_CATACOMB5 0x000D0DE4
#define ADDRESS_CATACOMB8 0x000D1078
#define ADDRESS_CATACOMB8B 0x000D1084
#define ADDRESS_CATACOMB9 0x000D0F94
#define ADDRESS_CATACOMB10 0x000D12C4
#define ADDRESS_CATACOMB13 0x000D0DA8
#define ADDRESS_CATACOMB14 0x000D1168
#define ADDRESS_CATACOMB14B 0x000D1174
#define ADDRESS_CATACOMB16 0x000D0C40
#define ADDRESS_CATACOMB20 0x000D103C
#define ADDRESS_CATACOMB22 0x000D07C0
#define ADDRESS_CATACOMB24 0x000D1288
#define ADDRESS_CATACOMB25 0x000D12A0
#define ADDRESS_ABYSS_STAIRWAY2 0x000D181C
#define ADDRESS_ABYSS_STAIRWAY3 0x000D1774
#define ADDRESS_ABYSS_STAIRWAY4 0x000D1678
#define ADDRESS_ABYSS_STAIRWAY9 0x000D17EC
#define ADDRESS_AUDIENCE_ROOM4 0x000D2344
#define ADDRESS_AUDIENCE_ROOM7 0x000D2368
#define ADDRESS_AUDIENCE_ROOM8 0x000D1BF4
#define ADDRESS_AUDIENCE_ROOM9 0x000D1E1C
#define ADDRESS_AUDIENCE_ROOM10 0x000D1DE0
#define ADDRESS_AUDIENCE_ROOM11 0x000D1E58
#define ADDRESS_AUDIENCE_ROOM14 0x000D2158
#define ADDRESS_AUDIENCE_ROOM14B 0x000D214C
#define ADDRESS_AUDIENCE_ROOM16 0x000D20BC
#define ADDRESS_AUDIENCE_ROOM17 0x000D2290
#define ADDRESS_AUDIENCE_ROOM17B 0x000D2284
#define ADDRESS_AUDIENCE_ROOM18 0x000D1FA8
#define ADDRESS_AUDIENCE_ROOM19 0x000D44A4
#define ADDRESS_AUDIENCE_ROOM21 0x000D238C
#define ADDRESS_AUDIENCE_ROOM25 0x000D1E04
#define ADDRESS_AUDIENCE_ROOM26 0x000D3370
#define ADDRESS_AUDIENCE_ROOM27 0x000D34E4
#define ADDRESS_AUDIENCE_ROOM30 0x000D6A24
#define ADDRESS_AUDIENCE_ROOM30B 0x000D6A30
#define ADDRESS_OUTER_WALL0 0x000D6BEC
#define ADDRESS_OUTER_WALL1 0x000D6CE8
#define ADDRESS_OUTER_WALL2 0x000D6DE4
#define ADDRESS_TRIUMPH_HALLWAY1 0x000D26D4
#define ADDRESS_TRIUMPH_HALLWAY3 0x000D23C8
#define ADDRESS_MACHINE_TOWER0 0x000D307C
#define ADDRESS_MACHINE_TOWER2 0x000D32A4
#define ADDRESS_MACHINE_TOWER3 0x000D3244
#define ADDRESS_MACHINE_TOWER4 0x000D31FC
#define ADDRESS_MACHINE_TOWER6 0x000D2F38
#define ADDRESS_MACHINE_TOWER8 0x000D2EC0
#define ADDRESS_MACHINE_TOWER10 0x000D3550
#define ADDRESS_MACHINE_TOWER11 0x000D2D88
#define ADDRESS_MACHINE_TOWER13 0x000D3580
#define ADDRESS_MACHINE_TOWER14 0x000D2A64
#define ADDRESS_MACHINE_TOWER17 0x000D3520
#define ADDRESS_MACHINE_TOWER19 0x000D283C
#define ADDRESS_ETERNAL_CORRIDOR5 0x000D3B50
#define ADDRESS_ETERNAL_CORRIDOR7 0x000D3A90
#define ADDRESS_ETERNAL_CORRIDOR9 0x000D3B98
#define ADDRESS_CHAPEL_TOWER1 0x000D40F0
#define ADDRESS_CHAPEL_TOWER4 0x000D4630
#define ADDRESS_CHAPEL_TOWER5 0x000D481C
#define ADDRESS_CHAPEL_TOWER6 0x000D4294
#define ADDRESS_CHAPEL_TOWER6B 0x000D42A0
#define ADDRESS_CHAPEL_TOWER8 0x000D4330
#define ADDRESS_CHAPEL_TOWER10 0x000D415C
#define ADDRESS_CHAPEL_TOWER13 0x000D4060
#define ADDRESS_CHAPEL_TOWER15 0x000D47F8
#define ADDRESS_CHAPEL_TOWER16 0x000D3DA8
#define ADDRESS_CHAPEL_TOWER18 0x000D47C8
#define ADDRESS_CHAPEL_TOWER22 0x000D3CF4
#define ADDRESS_CHAPEL_TOWER26 0x000D6ACC
#define ADDRESS_CHAPEL_TOWER26B 0x000D6AC0
#define ADDRESS_UNDERGROUND_GALLERY0 0x000D5944
#define ADDRESS_UNDERGROUND_GALLERY1 0x000D5890
#define ADDRESS_UNDERGROUND_GALLERY2 0x000D5A1C
#define ADDRESS_UNDERGROUND_GALLERY3 0x000D56A4
#define ADDRESS_UNDERGROUND_GALLERY3B 0x000D5698
#define ADDRESS_UNDERGROUND_GALLERY8 0x000D5E30
#define ADDRESS_UNDERGROUND_GALLERY10 0x000D5F68
#define ADDRESS_UNDERGROUND_GALLERY13 0x000D5AB8
#define ADDRESS_UNDERGROUND_GALLERY15 0x000D5BD8
#define ADDRESS_UNDERGROUND_GALLERY20 0x000D5470
#define ADDRESS_UNDERGROUND_WAREHOUSE1 0x000D48DC
#define ADDRESS_UNDERGROUND_WAREHOUSE6 0x000D4D20
#define ADDRESS_UNDERGROUND_WAREHOUSE8 0x000D4BA0
#define ADDRESS_UNDERGROUND_WAREHOUSE9 0x000D53EC
#define ADDRESS_UNDERGROUND_WAREHOUSE10 0x000D4C84
#define ADDRESS_UNDERGROUND_WAREHOUSE11 0x000D4EC4
#define ADDRESS_UNDERGROUND_WAREHOUSE14 0x000D5410
#define ADDRESS_UNDERGROUND_WAREHOUSE16 0x000D5050
#define ADDRESS_UNDERGROUND_WAREHOUSE16B 0x000D505C
#define ADDRESS_UNDERGROUND_WAREHOUSE19 0x000D5344
#define ADDRESS_UNDERGROUND_WAREHOUSE23 0x000D53B0
#define ADDRESS_UNDERGROUND_WAREHOUSE24 0x000D5434
#define ADDRESS_UNDERGROUND_WAREHOUSE25 0x000D4FC0
#define ADDRESS_UNDERGROUND_WATERWAY1 0x000D5F98
#define ADDRESS_UNDERGROUND_WATERWAY3 0x000D5FEC
#define ADDRESS_UNDERGROUND_WATERWAY3B 0x000D5FE0
#define ADDRESS_UNDERGROUND_WATERWAY4 0x000D697C
#define ADDRESS_UNDERGROUND_WATERWAY5 0x000D6214
#define ADDRESS_UNDERGROUND_WATERWAY7 0x000D65A4
#define ADDRESS_UNDERGROUND_WATERWAY8 0x000D69A0
#define ADDRESS_UNDERGROUND_WATERWAY9 0x000D640C
#define ADDRESS_UNDERGROUND_WATERWAY9B 0x000D6418
#define ADDRESS_UNDERGROUND_WATERWAY12 0x000D673C
#define ADDRESS_UNDERGROUND_WATERWAY12B 0x000D6730
#define ADDRESS_UNDERGROUND_WATERWAY13 0x000D685C
#define ADDRESS_UNDERGROUND_WATERWAY17 0x000D6940
#define ADDRESS_UNDERGROUND_WATERWAY18 0x000D69C4
#define ADDRESS_OBSERVATION_TOWER1 0x000D6B38
#define ADDRESS_OBSERVATION_TOWER2 0x000D760C
#define ADDRESS_OBSERVATION_TOWER3 0x000D72E8
#define ADDRESS_OBSERVATION_TOWER5 0x000D75E8
#define ADDRESS_OBSERVATION_TOWER8 0x000D71EC
#define ADDRESS_OBSERVATION_TOWER9 0x000D6FE8
#define ADDRESS_OBSERVATION_TOWER12 0x000D75C4
#define ADDRESS_OBSERVATION_TOWER13 0x000D6F64
#define ADDRESS_OBSERVATION_TOWER16 0x000D751C
#define ADDRESS_OBSERVATION_TOWER20 0x000D6E20
#define ADDRESS_CEREMONIAL_ROOM1 0x000D7690
#define ADDRESS_BATTLEARENA24 0x000D7D20

// INDEXES
// Items
#define INDEX_KEYITEM_DASHBOOTS 0
#define INDEX_KEYITEM_DOUBLE 1
#define INDEX_KEYITEM_TACKLE 2
#define INDEX_KEYITEM_KICKBOOTS 3
#define INDEX_KEYITEM_HEAVYRING 4
#define INDEX_KEYITEM_CLEANSING 5
#define INDEX_KEYITEM_ROCWING 6
#define INDEX_KEYITEM_LASTKEY 7
#define INDEX_KEYITEM_MAP 8
#define INDEX_MAXUP_HEARTMAXUP 9
#define INDEX_MAXUP_HPMAXUP 10
#define INDEX_MAXUP_MPMAXUP 11
#define INDEX_SPECIALITEM_SHINNINGARMOR 12

// DSS Cards
#define INDEX_DSSCARD_SALAMANDER 0
#define INDEX_DSSCARD_SERPENT 1
#define INDEX_DSSCARD_MANDRAGORA 2
#define INDEX_DSSCARD_GOLEM 3
#define INDEX_DSSCARD_COCKATRICE 4
#define INDEX_DSSCARD_MANTICORE 5
#define INDEX_DSSCARD_GRIFFIN 6
#define INDEX_DSSCARD_THUNDERBIRD 7
#define INDEX_DSSCARD_UNICORN 8
#define INDEX_DSSCARD_BLACKDOG 9
#define INDEX_DSSCARD_MERCURY 10
#define INDEX_DSSCARD_VENUS 11
#define INDEX_DSSCARD_JUPITER 12
#define INDEX_DSSCARD_MARS 13
#define INDEX_DSSCARD_DIANA 14
#define INDEX_DSSCARD_APOLLO 15
#define INDEX_DSSCARD_NEPTUNE 16
#define INDEX_DSSCARD_SATURN 17
#define INDEX_DSSCARD_URANUS 18
#define INDEX_DSSCARD_PLUTO 19

// Item Pedestals
#define INDEX_SEALED_ROOM3 0
#define INDEX_CATACOMB1 1
#define INDEX_CATACOMB3 2
#define INDEX_CATACOMB3B 3
#define INDEX_CATACOMB4 4
#define INDEX_CATACOMB5 5
#define INDEX_CATACOMB8 6
#define INDEX_CATACOMB8B 7
#define INDEX_CATACOMB9 8
#define INDEX_CATACOMB10 9
#define INDEX_CATACOMB13 10
#define INDEX_CATACOMB14 11
#define INDEX_CATACOMB14B 12
#define INDEX_CATACOMB16 13
#define INDEX_CATACOMB20 14
#define INDEX_CATACOMB22 15
#define INDEX_CATACOMB24 16
#define INDEX_CATACOMB25 17
#define INDEX_ABYSS_STAIRWAY2 18
#define INDEX_ABYSS_STAIRWAY3 19
#define INDEX_ABYSS_STAIRWAY4 20
#define INDEX_ABYSS_STAIRWAY9 21
#define INDEX_AUDIENCE_ROOM4 22
#define INDEX_AUDIENCE_ROOM7 23
#define INDEX_AUDIENCE_ROOM8 24
#define INDEX_AUDIENCE_ROOM9 25
#define INDEX_AUDIENCE_ROOM10 26
#define INDEX_AUDIENCE_ROOM11 27
#define INDEX_AUDIENCE_ROOM14 28
#define INDEX_AUDIENCE_ROOM14B 29
#define INDEX_AUDIENCE_ROOM16 30
#define INDEX_AUDIENCE_ROOM17 31
#define INDEX_AUDIENCE_ROOM17B 32
#define INDEX_AUDIENCE_ROOM18 33
#define INDEX_AUDIENCE_ROOM19 34
#define INDEX_AUDIENCE_ROOM21 35
#define INDEX_AUDIENCE_ROOM25 36
#define INDEX_AUDIENCE_ROOM26 37
#define INDEX_AUDIENCE_ROOM27 38
#define INDEX_AUDIENCE_ROOM30 39
#define INDEX_AUDIENCE_ROOM30B 40
#define INDEX_OUTER_WALL0 41
#define INDEX_OUTER_WALL1 42
#define INDEX_OUTER_WALL2 43
#define INDEX_TRIUMPH_HALLWAY1 44
#define INDEX_TRIUMPH_HALLWAY3 45
#define INDEX_MACHINE_TOWER0 46
#define INDEX_MACHINE_TOWER2 47
#define INDEX_MACHINE_TOWER3 48
#define INDEX_MACHINE_TOWER4 49
#define INDEX_MACHINE_TOWER6 50
#define INDEX_MACHINE_TOWER8 51
#define INDEX_MACHINE_TOWER10 52
#define INDEX_MACHINE_TOWER11 53
#define INDEX_MACHINE_TOWER13 54
#define INDEX_MACHINE_TOWER14 55
#define INDEX_MACHINE_TOWER17 56
#define INDEX_MACHINE_TOWER19 57
#define INDEX_ETERNAL_CORRIDOR5 58
#define INDEX_ETERNAL_CORRIDOR7 59
#define INDEX_ETERNAL_CORRIDOR9 60
#define INDEX_CHAPEL_TOWER1 61
#define INDEX_CHAPEL_TOWER4 62
#define INDEX_CHAPEL_TOWER5 63
#define INDEX_CHAPEL_TOWER6 64
#define INDEX_CHAPEL_TOWER6B 65
#define INDEX_CHAPEL_TOWER8 66
#define INDEX_CHAPEL_TOWER10 67
#define INDEX_CHAPEL_TOWER13 68
#define INDEX_CHAPEL_TOWER15 69
#define INDEX_CHAPEL_TOWER16 70
#define INDEX_CHAPEL_TOWER18 71
#define INDEX_CHAPEL_TOWER22 72
#define INDEX_CHAPEL_TOWER26 73
#define INDEX_CHAPEL_TOWER26B 74
#define INDEX_UNDERGROUND_GALLERY0 75
#define INDEX_UNDERGROUND_GALLERY1 76
#define INDEX_UNDERGROUND_GALLERY2 77
#define INDEX_UNDERGROUND_GALLERY3 78
#define INDEX_UNDERGROUND_GALLERY3B 79
#define INDEX_UNDERGROUND_GALLERY8 80
#define INDEX_UNDERGROUND_GALLERY10 81
#define INDEX_UNDERGROUND_GALLERY13 82
#define INDEX_UNDERGROUND_GALLERY15 83
#define INDEX_UNDERGROUND_GALLERY20 84
#define INDEX_UNDERGROUND_WAREHOUSE1 85
#define INDEX_UNDERGROUND_WAREHOUSE6 86
#define INDEX_UNDERGROUND_WAREHOUSE8 87
#define INDEX_UNDERGROUND_WAREHOUSE9 88
#define INDEX_UNDERGROUND_WAREHOUSE10 89
#define INDEX_UNDERGROUND_WAREHOUSE11 90
#define INDEX_UNDERGROUND_WAREHOUSE14 91
#define INDEX_UNDERGROUND_WAREHOUSE16 92
#define INDEX_UNDERGROUND_WAREHOUSE16B 93
#define INDEX_UNDERGROUND_WAREHOUSE19 94
#define INDEX_UNDERGROUND_WAREHOUSE23 95
#define INDEX_UNDERGROUND_WAREHOUSE24 96
#define INDEX_UNDERGROUND_WAREHOUSE25 97
#define INDEX_UNDERGROUND_WATERWAY1 98
#define INDEX_UNDERGROUND_WATERWAY3 99
#define INDEX_UNDERGROUND_WATERWAY3B 100
#define INDEX_UNDERGROUND_WATERWAY4 101
#define INDEX_UNDERGROUND_WATERWAY5 102
#define INDEX_UNDERGROUND_WATERWAY7 103
#define INDEX_UNDERGROUND_WATERWAY8 104
#define INDEX_UNDERGROUND_WATERWAY9 105
#define INDEX_UNDERGROUND_WATERWAY9B 106
#define INDEX_UNDERGROUND_WATERWAY12 107
#define INDEX_UNDERGROUND_WATERWAY12B 108
#define INDEX_UNDERGROUND_WATERWAY13 109
#define INDEX_UNDERGROUND_WATERWAY17 110
#define INDEX_UNDERGROUND_WATERWAY18 111
#define INDEX_OBSERVATION_TOWER1 112
#define INDEX_OBSERVATION_TOWER2 113
#define INDEX_OBSERVATION_TOWER3 114
#define INDEX_OBSERVATION_TOWER5 115
#define INDEX_OBSERVATION_TOWER8 116
#define INDEX_OBSERVATION_TOWER9 117
#define INDEX_OBSERVATION_TOWER12 118
#define INDEX_OBSERVATION_TOWER13 119
#define INDEX_OBSERVATION_TOWER16 120
#define INDEX_OBSERVATION_TOWER20 121
#define INDEX_CEREMONIAL_ROOM1 122
#define INDEX_BATTLEARENA24 123

// Dropped Items
#define INDEX_ITEM_NONE 0
#define INDEX_ITEM_BODY_LEATHERARMOR 1
#define INDEX_ITEM_BODY_BRONZEARMOR 2
#define INDEX_ITEM_BODY_GOLDARMOR 3
#define INDEX_ITEM_BODY_CHAINMAIL 4
#define INDEX_ITEM_BODY_STEELARMOR 5
#define INDEX_ITEM_BODY_PLATINUMARMOR 6
#define INDEX_ITEM_BODY_DIAMONDARMOR 7
#define INDEX_ITEM_BODY_MIRRORARMOR 8
#define INDEX_ITEM_BODY_NEEDLEARMOR 9
#define INDEX_ITEM_BODY_DARKARMOR 10
#define INDEX_ITEM_BODY_SHINNINGARMOR 11
#define INDEX_ITEM_BODY_COTTONROBE 12
#define INDEX_ITEM_BODY_SILKROBE 13
#define INDEX_ITEM_BODY_RAINBOWROBE 14
#define INDEX_ITEM_BODY_MAGICROBE 15
#define INDEX_ITEM_BODY_SAGEROBE 16
#define INDEX_ITEM_BODY_COTTONCLOTHES 17
#define INDEX_ITEM_BODY_PRISONGARB 18
#define INDEX_ITEM_BODY_STYLISHSUIT 19
#define INDEX_ITEM_BODY_NIGHTSUIT 20
#define INDEX_ITEM_BODY_NINJAGARB 21
#define INDEX_ITEM_BODY_SOLDIERFATIGUES 22
#define INDEX_ITEM_ARM_DOUBLEGRIPS 23
#define INDEX_ITEM_ARM_STARBRACELET 24
#define INDEX_ITEM_ARM_STRENGTHRING 25
#define INDEX_ITEM_ARM_HARDRING 26
#define INDEX_ITEM_ARM_INTELLIGENCERING 27
#define INDEX_ITEM_ARM_LUCKRING 28
#define INDEX_ITEM_ARM_CURSEDRING 29
#define INDEX_ITEM_ARM_STRENGTHARMBAND 30
#define INDEX_ITEM_ARM_DEFENSEARMBAND 31
#define INDEX_ITEM_ARM_SAGEARMBAND 32
#define INDEX_ITEM_ARM_GAMBLERARMBAND 33
#define INDEX_ITEM_ARM_WRISTBAND 34
#define INDEX_ITEM_ARM_GAUNTLET 35
#define INDEX_ITEM_ARM_ARMGUARD 36
#define INDEX_ITEM_ARM_MAGICGAUNTLET 37
#define INDEX_ITEM_ARM_MIRACLEARMBAND 38
#define INDEX_ITEM_ARM_TOYRING 39
#define INDEX_ITEM_ARM_BEARRING 40
#define INDEX_ITEM_USE_POTION 41
#define INDEX_ITEM_USE_MEAT 42
#define INDEX_ITEM_USE_SPICEDMEAT 43
#define INDEX_ITEM_USE_POTIONHIGH 44
#define INDEX_ITEM_USE_POTIONEX 45
#define INDEX_ITEM_USE_ANTIDOTE 46
#define INDEX_ITEM_USE_CURECURSE 47
#define INDEX_ITEM_USE_MINDRESTORE 48
#define INDEX_ITEM_USE_MINDHIGH 49
#define INDEX_ITEM_USE_MINDEX 50
#define INDEX_ITEM_USE_HEART 51
#define INDEX_ITEM_USE_HEARTHIGH 52
#define INDEX_ITEM_USE_HEARTEX 53
#define INDEX_ITEM_USE_HEARTMEGA 54
#define INDEX_ITEM_CARD_SALAMANDER 55
#define INDEX_ITEM_CARD_SERPENT 56
#define INDEX_ITEM_CARD_MANDRAGORA 57
#define INDEX_ITEM_CARD_GOLEM 58
#define INDEX_ITEM_CARD_COCKATRICE 59
#define INDEX_ITEM_CARD_MANTICORE 60
#define INDEX_ITEM_CARD_GRIFFIN 61
#define INDEX_ITEM_CARD_THUNDERBIRD 62
#define INDEX_ITEM_CARD_UNICORN 63
#define INDEX_ITEM_CARD_BLACKDOG 64
#define INDEX_ITEM_CARD_MERCURY 65
#define INDEX_ITEM_CARD_VENUS 66
#define INDEX_ITEM_CARD_JUPITER 67
#define INDEX_ITEM_CARD_MARS 68
#define INDEX_ITEM_CARD_DIANA 69
#define INDEX_ITEM_CARD_APOLLO 70
#define INDEX_ITEM_CARD_NEPTUNE 71
#define INDEX_ITEM_CARD_SATURN 72
#define INDEX_ITEM_CARD_URANUS 73
#define INDEX_ITEM_CARD_PLUTO 74

// Enemies
#define INDEX_ENEMY_MEDUSAHEAD 0
#define INDEX_ENEMY_ZOMBIE 1
#define INDEX_ENEMY_GHOUL 2
#define INDEX_ENEMY_WIGHT 3
#define INDEX_ENEMY_CLINKINGMAN 4
#define INDEX_ENEMY_ZOMBIETHIEF 5
#define INDEX_ENEMY_SKELETON 6
#define INDEX_ENEMY_SKELETONBOMBER 7
#define INDEX_ENEMY_ELECTRICSKELETON 8
#define INDEX_ENEMY_SKELETONSPEAR 9
#define INDEX_ENEMY_SKELETONBOOMERANG 10
#define INDEX_ENEMY_SKELETONSOLDIER 11
#define INDEX_ENEMY_SKELETONKNIGHT 12
#define INDEX_ENEMY_BONETOWER 13
#define INDEX_ENEMY_FLEAMAN 14
#define INDEX_ENEMY_POLTERGEIST 15
#define INDEX_ENEMY_BAT 16
#define INDEX_ENEMY_SPIRIT 17
#define INDEX_ENEMY_ECTOPLASM 18
#define INDEX_ENEMY_SPECTER 19
#define INDEX_ENEMY_AXEARMOR 20
#define INDEX_ENEMY_FLAMEARMOR 21
#define INDEX_ENEMY_FLAMEDEMON 22
#define INDEX_ENEMY_ICEARMOR 23
#define INDEX_ENEMY_THUNDERARMOR 24
#define INDEX_ENEMY_WINDARMOR 25
#define INDEX_ENEMY_EARTHARMOR 26
#define INDEX_ENEMY_POISONARMOR 27
#define INDEX_ENEMY_FORESTARMOR 28
#define INDEX_ENEMY_STONEARMOR 29
#define INDEX_ENEMY_ICEDEMON 30
#define INDEX_ENEMY_HOLYARMOR 31
#define INDEX_ENEMY_THUNDERDEMON 32
#define INDEX_ENEMY_DARKARMOR 33
#define INDEX_ENEMY_WINDDEMON 34
#define INDEX_ENEMY_BLOODYSWORD 35
#define INDEX_ENEMY_GOLEM 36
#define INDEX_ENEMY_EARTHDEMON 37
#define INDEX_ENEMY_WEREWOLF 38
#define INDEX_ENEMY_MANEATER 39
#define INDEX_ENEMY_DEVILTOWER 40
#define INDEX_ENEMY_SKELETONATHLETE 41
#define INDEX_ENEMY_HARPY 42
#define INDEX_ENEMY_SIREN 43
#define INDEX_ENEMY_IMP 44
#define INDEX_ENEMY_MUDMAN 45
#define INDEX_ENEMY_GARGOYLE 46
#define INDEX_ENEMY_SLIME 47
#define INDEX_ENEMY_FROZENSHADE 48
#define INDEX_ENEMY_HEATSHADE 49
#define INDEX_ENEMY_POISONWORM 50
#define INDEX_ENEMY_MYCONID 51
#define INDEX_ENEMY_WILLOWISP 52
#define INDEX_ENEMY_SPEARFISH 53
#define INDEX_ENEMY_MERMAN 54
#define INDEX_ENEMY_MINOTAUR 55
#define INDEX_ENEMY_WEREHORSE 56
#define INDEX_ENEMY_MARIONETTE 57
#define INDEX_ENEMY_GREMLIN 58
#define INDEX_ENEMY_HOPPER 59
#define INDEX_ENEMY_EVILPILLAR 60
#define INDEX_ENEMY_WEREPANTHER 61
#define INDEX_ENEMY_WEREJAGUAR 62
#define INDEX_ENEMY_BONEHEAD 63
#define INDEX_ENEMY_FOXARCHER 64
#define INDEX_ENEMY_FOXHUNTER 65
#define INDEX_ENEMY_WEREBEAR 66
#define INDEX_ENEMY_GRIZZLY 67
#define INDEX_ENEMY_CERBERUS 68
#define INDEX_ENEMY_BEASTDEMON 69
#define INDEX_ENEMY_ARCHDEMON 70
#define INDEX_ENEMY_DEMONLORD 71
#define INDEX_ENEMY_GORGON 72
#define INDEX_ENEMY_CATOBLEPAS 73
#define INDEX_ENEMY_SUCCUBUS 74
#define INDEX_ENEMY_FALLENANGEL 75
#define INDEX_ENEMY_NECROMANCER 76
#define INDEX_ENEMY_HYENA 77
#define INDEX_ENEMY_FISHHEAD 78
#define INDEX_ENEMY_DRYAD 79
#define INDEX_ENEMY_MIMICCANDLE 80
#define INDEX_ENEMY_BRAINFLOAT 81
#define INDEX_ENEMY_EVILHAND 82
#define INDEX_ENEMY_ABIONDARG 83
#define INDEX_ENEMY_IRONGOLEM 84
#define INDEX_ENEMY_DEVIL 85
#define INDEX_ENEMY_WITCH 86
#define INDEX_ENEMY_MUMMY 87
#define INDEX_ENEMY_HIPPOGRIFF 88
#define INDEX_ENEMY_ADRAMELECH 89
#define INDEX_ENEMY_ARACHNE 90
#define INDEX_ENEMY_DEATHMANTIS 91
#define INDEX_ENEMY_ALRAUNE 92
#define INDEX_ENEMY_KINGMOTH 93
#define INDEX_ENEMY_KILLERBEE 94
#define INDEX_ENEMY_ZOMBIEDRAGON 95
#define INDEX_ENEMY_LIZARDMAN 96
#define INDEX_ENEMY_FRANKEN 97
#define INDEX_ENEMY_LEGION 98
#define INDEX_ENEMY_DULLAHAN 99
#define INDEX_ENEMY_DEATH 100
#define INDEX_ENEMY_CAMILLA 101
#define INDEX_ENEMY_HUGH 102
#define INDEX_ENEMY_DRACULAI 103
#define INDEX_ENEMY_DRACULAII 104
#define INDEX_ENEMY_SKELETONMEDALIST 105
#define INDEX_ENEMY_BATTLEARENAWEREJAGUAR 106
#define INDEX_ENEMY_BATTLEARENAWEREWOLF 107
#define INDEX_ENEMY_BATTLEARENACATOBLEPAS 108
#define INDEX_ENEMY_BATTLEARENAHIPPOGRIFF 109
#define INDEX_ENEMY_BATLTEARENAWINDDEMON 110
#define INDEX_ENEMY_BATTLEARENAWITCH 111
#define INDEX_ENEMY_BATTLEARENASTONEARMOR 112
#define INDEX_ENEMY_BATTLEARENADEVILTOWER 113
#define INDEX_ENEMY_BATTLEARENASKELETON 114
#define INDEX_ENEMY_BATTLEARENASKELETONBOMBER 115
#define INDEX_ENEMY_BATTLEARENAELECTRICSKELETON 116
#define INDEX_ENEMY_BATTLEARENASKELETONSPEAR 117
#define INDEX_ENEMY_BATTLEARENAFLAMEDEMON 118
#define INDEX_ENEMY_BATTLEARENABONETOWER 119
#define INDEX_ENEMY_BATTLEARENAFOXHUNTER 120
#define INDEX_ENEMY_BATTLEARENAPOISONARMOR 121
#define INDEX_ENEMY_BATTLEARENABLOODYSWORD 122
#define INDEX_ENEMY_BATTLEARENAABIONDARG 123
#define INDEX_ENEMY_BATTLEARENALEGION 124
#define INDEX_ENEMY_BATTLEARENAMARIONETTE 125
#define INDEX_ENEMY_BATTLEARENAMINOTAUR 126
#define INDEX_ENEMY_BATTLEARENAARACHNE 127
#define INDEX_ENEMY_BATTLEARENASUCCUBUS 128
#define INDEX_ENEMY_BATTLEARENADEMONLORD 129
#define INDEX_ENEMY_BATTLEARENAALRAUNE 130
#define INDEX_ENEMY_BATTLEARENAHYENA 131
#define INDEX_ENEMY_BATTLEARENADEVILARMOR 132
#define INDEX_ENEMY_BATTLEARENAEVILPILLAR 133
#define INDEX_ENEMY_BATTLEARENAHOLYARMOR 134
#define INDEX_ENEMY_BATTLEARENADEVIL 135
#define INDEX_ENEMY_SCARYCANDLE 136
#define INDEX_ENEMY_TRICKCANDLE 137
#define INDEX_ENEMY_NIGHTMARE 138
#define INDEX_ENEMY_LILIM 139
#define INDEX_ENEMY_LILITH 140
#define INDEX_ENEMY_COFFIN 141 /* It exists, but inherits its drops and stats from the Mummy enemy type so we never use it. I think this just exists so the name "Coffin" appears when you attack it. -Malaert64 */

#endif
