#include <iostream>
#include "Warrior.h"
#include <vector>

int main() {
    Armour helmet("Helmet", static_cast<ArmourType>(1), 150);
    Armour chestplate("Chestplate", static_cast<ArmourType>(3), 500);
    Armour greaves("Greaves", static_cast<ArmourType>(4), 250);
    Armour sabathons("Sabathons", static_cast<ArmourType>(4), 200);
    Armour gloves("Gloves", static_cast<ArmourType>(2), 100);
    std::vector <Armour*> armorset1 = { new Armour(gloves), new Armour(helmet), new Armour(greaves) };
    std::vector <Armour*> armorset2 = { new Armour(chestplate), new Armour(helmet), new Armour(sabathons) };
    std::pmr::vector<Warrior> warriors;
    warriors.push_back(Warrior("John", 100, 15, armorset1));
    warriors.push_back(Warrior("Mike", 120, 20, armorset2));
    for (Warrior& warrior : warriors) {
        std::cout << "...................\n";
        warrior.ShowInfo();
    }
    return 0;
}
