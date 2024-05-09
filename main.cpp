#include <iostream>
#include "Charmander.h"
using namespace std;
int main()
{
    // Cahrmander first = Charmander();
    vector<string> pokemonType;
    pokemonType.push_back("Fire");

    vector<string> skills;
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "--------------Constructor created-----------\n";
    Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType, skills);
    // Charmander
    cout << "\n--------Direct speak----------\n";
    charlie.speak();
    // Pokemon pointer to Charmander
    Pokemon * p1 = &charlie ;
    cout << "\n--------- Speak called from Pokemon pointer--------\n";
    (*p1).speak();
    // Charmander pointer to Charmander
    Charmander * c1 = &charlie ;
    cout << "\n------------ Speak called from Charamander pointer-----\n";
    (*c1).speak();
    // Charmander 
    cout << "\n--------- Print Stats---------\n";
    charlie.printStats();

}