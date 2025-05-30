// Game.cpp
#include "Game.hpp"

Game::Game()
    : window(sf::VideoMode(sf::Vector2u(800, 600), 32), "SFML 3 Game")

{
    rectangle.setSize({200.f, 100.f});
    rectangle.setFillColor(sf::Color::Red);
    rectangle.setPosition({300.f, 250.f});
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
