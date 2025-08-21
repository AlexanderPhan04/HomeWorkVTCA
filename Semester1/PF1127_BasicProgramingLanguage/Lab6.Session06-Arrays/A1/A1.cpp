#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    cout << "Enter 10 integers: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "The elements in even positions are: ";
    for (int i = 0; i < SIZE; i+= 2)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}