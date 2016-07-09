#ifndef GAME_HPP_INCLUDED
#define GAME_HPP_INCLUDED

#include "stack"
#include "SFML/Graphics.hpp"

const int WINDOW_WIDTH = 800, WINDOW_HEIGHT = 600;

class GameState;

class Game
{
    private:
        std::stack<GameState*> states;

    public:
        sf::RenderWindow window;

    // ## STATE MANAGEMENT ####
        void pushState(GameState* state);
        void popState();
        void changeState(GameState* state);
        GameState* peekState();

    // ## MAIN LOOP #####
        void run();

    // ## CON & DESTRUCTOR ####
        Game();
        ~Game();
};

#endif // GAME_HPP_INCLUDED
