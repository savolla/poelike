#ifndef __MAP_H__
#define __MAP_H__

#include <iostream>

#define MAP_X_DIM 5
#define MAP_Y_DIM 5

class Map {
    public:
        std::string name;
        int level;
        char wall = '#';
        char path = ' ';

        char terrain[5][5] = {
        {wall,wall,wall,wall,wall},
        {wall,path,path,path,wall},
        {wall,path,path,path,wall},
        {wall,path,path,path,wall},
        {wall,wall,wall,wall,wall}};

        void showTerrain();
};

#endif //__MAP_H__
