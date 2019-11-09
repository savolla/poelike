#include "Map.h"

void Map::showTerrain()
{
        for (unsigned i=0; i<5 ; ++i) {
                for (unsigned j=0; j<5 ; ++j) {
                        std::cout << terrain[i][j];
                }
                std::cout << std::endl;
        }
}
