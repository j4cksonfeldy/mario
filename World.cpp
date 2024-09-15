#include <iostream>
#include <cstdlib> 
#include <string>
#include <fstream>
#include "World.h"
#include "Characters.h"
using namespace std;



World::World(){ //default constructor
    //std::cout << "constructor running";
    characters = Characters();
    levels = characters.getLevels();
    
    dimensions = characters.getDimensions();
    
    lives = characters.getLives();
    
    coins = characters.getCoins();
    
    nothing = characters.getNothing();    
                                               
    goombas = characters.getGoombas();
    
    koopas = characters.getKoopas(); 
    
    mushrooms = characters.getMushrooms();
    
    game = new char**[levels];
        for(int i = 0; i<levels;++i){
            game[i] = new char*[dimensions];
            for(int j = 0; j<dimensions; ++j){
                game[i][j] = new char[dimensions];
                for(int k = 0; k<dimensions;++k){
                    game[i][j][k] = populate();
                }
            }
            game[i][randomPosition(dimensions)][randomPosition(dimensions)] = 'b'; //make sure that b and w arent in the same position
            if(i!=(levels -1 )){
                game[i][randomPosition(dimensions)][randomPosition(dimensions)] = 'w';
            }
        }  
}
void World::placeMario(int level, int x, int y) {
        game[level][x][y] = 'H'; // Place Mario on the grid
}

World::~World(){ //destructor
    for(int i = 0; i < levels; i++){
        for(int j=0; j < levels; j++){
            delete[] game[i][j];
        }
        delete[] game[i];
    }
    delete game;
}

void World::printWorld(){
    
    for(int i =0; i <levels; i = i+1 ){
        if(i == 0){
            std::cout <<"first level: \n";
        }
        else if(i== levels -1){
            
            std::cout<<"final level: \n";
        }
        else{
            
            std::cout<<"level " << i +1 << ": \n";
        }
       
    
        for(int j=0; j< dimensions; j = j+1){
            for(int k=0; k < dimensions; k = k+1){
                
                std::cout << game[i][j][k] << " ";
            }
                std::cout<< "\n";
        }
    }
}

char World::populate(){
    //input = inputFile;
    char position;
    
    int r = rand() % 100;
    if(r < coins){
        position = 'c';
        return position;
    }
    else if(r < coins + nothing){
        position = 'n';
        return position;
    }
    else if(r < (coins + nothing + goombas)){
        position = 'g';
        return position;
    }
    else if(r < (coins + nothing + goombas + koopas)){
        position = 'k';
        return position;
    }
    else{
        position = 'm';
        return position;
    }
    
}

int World::randomPosition(int dim){
    dim = dimensions;
    int x = rand()% dimensions;
    return x;
}
/*
char*** World::buildWorld(char*** world,int level, int dimension){ 
    game = world;
    levels = level;
    dimensions = dimension;
    char*** game = new char**[levels];
    for(int i = 0; i<levels;++i){
        game[i] = new char*[dimensions];
        for(int j = 0; j<dimensions; ++j){
            game[i][j] = new char[dimensions];
            for(int k = 0; k<dimensions;++k){
                game[i][j][k] = populate();
                
            }
        }
        game[i][randomPosition(dimensions)][randomPosition(dimensions)] = 'b'; //make sure that b and w arent in the same position
        if(i!=(levels -1 )){
            game[i][randomPosition(dimensions)][randomPosition(dimensions)] = 'w';
        }
        if((i == 0)){
            game[i][randomPosition(dimensions)][randomPosition(dimensions)] = 'H';
        }
        
    
    }
    return game;
} */


