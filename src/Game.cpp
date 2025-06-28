// Game.cpp
#include "Game.hpp"
#include "GraphicsTools.hpp"
#include "World.hpp"
#include "Player.hpp"
#include "HexTile.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/System/Clock.hpp>

Game::Game()
    : window(sf::VideoMode(sf::Vector2u(800, 600), 32), "Retribution IV")

{
    float tileWidth = static_cast<float>(window.getSize().x) / World::chunkSize;
    float tileHeight = static_cast<float>(window.getSize().y) / World::chunkSize;
    float playerX = tileWidth * (player.tileX + World::chunkSize / 2);
    float playerY = tileHeight * (player.tileY + World::chunkSize / 2);

    rectangle.setSize({UNIT_SIZE, UNIT_SIZE});
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition({playerX - UNIT_SIZE / 2, playerY - UNIT_SIZE / 2});
}

void Game::run() {
    sf::Clock clock;
    while (window.isOpen()) {
        processEvents();
        sf::Time dt = clock.restart();
        update(dt);
        render();
    }
}

void Game::processEvents() {
    while (auto eventOpt = window.pollEvent()) {
        const sf::Event& event = *eventOpt;
        if (event.is<sf::Event::Closed>())
            window.close();
    }
}

void Game::update(sf::Time /*dt*/) {
    // Update game logic here (currently nothing)
}

void Game::render() {
    window.clear(sf::Color::Black);
    window.draw(rectangle);
    window.display();
}
