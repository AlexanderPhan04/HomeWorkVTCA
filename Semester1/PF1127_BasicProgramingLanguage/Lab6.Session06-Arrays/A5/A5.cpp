#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    srand(time(NULL));

    cout << "Randomly generated array: ";
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 101;
        cout << arr[i] << " ";
    }
    cout << endl;

    int x;
    cout << "Enter a number in the range 0-100: ";
    cin >> x;

    bool found = false;
    int firstPos = -1;
    int count = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == x)
        {
            count++;
            if (!found)
            {
                found = true;
                firstPos = i;
            }
            
        }
        
    }

    if (found)
    {
        cout << "The number " << x << " is found int the array." << endl;
        cout << "First position: " << firstPos << endl;
        cout << "Number appears in: " << count << endl;
    }
    else
    {
        cout << "The number " << x << " is not found in the array." << endl;
    }
    
    return 0;
}