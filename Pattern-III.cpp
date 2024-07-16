#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// 0 
// 0 1
// 0 1 2
// 0 1 2 3
