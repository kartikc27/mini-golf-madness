#ifndef PLAYER_H
#define PLAYER_H

#include <string>



using namespace std;

/** 
 * This class represents a Player object with a score and name
*/
class Player{

    
public:
  Player(string n, int s);
  ~Player();
  string name;
  int score;
    
};

#endif 
