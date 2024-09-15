#ifndef MARIO_H
#define MARIO_H
#include <string>
#include "Characters.h"
#include "World.h"

class Mario{
    public:
        Mario();
        ~Mario();
        int getPowerLevel();
        int getMarioCoins();
        char getMarioPosition();
        int x;
        int y;
        int currLevel;
        int getX();
        int getY();


    private:
        int V;
        int powerLevel;
        Characters characters;
        int marioCoins;
        

        




};
#endif 