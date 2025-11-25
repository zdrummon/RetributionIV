// Game.hpp
#pragma once
#include <SFML/Graphics.hpp>
#include "Player.hpp"
#include "World.hpp"
#include "GraphicsTools.hpp"

class Game {
public:
    Game();
    void run();

private:
    void processEvents();
    void update(sf::Time dt);
    void render();

    sf::RenderWindow window;
    sf::RectangleShape rectangle;
    Player player;
    World world;
};