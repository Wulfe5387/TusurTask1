//
// Created by ASUS on 15.10.2024.
//

#include "Warrior.h"
#include <iostream>

Warrior::Warrior(std::string name, int hp, int damage, std::vector <Armour*> equipment) {
    _name = name;
    _HP = hp;
    _damage = damage;
    _equipment = equipment;
}

void Warrior::ShowInfo() {
    std::cout << "Warrior" << "\n";
    std::cout << "Name: " << _name << "\n";
    std::cout << "HP: " << _HP << "\n";
    std::cout << "Damage: " << _damage << "\n";
    std::cout << "Equipment: \n";
    for (int i = 0; i < _equipment.size(); i++) {
        std::cout << "Name: " << _equipment[i]->getName() << "\n" << "Cost: " << _equipment[i]->getCost() << "\n" << "Armor type: ";
        switch (static_cast<int>(_equipment[i]->getType())) {
            case(1):
                std::cout << "Helmet\n";
                break;
            case (2):
                std::cout << "Gloves\n";
                break;
            case (3):
                std::cout << "Body armor\n";
                break;
            case (4):
                std::cout << "Leg armor\n";
                break;
            default:
                std::cout << "\n";
                break;
        }
    }
}

std::string Warrior::getName() {
    return _name;
}

void Warrior::setName(std::string name) {
    _name = name;
}

int Warrior::getHP() {
    return _HP;
}

void Warrior::setHP(int hp) {
    _HP = hp;
}

int Warrior::getDamage() {
    return _damage;
}

void Warrior::setDamage(int damage) {
    _damage = damage;
}

std::vector<Armour*> Warrior::getArmour() {
    return _equipment;
}

void Warrior::setArmour(std::vector <Armour*> equipment) {
    _equipment = equipment;
}