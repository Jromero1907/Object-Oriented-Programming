/**
 * @file Game.h
 * @author Jennifer Romero
 * @brief 
 * @version 0.1
 * @date 2026-10-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */

// Game.h

#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include <set>
#include "RPG.h"

using namespace std;

class Game
{
 public:

    // Constructors
    Game();

    //Game Functions
    void generatePlayers(int n);
    int selectPlayer();
    void endRound(RPG *winner, RPG *loser, int loserIndex);
    void battleRound();
    void gameLoop();
    void printFinalResults();

    // Destructors
    ~Game();

private:

    // Game Attributes
    vector<RPG*> players;
    set<int> live_players;
};
#endif 