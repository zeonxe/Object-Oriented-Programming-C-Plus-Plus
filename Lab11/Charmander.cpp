#include <iostream>
#include <stdio.h>
#include "Charmander.h"

/**
 * @brief construct a new Charmander:: Cahrmander object
 * 
 */
Charmander::Charmander() : Pokemon(){
    type.push_back("Fire");
    skills.push_back("Growl");
    skills.push_back("Scratch");

    cout << "Default constructor (Charmander)\n";
}

/**
 * @brief contstruct a new Charmander:: Charmander object
 * 
 *@param name 
 *@param hp
 *@param att
 *@param def
 *@param t
 */

Charmander::Charmander(string name, int hp, int att, int def, vector<string> t, vector<string> s) :
Pokemon(name, hp, att, def, t){
    type = t;
    skills = s;
    cout << "Overloaded constructor (Charmander)\n";

}

/**
 * @brief says what a charmander says
 * 
 */
void Charmander::speak(){
    cout << "Charmander-char\n";
}

/**
 * @brief calls printStats from the parent class (pokemon) and appends the skills used for Charmander
 * 
 */
void Charmander::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << "\t";
    }
    cout << endl;
}