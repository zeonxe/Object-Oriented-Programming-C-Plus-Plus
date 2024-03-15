#include <iostream>
#include "RPG.h"

using namespace std;

void gameLoop(RPG* p1, RPG* p2);
void displayStats(const RPG* p1, const RPG* p2);
void displayEnd(const RPG* p1, const RPG* p2);

int main() {
    // Create RPG objects
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    gameLoop(&p1, &p2);
    displayEnd(&p1, &p2);

    // Display current stats after the game
    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n", p1.getHealth(), p1.getStrength(), p1.getDefense());

    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n", p2.getHealth(), p2.getStrength(), p2.getDefense());

    // Test updateHealth() and isAlive() functions
    p1.updateHealth(0);
    cout << p1.getHealth() << endl;

    cout << p1.isAlive() << endl;
    cout << p2.isAlive() << endl;

    return 0;
}

void gameLoop(RPG* p1, RPG* p2) {
    

    while (p1->isAlive() && p2->isAlive()) {
        cout << "Current stats: " << endl;
        displayStats(p1, p2);

        // Perform game logic here
        // For simplicity, let's say p1 always attacks p2
        int damage = p1->getStrength() - p2->getDefense();
        if (damage < 0)
            damage = 0;
        p2->updateHealth(-damage);

        // Swap players
        RPG* temp = p1;
        p1 = p2;
        p2 = temp;
    }
}

void displayStats(const RPG* p1, const RPG* p2) {
    // Print player 1's name and health
    cout << p1->getName() << " health: " << p1->getHealth() << " ";
    // Print player 2's name and health
    cout << p2->getName() << " health: " << p2->getHealth() << endl;
}

void displayEnd(const RPG* p1, const RPG* p2) {
    // Check if player 1 is alive
    if (p1->isAlive()) {
        cout << p1->getName() << " defeated " << p2->getName() << "! Good game!" << endl;
    } else {
        cout << p2->getName() << " defeated " << p1->getName() << "! Good game!" << endl;
    }
}
