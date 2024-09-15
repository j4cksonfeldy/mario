#ifndef GAME_H
#define GAME_H
#include <string>
#include "World.h"
#include "Characters.h"


class Game{
    public:
        Game();
        ~Game();
        void Play();
        void Direction();
    
    private:
        Characters character;
        World newWorld;
        
        char*** game;
        int levels;
        int dimensions;
        int lives;
        int coins;
        int nothing;                                                
        int goombas;
        int koopas;
        int mushrooms;
        int V;
        int marioPowerLevel;
        int marioCoins;
        int currLevel;
        int marioRow;
        int marioCol;
};
#endif