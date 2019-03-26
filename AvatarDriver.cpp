# include "Avatar.h"
int main() {

  //Declare objects.
  Avatar avatar1;
  Avatar avatar2("Sammy", 100, 10);

  //Print current values.
  cout << "Avatar Ones health: " << avatar1.getHealth() << '\n';
  cout << "Avatar Ones strength: " << avatar1.getStrength() << '\n';
  cout << "Avatar Ones inventory: "<< '\n';
  cout << "Avatars Name: " << avatar1.getName() << '\n';
  avatar1.printInventory();

  cout << "Avatar Twos health: " << avatar2.getHealth() << '\n';
  cout << "Avatar Twos strength: " << avatar2.getStrength() << '\n';
  cout << "Avatar Twos inventory: "<< '\n';
  avatar2.printInventory();

  //Add to inventory.
  avatar1.addToInventory("Apple");
  avatar2.addToInventory("Bannana");

  //Set strength.
  avatar1.setStrength(12);
  avatar2.setStrength(100);

  //Set health.
  avatar1.setHealth(80);
  avatar2.setHealth(100);

  //Print current values.
  cout << "Avatar Ones health: " << avatar1.getHealth() << '\n';
  cout << "Avatar Ones strength: " << avatar1.getStrength() << '\n';
  cout << "Avatar Ones inventory: " << '\n';
  avatar1.printInventory();

  cout << "Avatar Twos health: " << avatar2.getHealth() << '\n';
  cout << "Avatar Twos strength: " << avatar2.getStrength() << '\n';
  cout << "Avatar Twos inventory: " << '\n';
  avatar2.printInventory();


  return 0;
}
