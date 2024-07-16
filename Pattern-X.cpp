#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int star = 0; star < row; star++)
        {
            cout << "*";
        }
        for (int space = 1; space <= 2 * (4 - row); space++)
        {
            cout << " ";
        }
        for (int star = 0; star < row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int row = 4; row >= 1; row--)
    {
        for (int star = 0; star < row; star++)
        {
            cout << "*";
        }
        for (int space = 1; space <= 2 * (4 - row); space++)
        {
            cout << " ";
        }
        for (int star = 0; star < row; star++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
