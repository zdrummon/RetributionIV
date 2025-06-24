#pragma once
#include "HexTile.hpp"
#include "HexMath.hpp"
#include <vector>

class WorldChunk {
public:
    WorldChunk(int width, int depth);
    HexTile& at(int x, int y);

private:
    int width;
    int depth;
    std::vector<std::vector<HexTile>> tiles;
};