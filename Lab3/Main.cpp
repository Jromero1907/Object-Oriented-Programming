/**
* @file Main.cpp
* @author Jennifer Romero
* @brief 
* @version 0.1
* @date 2026-10-01
* 
* @copyright Copyright (c) 2026
* 
*/

#include <iostream>
#include "RPG.h"
#include "Game.h"

using namespace std;

int main()
{
    Game my_game = Game();
    int num_players = 10;
    my_game.generatePlayers(num_players);
    my_game.gameLoop();
    my_game.printFinalResults();

    return 0;
}