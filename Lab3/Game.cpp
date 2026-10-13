/**
 * @file Game.cpp
 * @author Jennifer Romero
 * @brief 
 * @version 0.1
 * @date 2026-10-13
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include "Game.h"
#include "RPG.h"
#include <string>
#include <vector>
#include <set>

Game:: Game()
{

}

void Game :: generatePlayers(int n)
{
    for(int i = 0; i < n; i++)
    {
        player.push_back(new RPG());

        string new_name = "NPC_" + to_string(i);
        players[i] -> setName(new_name);
        live_players.insert[i];
    }
}