#include <iostream>
using namespace std;

int main()
{
    int count = 0;;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}

// 0 
// 1 2 
// 3 4 5 
// 6 7 8 9 
