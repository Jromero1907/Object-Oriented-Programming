/**
 * @file RPG.h
 * @author Jennifer Romero
 * @brief 
 * @version 0.1
 * @date 2026-10-01
 * 
 * @copyright Copyright (c) 2026
 * 
 */
// RPG.h

#ifndef RPG_H
#define RPG_H

#include <string>

using namespace std;

const int INVENTORY_SIZE = 10;
const float HIT_FACTOR = 0.05;
const int MAX_HITS_TAKEN = 3;

class RPG
{
public:

    // constructors
    RPG();
    RPG(string new_name, int new_hits, float new_luck, float new_exp, int new_level);

    // destructor
    ~RPG();

    // mutators
    bool isAlive() const;
    void setHitsTaken(int new_hits);

    // accesors
    string getName() const;
    int getHitsTaken() const;
    float getLuck() const;
    float getExp() const;
    int getLevel() const;

private:

    string name;
    int hits_taken;
    float luck;
    float exp;
    int level;
};

#endif