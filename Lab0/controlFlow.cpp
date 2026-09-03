#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
    int bytesWritten = 2;
    int bufferLimit = 19;
    int frameSize = 5;
    bool memoryAligned;

    while((bytesWritten + frameSize) < bufferLimit)
    {
        bytesWritten += frameSize;
    }
    if(bytesWritten % 4 == 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}