/** isGreatherThan
* @brief returns whether x is greater than y
*
* @param x : (double)
* @param y : (int)
* @return true : x is greater than y
* @return false : y is less than or equal to y
*/

#include <iostream>
#include <cstdlib>

using namespace std;

bool isGreaterThan(double x, int y);

int main()
{
    double x = 5.0;
    int y = 4;

    bool result = isGreaterThan(x, y);

    cout << result << endl;

    return 0;
}

bool isGreaterThan(double x, int y)
{
    return x > y;
}