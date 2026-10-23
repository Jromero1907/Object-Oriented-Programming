/**
* @file RPG.cpp
* @author Jennifer Romero
* @brief 
* @version 0.1
* @date 2026-10-01
* 
* @copyright Copyright (c) 2026
* 
*/

#include "RPG.h"
#include <random>
#include <iostream>
#include <iomanip>

using namespace std;

// Default constructor
RPG:: RPG()
{
    name = "NPC";
    hits_taken = 0;
    luck = 0.1;
    exp = 50.0;
    level = 1;
}

// overloaded constructor
RPG:: RPG(string new_name, int new_hits, float new_luck, float new_exp, int new_level)
{
    name = new_name;
    hits_taken = new_hits;
    luck = new_luck;
    exp = new_exp;
    level = new_level;
}

// Destructor
RPG:: ~RPG()
{

}

bool RPG:: isAlive() const
{
    return hits_taken < MAX_HITS_TAKEN;
}

void RPG:: setHitsTaken(int new_hits)
{
    hits_taken = new_hits;
}

string RPG:: getName() const
{
    return name;
}

int RPG:: getHitsTaken() const
{
    return hits_taken;
}

float RPG:: getLuck() const
{
    return luck;
}

float RPG:: getExp() const
{
    return exp;
}

int RPG:: getLevel() const
{
    return level;
}

// Extended Functions
/**
* @brief updates name
* 
*/

void RPG:: setName (string name)
{
    this -> name = name;
}

/**
* @brief increases RPG's experience by 50
* sfter updating, if RPG's experience is >= 100.0,
* increase RPG's level by 1, reset experience to 0,
* and increases their luck by 0.1
*/

void RPG:: updateExpLevel()
{
    exp += 50.0;

    if (exp >= 100.0)
    {
        level += 1;
        exp = 0.0;
        luck += 0.1;
    }
}

/**
* @brief Hits or misses the opponent at random. Luck is a form defense.
* The higher the opponent's luck, the more likely the attack will miss.
* If the attack is a hit, opponent's hits_taken should increment by 1.
*/

void RPG::attack(RPG * opponent)
{
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dist(0.0, 1.0);
    float random_num = dist(gen);
    bool hit = false;
    if (random_num > HIT_FACTOR * (*opponent).getLuck())
    {
        hit = true;
    }
    if(hit)
    {
        (*opponent).setHitsTaken((*opponent).getHitsTaken() + 1);
    }
}

/**
* @brief Prints in the format:
* Name: NPC_X  Hits Taken: X  Luck: 0.X00000
* Exp: X0.000000  Level: X  Status: Alive or Dead
*/

void RPG::printStats()
{
    cout << "Name: " << name;
    cout << "\tHits Taken: " << hits_taken;
    cout << "\tLuck: " << fixed << setprecision(6) << luck;
    cout << "\tExp: " << exp;
    cout << "\tLevel: " << level;

    if (isAlive())
    {
        cout << "\tStatus: Alive";
    }
    else
    {
        cout << "\tStatus: Dead";
    }

    cout << endl;
}