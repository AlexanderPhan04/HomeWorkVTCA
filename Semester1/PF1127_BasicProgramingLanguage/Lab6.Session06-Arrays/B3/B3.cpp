#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    const int SIZE = 10;
    char arr[SIZE];

    cout << "Enter 10 characters(a-z): ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];

        while (arr[i] < 'a' || arr[i] > 'z')
        {
            cout << "Enter a valid character (a-z): ";
            cin >> arr[i];
        }
        
    }

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = toupper(arr[i]);
    }
    
    cout << "Array after converting to uppercase: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}