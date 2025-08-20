#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number n: ";
    cin >> n;

    long long f1 = 0, f2 = 1;

    cout << "Fibonacci is: ";

    for (int i = 1; i <= n; i++)
    {
        cout << f1 << " ";
        long long next = f1 + f2;
        f1 = f2;
        f2 = next;
    }
    
    cout << endl;

    return 0;
}