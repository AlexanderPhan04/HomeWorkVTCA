#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    const int SIZE = 10;
    char arr[SIZE];

    cout << "Enter "  << SIZE << " characters: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
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