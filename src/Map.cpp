#include <iostream>

class Map {
    public:
        char wall = '#';
        char path = ' ';

        char terrain[5][5] = {
        {wall,wall,wall,wall,wall},
        {wall,path,path,path,wall},
        {wall,path,path,path,wall},
        {wall,path,path,path,wall},
        {wall,wall,wall,wall,wall}};

        void showTerrain()
        {
            for (unsigned i=0; i<5 ; ++i) {
                for (unsigned j=0; j<5 ; ++j) {
                    std::cout << terrain[i][j];
                }
                std::cout << std::endl;
            }
        }
};
