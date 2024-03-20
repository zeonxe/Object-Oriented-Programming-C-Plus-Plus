#include <iostream>
#include "RPG.h"

using namespace std;

void gameLoop(RPG* p1, RPG* p2);
void displayStats(RPG p1, RPG p2);
void displayEnd(RPG p1, RPG p2);

int main() {
    // Create RPG objects
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    gameLoop(&p1, &p2);
    displayEnd(p1, p2);

    

    return 0;
}

void gameLoop(RPG* p1, RPG* p2) {
    

    while((*p1).isAlive() && (*p2).isAlive()) {
        displayStats((*p1), (*p2));
        cout << (*p1).getName() << "'s turn \n" << endl;
        (*p1).useSkill(p2);
        cout << "----------------------------\n" << endl;

       displayStats((*p1), (*p2));
       cout << (*p2).getName() << "'s turn \n" << endl;
       (*p2).useSkill(p1);
       cout << "--------------------------------\n" << endl; 


        
    }
}

void displayStats(RPG p1, RPG p2) {
    // Print player 1's name and health
    cout << p1.getName() << " health: " << p1.getHealth() << " ";
    // Print player 2's name and health
    cout << p2.getName() << " health: " << p2.getHealth() << endl;
}

void displayEnd(RPG p1, RPG p2) {
    // Check if player 1 is alive
    if (p1.isAlive()) {
        cout << p1.getName() << " defeated " << p2.getName() << "! Good game!" << endl;
    } else {
        cout << p2.getName() << " defeated " << p1.getName() << "! Good game!" << endl;
    }
}
