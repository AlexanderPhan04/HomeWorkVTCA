#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <=0) return 0;
    if (n == 1) return 1;

    int f0 = 0, f1 = 1, fn = 0;
    for (int i = 2; i <= n; i++)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}