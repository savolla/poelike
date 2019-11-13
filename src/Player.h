#ifndef __PLAYER_H__
#define __PLAYER_H__

#include <iostream>
#include "Monster.h"
#include "Map.h"

class Player {
    public:
        std::string name; // name of the Player
        int x_position; // saved x position for later use
        int y_position; // saved y position for later use
        char skin = 'M'; // how marauder looks
        int movement_speed = 1; // movement speed of marauder
        int health = 200; // health point which is really high (200)
        int mana = 50; // mana point. really low since marauders don't need magic

        Player(Map &m, std::string i_name);
        void move(Map &m, char direction);

};
#endif // __PLAYER_H__
