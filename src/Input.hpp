#pragma once
#include <SFML/Window/Event.hpp>

struct InputState {
    bool moveUp = false;
    bool moveDown = false;
    bool moveUpLeft = false;
    bool moveUpRight = false;
    bool moveDownLeft = false;
    bool moveDownRight = false;
    // Add more actions as needed
};

// You can add functions here to process SFML events and update InputState