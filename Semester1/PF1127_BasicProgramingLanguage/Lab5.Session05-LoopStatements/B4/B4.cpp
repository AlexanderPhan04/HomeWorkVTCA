#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter numbers (0 -> 31): ";
    cin >> n;

    if (n < 0 || n > 31)
    {
        cout << "Numbers invalid!" << endl;
        return 0;
    }

    cout << "5 bit binary representation is: ";

    for (int i = 4; i >= 0; i--)
    {
        int bit = (n >> i) & 1;
        cout << bit;
    }

    cout << endl;
    return 0;
}
