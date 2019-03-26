#include "Avatar.h"
//Default constructor.
Avatar::Avatar(){
  name = new char[strlen("David")+1];

  //Copy name.
  strcpy(name, "David");
  health = 90;
  strength = 30;
}
//Constructor.
Avatar::Avatar(char *playerName, int pow, int hp){
  name = new char[strlen(playerName)+1];
  strength = pow;
  health = hp;
}
//Getters and setters.
int Avatar::getHealth(){
  return health;
}
int Avatar::getStrength(){
  return strength;
}
const char* Avatar::getName(){
  return name;
}
void Avatar::setHealth(int value){
  this-> health = value;
}
void Avatar::setStrength(int value){
  this -> strength = value;
}
void Avatar::addToInventory(string item){
  this -> inventory.push_front(item);
}
void Avatar::printInventory(){

  for(string item: this-> inventory){
    cout << item<<'\n';

  }
}

//Destructor.
Avatar::~Avatar(){
  delete [] name;
  inventory.clear();

}
