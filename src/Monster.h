#ifndef __MONSTER_H__
#define __MONSTER_H__

#include <iostream>
#include "Map.h"

class Monster {
    public:
        std::string name;
        int level;
        int x_position;
        int y_position;
        char skin;
        int health = 100;
};

class Skeleton : public Monster {
    public:
        int dps;
        int movement_speed;
};

class MeleeSkeleton : public Skeleton {
    public:
        MeleeSkeleton(Map &area);
};

class RangerSkeleton : public Skeleton {
    public:
        RangerSkeleton();
};

class MageSkeleton : public Skeleton {
    public:
        MageSkeleton();
};

class FireMageSkeleton : public MageSkeleton {
    public:
        FireMageSkeleton();
};

class ColdMageSkeleton : public MageSkeleton {
    public:
        ColdMageSkeleton();
};

class StormMageSkeleton : public MageSkeleton {
    public:
        StormMageSkeleton();
};

#endif //__MONSTER_H__
