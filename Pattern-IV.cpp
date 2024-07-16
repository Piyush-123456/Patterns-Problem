#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    for (char i = 'A'; i < 'F'; i++)
    {
        for (char j = 'A'; j < i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}

// A
// B C
// D E F
// G H I J
