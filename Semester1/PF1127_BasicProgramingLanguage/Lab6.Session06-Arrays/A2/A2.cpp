#include <iostream>
using namespace std;

int main()
{
    int arrInt[10];
    float arrFloat[5];

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        cout << "arrFloat[" << i << "] = ";
        cin >> arrFloat[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 1)
        {
            arrInt[i] = (int)arrFloat[i / 2];
        }
        else
        {
            arrInt[i] = 0;
        }
        
        
    }

    cout << "Array of real numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arrFloat[i] << " ";
    }

    cout << "Array of integers: ";
    for (int i = 0; i < 10; i++)
    {
        cout << arrInt[i] << " ";
    }
    
    return 0;
}