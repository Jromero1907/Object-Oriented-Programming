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

 using namespace std;

 int main ()
 {
    RPG p1 = RPG("Jaylen ", 0, 0.2, 60, 1);
    RPG p2 = RPG();

    cout << p1.getName() << "Current Stats: " << endl;
    cout << "Hits Taken: " << p1.getHitsTaken()
        << "\nLuck: " << p1.getLuck()
        << "\nExp: " << p1.getExp()
        << "\nLevel: " << p1.getLevel() << "\n" << endl;
    

    cout << p2.getName() << " Current Stats: " << endl;
    cout << "Hits Taken: " << p2.getHitsTaken()
        << "\nLuck: " << p2.getLuck()
        << "\nExp: " << p2.getExp()
        << "\nLevel: " << p2.getLevel() << endl;
    
    p2.setHitsTaken(3);
    cout << "\nP2 hits taken: " << p2.getHitsTaken() << endl;
    cout << "\n0 is dead 1 is alive" << endl;
    cout << "P1: " << p1.isAlive() << endl;
    cout << "P2: " << p2.isAlive() << endl;
    return 0;
 }

