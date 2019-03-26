#ifndef AVATAR_H
# define AVATAR_H
# include <iostream>
# include <list>
# include <cstring>
using namespace std;
class Avatar{
  private:
    //Feilds
    char* name;
    int strength;
    int health;
    list <string> inventory;

  public:

    //Default Constructor.
    Avatar();
    //Constructor.
    Avatar(char* name, int pow, int hp);
    //Set strength.
    void setStrength(int value);
    //Set health.
    void setHealth(int value);
    //Add to inventory.
    void addToInventory(string item);
    void printInventory();
    //Get strength.
    int getStrength();
    //Get health.
    int getHealth();
    const char *getName();
    //Destructor.
    ~Avatar();
};

# endif
