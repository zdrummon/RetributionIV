#include "World.hpp"

World::World() {
    // Hard-code a single chunk at (0, 0, 0)
    chunks[std::make_tuple(0, 0, 0)] = WorldChunk(chunkSize, chunkSize);
}

HexTile& World::at(int chunkX, int chunkY, int chunkZ, int tileX, int tileY) {
    // Always use the single chunk for MVP
    return chunks[std::make_tuple(0, 0, 0)].at(tileX, tileY);
}