#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 20;
    int fib[SIZE];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < SIZE; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    cout << "20 Fibonacci numbers: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << fib[i] << " ";
    }

    cout << endl;
    
    return 0;
}