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
#include <random>
#include <iostream>

using namespace std;

Game:: Game()
{

}

void Game :: generatePlayers(int n)
{
    for(int i = 0; i < n; i++)
    {
        players.push_back(new RPG());

        string new_name = "NPC_" + to_string(i);
        players[i] -> setName(new_name);
        live_players.insert(i);
    }
}

void Game :: battleRound()
{
    int playerIndex1 = selectPlayer();
    int playerIndex2 = selectPlayer();

   if(playerIndex1 == playerIndex2)
   {
    battleRound();
    return;
   }

   RPG* player1 = players[playerIndex1];
   RPG* player2 = players[playerIndex2];

   while(player1 -> isAlive() && player2 -> isAlive())
   {
    player1 -> attack(player2);
    if(player2 -> isAlive())
    {
        player2 -> attack(player1); 
    }
    }
    if(player1 -> isAlive())
    {
        endRound(player1, player2, playerIndex2);
    }
    else
    {
        endRound(player2, player1, playerIndex1);
    }
}

void Game:: printFinalResults()
{
    for(int i = 0; i < players.size(); i++)
    {
        players[i] -> printStats();
    }
}

Game:: ~Game()
{

}


/**
* @brief Randomly selects a player (via index) from the
* set of alive players, live_players
*
* @return int: index for vector, players
*/
int Game::selectPlayer()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, live_players.size() - 1);

    // Pick random index
    int randomIndex = dist(gen);

    // Advance iterator to that index
    set<int>::iterator it = live_players.begin();
    advance(it, randomIndex);

    int selectedIndex = *it;
    return selectedIndex;
}


/**
 * @brief Resets winner's hits_taken to 0.
 * Removes the loser from live_players.
 * Calls updateExpLevel() for the winner.
 * Prints "NPC_X won against NPC_Y"
 *
 * @param winner Pointer to RPG winner
 * @param loser Pointer to RPG loser
 * @param loserIndex Index of loser
 */
void Game::endRound(RPG *winner, RPG *loser, int loserIndex)
{
    winner->setHitsTaken(0);

    live_players.erase(loserIndex);

    winner->updateExpLevel();

    cout << winner->getName() << " won against ";
    cout << loser->getName() << endl;
}

/**
* @brief Runs battleRound() until there is
* only 1 player alive.
*/
void Game::gameLoop()
{
    while (live_players.size() > 1)
    {
        battleRound();
    }
}
