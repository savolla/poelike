#include <iostream>
#include "Player.cpp"

int main(void) {
    Map twighlight_strand;
    Marauder savolla(twighlight_strand, "savolla");
    twighlight_strand.showTerrain();

    char dir;
    while (std::cin>>dir) {
        savolla.move(twighlight_strand, dir);
        twighlight_strand.showTerrain();
    }

    return 0;
}


// TODO
// Map.terrain's dimentions are not parametric
