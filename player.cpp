#include "player.h"

/**
* Player constructor to initialize a player object
* @param n the name of a string to represent a name
* @param s the name of an integer to represent a score
*/

Player::Player(string n, int s)
{
  name = n;
  score = s;
}

Player::~Player()
{

}
