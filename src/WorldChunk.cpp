#include "WorldChunk.hpp"

//Default constructor
WorldChunk::WorldChunk()
    : width(0), depth(0)
{}

WorldChunk::WorldChunk(int width, int depth)
    : width(width), depth(depth), tiles(width, std::vector<HexTile>(depth))
{
    // Initialize each HexTile with default values
    for (int x = 0; x < width; ++x) {
        for (int y = 0; y < depth; ++y) {
            tiles[x][y].x = 0;
            tiles[x][y].y = 0;
            tiles[x][y].elevation = 0; 
        }
    }
}

HexTile& WorldChunk::at(int x, int y) {
    return tiles[x][y];
}