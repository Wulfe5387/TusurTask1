//
// Created by ASUS on 15.10.2024.
//

#ifndef WARRIOR_H
#define WARRIOR_H

#include "Armour.h"
#include <iostream>
#include <vector>

class Warrior
{
private:
    std::string _name;
    int _HP;
    int _damage;
    std::vector<Armour*> _equipment;
public:
    Warrior(std::string name, int hp, int damage, std::vector<Armour*> armour);

    void ShowInfo();
    std::string getName();
    void setName(std::string);
    int getHP();
    void setHP(int);
    int getDamage();
    void setDamage(int);
    std::vector <Armour*> getArmour();
    void setArmour(std::vector <Armour*>);
};




#endif //WARRIOR_H
