#pragma once

struct Player {
    Player();
    // Player's current position in the world
    int chunkX = 0;
    int chunkY = 0;
    int chunkZ = 0;
    int tileX = 0;
    int tileY = 0;
};