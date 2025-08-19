#include <iostream>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        cout << "The numbers can form a triangle." << endl;
    }
    else
    {
        cout << "The numbers cannot form a triangle." << endl;
    }

    return 0;
}