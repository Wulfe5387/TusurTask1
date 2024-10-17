//
// Created by ASUS on 15.10.2024.
//

#ifndef ARMOUR_H
#define ARMOUR_H

#include "ArmourType.h"
#include <iostream>

class Armour
{
private:
    std::string _name;
    ArmourType _type;
    int _cost;
public:
    Armour(std::string name, ArmourType type, int cost);
    std::string getName();
    void setName(std::string);
    ArmourType getType();
    void setType(ArmourType);
    int getCost();
    void setCost(int);
};



#endif //ARMOUR_H
