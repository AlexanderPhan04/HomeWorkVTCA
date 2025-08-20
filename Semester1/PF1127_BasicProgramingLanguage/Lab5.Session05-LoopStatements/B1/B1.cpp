#include <iostream>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter a positive integers: ";
    cin >> n;
    cout << "Enter another positive integer: ";
    cin >> m;

    if (n > m)
    {
        int temp = n;
        n = m;
        n = temp;
    }

    cout << "Numbers divisible by 7 in the range [" << n << ", " << m << "] are: ";
    for (int i = n; i <= m; i++)
    {
        if (i % 7 == 0)
        {
            cout << i << " ";
        }
        
    }
    
    cout << endl;

    return 0;
}