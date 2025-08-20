#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}
int main()
{
    int N;

    cout << "Enter N: ";
    cin >> N;

    int count = 0;
    int num = 2;

    cout << N << " first prime numbers are: " << endl;

    while (count < N)
    {
        if (isPrime(num))
        {
            cout << num << " ";
            count++;
        }
        
        num++;
    }

    cout << endl;
    return 0;
    
}