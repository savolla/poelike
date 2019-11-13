#include "Map.h"

void Map::showTerrain()
{
        for (unsigned i=0; i<MAP_X_DIM ; ++i) {
                for (unsigned j=0; j<MAP_Y_DIM ; ++j) {
                        std::cout << terrain[i][j];
                }
                std::cout << std::endl;
        }
}
