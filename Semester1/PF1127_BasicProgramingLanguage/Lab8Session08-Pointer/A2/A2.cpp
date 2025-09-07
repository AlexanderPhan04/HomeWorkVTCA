#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int arr[SIZE];
    int *ptr = arr;

    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> *(ptr + i);
    }

    cout << "You entered:" ;
    

    return 0;
}