#include <iostream>
#include <cmath>
using namespace std;

int intputNumber()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    return num;
}

int checkNumber(int num)
{
    if (num < 2) return 0;
    for (int i = 2; i <=sqrt(num); i++)
    {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main()
{
    const int SIZE = 7;
    int arr[SIZE];

    cout << "Input " << SIZE << " integers:";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Number arr[" << i << "]: " << endl;
        arr[i] = intputNumber();
    }
    
    cout << "Prime numbers in the array: ";
    bool found = false;
    for (int i = 0; i < SIZE; i++)
    {
        if (checkNumber(arr[i]))
        {
            cout << arr[i] << " ";
            found = true;
        }
        
    }
    if (!found)
    {
        cout << "No prime number found.";
    }
    
    cout << endl;
    return 0;
}