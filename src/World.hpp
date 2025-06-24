#pragma once
#include "WorldChunk.hpp"
#include <map>
#include <tuple>

class World {
public:
    // Number of tiles per edge in a chunk
    static constexpr int chunkSize = 128;
    World();

    // Access a tile by chunk and tile coordinates (3D)
    HexTile& at(int chunkX, int chunkY, int chunkZ, int tileX, int tileY);

private:
    // Map from (chunkX, chunkY, chunkZ) to WorldChunk
    std::map<std::tuple<int, int, int>, WorldChunk> chunks;
};