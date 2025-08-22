#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a[5];

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++)
    {
        int x;
        while (true)
        {
            cout << "Enter the th element" << i + 1 << ": ";
            cin >> x;
            if (isPrime(x))
            {
                a[i] = x;
                break;
            }
            else
            {
                cout << "The number is not prime. Please enter a prime number." << endl;
            }
            
            
        }
        
    }

    cout << "Array of prime numbers: ";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}