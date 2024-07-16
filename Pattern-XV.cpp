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
        for (int i = row; i >= 1; i--)
        {
            cout << i;
        }
        for (int i = 2; i <= row; i++)
        {
            cout << i ;
        }
        cout << endl;
    }

    return 0;
}
//    1
//   212
//  32123
// 4321234
