#pragma once
#include <SFML/Graphics.hpp>

// Axial directions for flat-topped hexes (q, r)
struct HexDirection {
    int dq;
    int dr;
    const char* name;
};

// 6 directions for flat-topped hexes
static const HexDirection HEX_DIRECTIONS[6] = {
    {+1,  0, "East"},
    { 0, +1, "Southeast"},
    {-1, +1, "Southwest"},
    {-1,  0, "West"},
    { 0, -1, "Northwest"},
    {+1, -1, "Northeast"}
};

// Axial to pixel (screen) conversion for flat-topped hexes
inline sf::Vector2f hexToPixel(int q, int r, float hexSize) {
    float x = hexSize * (3.0f/2.0f * q);
    float y = hexSize * (sqrt(3.0f) * (r + q/2.0f));
    return sf::Vector2f(x, y);
}

// Add more helpers as needed (distance, neighbor, etc.)