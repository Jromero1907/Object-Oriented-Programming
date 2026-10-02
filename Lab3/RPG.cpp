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
RPG:: RPG(string new_name, int new_hits, float new_luck, float new_exp, int new_level);
{
    name = new_name;
    its_taken = new_hits;
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