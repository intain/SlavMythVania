#ifndef GAMESTATE_HPP_INCLUDED
#define GAMESTATE_HPP_INCLUDED

#include "Game.hpp"

class GameState
{
    protected:
        Game* game;

    public:
        virtual void update(const float dt) = 0;
        virtual void draw(const float dt) = 0;
        virtual void handleEvent(sf::Event event) = 0;
};

#endif // GAMESTATE_HPP_INCLUDED
