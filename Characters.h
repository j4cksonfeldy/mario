#ifndef CHARACTERS_H
#define CHARACTERS_H
#include <string>

class Characters{
    public:
        Characters();
        ~Characters();

        int getLevels();

        int getDimensions();

        int getLives();

        int getCoins();

        int getNothing();

        int getGoombas();

        int getKoopas();

        int getMushrooms();
        
        void loadInfo();

    private:
        int levels;
        int dimensions;
        int lives;
        int coins;
        int nothing;
        int goombas;
        int koopas;
        int mushrooms;
        std::string input;

};
#endif