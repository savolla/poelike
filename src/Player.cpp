#include "Player.h"
// FIXME: make a base class called Player and then Marauder a subclass of it

// codes when marauder will spawn
Marauder::Marauder(Map &m, std::string i_name) // constructor takes map and name paramenters
{
    // name the Marauder
    Marauder::name = i_name;

    // find an empty place in map to place character
    for (unsigned i=0; i<MAP_X_DIM; i++) { // iterate lines of the terrain
        for (unsigned j=0; j<MAP_Y_DIM; j++) { // iterate collumns of the terrain
            if (m.terrain[i][j] == m.path) { // if there are no walls
                m.terrain[i][j] = Marauder::skin; // place Marauder onto appropriate
                Marauder::x_position = j; // save the current position
                Marauder::y_position = i; // save the current position
                i = MAP_X_DIM; // to escape first loop (double break)
                break;
            }
        }
    }

    // notify that Marauder spawned succesfully
    // std::cout << "Marauder called" << name << " spawned!" << std::endl;
}

// move the Marauder around the map
void Marauder::move(Map &m, char direction)
{
    m.terrain[Marauder::x_position][Marauder::y_position] = ' ';
    switch (direction) {

        // move to west
        // move to south
        case 'j':
            if (m.terrain[Marauder::x_position+1][Marauder::y_position] != '#') {
                Marauder::x_position++;
            }
            break;

        //  move to east
        case 'l':
            if (m.terrain[Marauder::x_position][Marauder::y_position+1] != '#') {
                Marauder::y_position++;
            }
            break;

        // move to north
        case 'k':
            if (m.terrain[Marauder::x_position-1][Marauder::y_position] != '#') {
                Marauder::x_position--;
            }
            break;


        case 'h':
            if (m.terrain[Marauder::x_position][Marauder::y_position-1] != '#') {
                Marauder::y_position--;
            }
            break;

        // move northeast
        case 'o':
            if (m.terrain[Marauder::x_position-1][Marauder::y_position+1] != '#') {
                Marauder::x_position--;
                Marauder::y_position++;
            }
            break;

        // move to northwest
        case 'y':
            if (m.terrain[Marauder::x_position-1][Marauder::y_position-1] != '#') {
                Marauder::x_position--;
                Marauder::y_position--;
            }
            break;

        // move to southeast
        case 'm':
            if (m.terrain[Marauder::x_position+1][Marauder::y_position+1] != '#') {
                Marauder::x_position++;
                Marauder::y_position++;
            }
            break;

        // move to southwest
        case 'b':
            if (m.terrain[Marauder::x_position+1][Marauder::y_position-1] != '#') {
                Marauder::x_position++;
                Marauder::y_position--;
            }
            break;
    }
    m.terrain[Marauder::x_position][Marauder::y_position] = Marauder::skin;
}
