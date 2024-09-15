#ifndef WORLD_H
#define WORLD_H
#include <string>
#include "Characters.h"



class World{ // header file for the FileProcessor class
    public:
        World(); //constructor
        ~World(); //destructor
        //char*** buildWorld(char*** world,int level, int dimension); 
        void printWorld();
        char populate();
        int randomPosition(int dim);
        int currLevel;
        int levels;
        Characters characters;
        int dimensions;
        int lives;
        int coins;
        int nothing;
        int goombas;
        int koopas;
        int mushrooms;
        char*** game;
        char position;
        char marioPosition;
        
        void placeMario(int level, int x, int y);

        
    private:
        std::string input; //member variable for the input file
        //std::string output; //member variable for the output file
        
        
      
        
    
};
#endif