/**
 * @file control.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2026-09-01
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int y = 5;

    while (x < y)
    {
        printf("%i\n", x);
        x += 3; //x + x + 3;
    }
    if (x % 2 == 0)
    {
        printf("x is even\n");
    }
    else
    {
        printf("x is odd\n");
    }
}