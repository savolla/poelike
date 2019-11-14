#ifndef __MAP_H__
#define __MAP_H__

#include <iostream>
#include <ncurses.h>

#define MAP_X_DIM 5
#define MAP_Y_DIM 5

class Map {
    public:
        std::string name; // zone name
        int level; // zone level
        char wall = '#'; // wall texture
        char path = '.'; // walkable path texture
        char fall = ' '; // fall
        char tree = 'Y'; // tree

        char terrain[MAP_X_DIM][MAP_Y_DIM] = {
        {wall,wall,wall,wall,wall},
        {wall,path,path,path,wall},
        {wall,path,tree,path,wall},
        {wall,path,path,path,wall},
        {wall,wall,wall,wall,wall}};

        Map();
        void showTerrain();
};

#endif //__MAP_H__
