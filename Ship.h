# ifndef SHIP_H
# define SHIP_H
# include <iostream>
using namespace std;

class Ship{
  private:
    string name;
    string buildDate;

  public:
    Ship();
    Ship(string, string);

    // Getters and setters.
    void setName(string value){this -> name = value;};
    void setBuildDate(string value){this -> buildDate = value;};
    string getName(){return name;};
    string getBuildDate(){return buildDate;};

    ~Ship();
};

class CruiseShip : Ship{
private:
  int maxPeeps;

  public:
    CruiseShip();
    CruiseShip(string, string, int);

    //Getters and setters.
    void setMax(int value){this -> maxPeeps = value;};
    int getMax(){return maxPeeps;};

    ~CruiseShip();
};

class CargoShip : Ship{

  private:
    int cappacity;

  public:
    CargoShip();
    CargoShip(string, string, int, int);

    //Getters and setters.
    void setCappacity(int value){this -> cappacity = value;};
    int getCappacity(){return cappacity;};

    ~CargoShip();
};
# endif
