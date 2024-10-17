//
// Created by ASUS on 15.10.2024.
//

#include "Armour.h"

Armour::Armour(std::string name, ArmourType type, int cost) {
    _name = name;
    _type = type;
    _cost = cost;
}

std::string Armour::getName() {
    return _name;
}

void Armour::setName(std::string name) {
    _name = name;
}

ArmourType Armour::getType() {
    return _type;
}

void Armour::setType(ArmourType type) {
    _type = type;
}

int Armour::getCost() {
    return _cost;
}

void Armour::setCost(int cost) {
    _cost = cost;
}