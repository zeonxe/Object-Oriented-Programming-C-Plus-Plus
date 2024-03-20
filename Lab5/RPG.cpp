#include "RPG.h"
#include <iostream>
#include <string>

using namespace std;
//add values to private variables
RPG::RPG() {
     name = "NPC";
     health = 100;
     strength = 10; 
     defense = 10; 
     type = "warrior"; // warrior, mage, thief, archer
     skills[0] = "slash";
     skills[1] = "parry";  
}
// assign  
RPG::RPG(string name, int health, int strength, int defense, string type) {
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;

    setSkills(); //calls setSkills function

}

#include "RPG.h"

// Implementation of getName() accessor function
string RPG::getName() const {
    return name;
}

// Implementation of getHealth() accessor function
int RPG::getHealth() const {
    return health;
}

// Implementation of getStrength() accessor function
int RPG::getStrength() const {
    return strength;
}

// Implementation of getDefense() accessor function
int RPG::getDefense() const {
    return defense;
}

// Implement updateHealth; updates health into new_health
void RPG::updateHealth(int new_health){
    health = new_health;
}

// implement isAlive function
bool RPG::isAlive() const {
    return health > 0;
}

//implement attack function
void RPG::attack(RPG * opponent){
    int opp_health = (*opponent).getHealth();

    int opp_def = (*opponent).getDefense();

    int new_health = 0;

    if(strength - opp_def > 0){
        int new_health = opp_health - (strength - opp_def);
        (*opponent).updateHealth(new_health);
    }
    else{
        int new_health = opp_health - 0;
        (*opponent).updateHealth(new_health);
    }
}
// useSkill function
void RPG::useSkill(RPG * opponent){
    for(int i=0; i < SKILL_SIZE; i++){
        printf("Skill %i: %s\n", i, skills[i].c_str());

    }
    int chosen_skill_index;
    printf("Enter 0 or 1 to choose a skill: \n");

    cin >> chosen_skill_index;

    string chosen_skill = skills[chosen_skill_index];

    printAction(chosen_skill, (*opponent));
    attack(opponent);
}

 

void RPG::setSkills() {
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";

    } else if (type == "thief") {
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type == "archer") {
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else {
        skills[0] = "slash";
        skills[1] = "parry";
    }


}

void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());

}     
        
    




