#include <iostream>
using namespace std;

int main()
{
    cout << "Numbers divisible by 9 between 200 and 300: " << endl;
    for (int i = 200; i <= 300; i++)
    {
        if (i % 9 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}