#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int space = 1; space <= 4 - row; space++)
        {
            cout << " ";
        }
        for (int i = 0; i < row; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 4; row >= 1; row--)
    {
        for (int space = 1; space <= 4 - row; space++)
        {
            cout << " ";
        }
        for (int i = 0; i < row; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

//    * 
//   * *
//  * * *
// * * * *
// * * * *
//  * * *
//   * *
//    *
