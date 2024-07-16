#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int space = 1; space <= 5 - i; space++)
        {
            cout << " ";
        }
        for (int start = 0; start < i; start++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//     *
//    **
//   ***
//  ****
// *****
