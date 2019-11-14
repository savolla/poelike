#include "Player.h"
// FIXME: make a base class called Player and then Player a subclass of it

// codes when marauder will spawn
Player::Player(Map &m, std::string i_name) // constructor takes map and name paramenters
{
    // name the Player
    Player::name = i_name;

    // find an empty place in map to place character
    for (unsigned i=0; i<MAP_X_DIM; i++) { // iterate lines of the terrain
        for (unsigned j=0; j<MAP_Y_DIM; j++) { // iterate collumns of the terrain
            if (m.terrain[i][j] == m.path) { // if there are no walls
                m.terrain[i][j] = Player::skin; // place Player onto appropriate
                Player::x_position = j; // save the current position
                Player::y_position = i; // save the current position
                i = MAP_X_DIM; // to escape first loop (double break)
                break;
            }
        }
    }

    // notify that Player spawned succesfully
    // std::cout << "Player called" << name << " spawned!" << std::endl;
}

// move the Player around the map
void Player::move(Map &m, char direction)
{
    m.terrain[Player::x_position][Player::y_position] = m.path;
    switch (direction) {

        // move to west
        // move to south
        case 'j':
            if (m.terrain[Player::x_position+1][Player::y_position] != '#') {
                Player::x_position++;
            }
            break;

        //  move to east
        case 'l':
            if (m.terrain[Player::x_position][Player::y_position+1] != '#') {
                Player::y_position++;
            }
            break;

        // move to north
        case 'k':
            if (m.terrain[Player::x_position-1][Player::y_position] != '#') {
                Player::x_position--;
            }
            break;


        case 'h':
            if (m.terrain[Player::x_position][Player::y_position-1] != '#') {
                Player::y_position--;
            }
            break;

        // move northeast
        case 'o':
            if (m.terrain[Player::x_position-1][Player::y_position+1] != '#') {
                Player::x_position--;
                Player::y_position++;
            }
            break;

        // move to northwest
        case 'y':
            if (m.terrain[Player::x_position-1][Player::y_position-1] != '#') {
                Player::x_position--;
                Player::y_position--;
            }
            break;

        // move to southeast
        case 'm':
            if (m.terrain[Player::x_position+1][Player::y_position+1] != '#') {
                Player::x_position++;
                Player::y_position++;
            }
            break;

        // move to southwest
        case 'b':
            if (m.terrain[Player::x_position+1][Player::y_position-1] != '#') {
                Player::x_position++;
                Player::y_position--;
            }
            break;
    }
    m.terrain[Player::x_position][Player::y_position] = Player::skin;
}
