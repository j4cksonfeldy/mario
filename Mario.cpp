#include <iostream>
#include <string>
#include <fstream>
#include "Mario.h"
#include "World.h"
using namespace std;


Mario::Mario(){
    characters = Characters();
    V = characters.getLives();
    marioCoins = 0;
    powerLevel = 0;
    x = rand()% characters.getDimensions(); 
    y = rand()% characters.getDimensions();
    currLevel = 0;
    
    //xCoordinate = (yCoordinate +1)% # of cols (move right(subtract for left))
    // y coordinate = (x+1)% # of rows move funct, if he has to move up, but hes in the first row, he will go to the last row
}

Mario::~Mario(){

}

int Mario::getPowerLevel(){
    return powerLevel;
}

int Mario::getMarioCoins(){
    return marioCoins;
}

int Mario::getX(){
    return x;
}

int Mario::getY(){
    return y;
}
