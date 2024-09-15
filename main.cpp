#include <iostream>
#include <string>
#include <fstream>
#include "World.h"
#include <cstdlib> 
//#include "Mario.h"
#include "Characters.h"
#include "World.h"
#include "Game.h"
using namespace std;

int main(int argc, char* argv[]){
    Characters positions;
    positions.loadInfo();
    //std::string input = argv[1];
    std::srand(static_cast<unsigned>(time(0)));
    Game newGame;
    std::ifstream inFS("input.txt");
    
    
    newGame.Direction();
    

    
    return 0;
}


