#include <iostream>
#include "Pokemon.h"

/**
 * @brief construct a new pokemon:: Pokemon object
 * 
 */
Pokemon::Pokemon(){
    name = "unidentified";
    hp = 0;
    attack = 0;
    defense = 0;
    cout << "Default constructor (Pokemon)\n";
}
/**
 * @brief construct a new Pokemon:: Pokemon object
 * 
 * @param name
 * @param hp
 * @param att
 * @param def
 * @param type
 * 
 */

Pokemon::Pokemon(string name, int hp, int att, int def, vector<string> type){
    this->name = name;
    this->hp = hp;
    attack = att;
    defense = def; 
    type = type; 
    cout << "Overlaoded Constructor (Pokemon)\n";

}

/**
 * @brief says whatever this pokemon normallly says 
 * 
 */
void Pokemon::speak(){
    cout << "...\n";
}

void Pokemon::printStats(){
    printf("Name:%s\t HP: %i\t DEF: %i\t ATT: %i\n", name.c_str(), hp, defense, attack);
    cout <<"Type: ";
    for(int i = 0; i < type.size(); i++){
        cout << type[i] << "\t";
    }
    cout << endl;
}