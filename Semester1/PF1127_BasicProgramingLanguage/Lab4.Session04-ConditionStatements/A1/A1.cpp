#include <iostream>
using namespace std;

int main()
{
    int A, B;

    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;

    if (A == 0 && B == 0)
    {
        cout << "Equation has infinite solutions." << endl;
    }
    else if (A == 0 && B != 0)
    {
        cout << "Unsolved equation." << endl;
    }
    else
    {
        double X = static_cast<double>(-B) / A;
        cout << "The solution is: X = " << X << endl;
    }

    return 0;
}