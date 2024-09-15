#include <iostream>
#include <string>
#include <fstream>
#include "World.h"
#include "Characters.h"
#include "Game.h"
#include <cstdlib> 
using namespace std;




Game::Game(){
    character = Characters();
    V = character.getLives();
    marioCoins = 0;
    marioPowerLevel = 0;
    marioRow = rand()% character.getDimensions(); 
    marioCol = rand()% character.getDimensions();
    currLevel = 0;
}
Game::~Game(){

}

void Game::Play(){
    //std::cout << x << " og x " << y << " og y " << endl;
    newWorld.placeMario(currLevel,marioRow, marioCol);
    newWorld.printWorld();
}

void Game::Direction(){
    int r = rand() % 100;
    std::cout << marioRow << " og row" << endl;
    std::cout << marioCol << " og col" << endl;
    //cout << character.getDimensions();
    //marioRow= (marioCol + 1 ) % character.getDimensions();
    marioCol = ((marioRow - 1) % character.getDimensions());
    std::cout <<  marioRow << " new row" << endl;
    std::cout << marioCol << " new col" << endl;
    
    /*if(r <= 25){ // move to the right
        marioRow= (marioCol +1 )% characters.getDimensions();
    }*/
}


