/**
 * @file calculate.cpp
 * @author Jenn
 * @brief shows the difference between dividing int with int & int with double
 * @version 0.1
 * @date 2026-09-01
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //numerical
    int int_x = 1;
    int int_y = 2;
    double double_z = 2.0;

    cout << "int divided by int: " << int_x / int_y << endl;
    cout << "int divided by double: " << int_x / double_z << endl;
}