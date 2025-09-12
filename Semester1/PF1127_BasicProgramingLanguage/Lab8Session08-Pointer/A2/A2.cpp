#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr = arr;

    cout << "Enter five integers: ";
    for (int i = 0; i < 5; i++)
    {
        cout << "Arr[" << i << "] = ";
        cin >> *(ptr + i);
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }
    
    cout << endl;
    return 0;
}