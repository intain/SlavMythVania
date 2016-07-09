#include "Game.hpp"
void Game::pushState(GameState* state)
{
    states.push(state);
}

void Game::popState()
{
    if(!(states.empty()))
    {
        delete states.top();
        states.pop();
    }
}

void Game::changeState(GameState* state)
{
    popState();
    pushState(state);
}

GameState* Game::peekState()
{
    if(states.empty())
        return nullptr;
    return states.top();


}
