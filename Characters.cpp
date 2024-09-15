#include <iostream>
#include <string>
#include <fstream>
#include "Characters.h"
using namespace std;
int levels;
int dimensions;
int lives;
int coins;
int nothing;                                                
int goombas;
int koopas;
int mushrooms;

Characters::Characters(){
    loadInfo();
}

Characters::~Characters(){

}

void Characters::loadInfo(){
    std::ifstream inFS("input.txt");
    if(inFS.is_open()){
        inFS>>levels;

        inFS>>dimensions;

        inFS>>lives;

        inFS>>coins;

        inFS>>nothing;

        inFS>>goombas;
 
        inFS>>koopas;
       
        inFS>>mushrooms;
        
    }
    inFS.close();
    
}

int Characters::getLevels(){
    return levels;
}


int Characters::getDimensions(){
    return dimensions;
}

int Characters::getLives(){
    return lives;
}

int Characters::getCoins(){
    return coins;
}

int Characters::getNothing(){
    return nothing;
}

int Characters::getGoombas(){
    return goombas;
}

int Characters::getKoopas(){
    return koopas;
}

int Characters::getMushrooms(){
    return mushrooms;
}
