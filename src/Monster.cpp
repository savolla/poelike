#include "Monster.h"

MeleeSkeleton::MeleeSkeleton(Map &area)
{
    // set properties of Melee Skeleton
    MeleeSkeleton::level = area.level; // skeleton levels depends on area level
    MeleeSkeleton::health *= (area.level * 2); // HP= 200 at level 1
    MeleeSkeleton::dps *= area.level; // skeleton dps levels depends on area level
    MeleeSkeleton::skin = 'm'; // m is nice for a melee skeleton
    MeleeSkeleton::name = "Melee Skeleton"; // the name of the melee skeleton

    // place skeleton to random and appropriate place
    for (unsigned i=0; i<MAP_X_DIM; i++) { // iterate lines of the terrain
        for (unsigned j=0; j<MAP_Y_DIM; j++) { // iterate collumns of the terrain
            if (area.terrain[i][j] == area.path) { // if there is a p (empty place)
                // FIXME: make the skeleton spawn on random place
                area.terrain[i][j] = MeleeSkeleton::skin; // place skeleton here
                MeleeSkeleton::x_position = j; // save the current position for later use
                MeleeSkeleton::y_position = i; // save the current position for later use
                i = MAP_X_DIM; // to escape first loop (double break)
                break;
            }
        }
    }
}
