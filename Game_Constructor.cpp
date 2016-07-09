#include "Game.hpp"

Game::Game()
{
    window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "SlavMythVania");
    window.setFramerateLimit(60);
}

Game::~Game()
{
    while(!(states.empty()))
        popState();
}
