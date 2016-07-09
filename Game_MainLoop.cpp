#include "Game.hpp"

void Game::run()
{
    sf::Clock clock;

    while(window.isOpen())
    {
        float dt = clock.restart().asSeconds();

        window.clear(sf::Color::Black);

        sf::Event event;
        while(window.pollEvent(event))
            peekState()->handleEvent(event);
        peekState()->update(dt);
        peekState()->draw(dt);
        window.display();
    }
}
