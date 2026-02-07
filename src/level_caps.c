#include "global.h"
#include "event_data.h"
#include "level_caps.h"
#include "constants/flags.h"

// Level caps based on average team level of each gym leader (with offset)
// Gym 1 (Brock): Lv 12
// Gym 2 (Misty): Lv 18
// Gym 3 (Lt. Surge): Lv 19
// Gym 4 (Erika): Lv 25
// Gym 5 (Koga): Lv 36
// Gym 6 (Sabrina): Lv 36
// Gym 7 (Blaine): Lv 38
// Gym 8 (Giovanni): Lv 41
// Champion (Blue): Lv 54
static const u8 sBadgeLevelCaps[NUM_BADGES + 1] = {
    [0] = 12,  // Before any badges
    [1] = 18,  // After Badge 1
    [2] = 19,  // After Badge 2
    [3] = 25,  // After Badge 3
    [4] = 36,  // After Badge 4
    [5] = 36,  // After Badge 5
    [6] = 38,  // After Badge 6
    [7] = 41,  // After Badge 7
    [8] = 54,  // After Badge 8, before Champion
};

u8 GetCurrentLevelCap(void)
{
    u8 i;
    u8 badgeCount = 0;

    // If player is champion, no level cap
    if (FlagGet(FLAG_SYS_GAME_CLEAR))
        return MAX_LEVEL;

    // Count badges
    for (i = 0; i < NUM_BADGES; i++)
    {
        if (FlagGet(FLAG_BADGE01_GET + i))
            badgeCount++;
    }

    return sBadgeLevelCaps[badgeCount];
}
