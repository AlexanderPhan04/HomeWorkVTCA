#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A, B, C;

    cout << "Enter A, B, C: ";
    cin >> A >> B >> C;

    if (A == 0)
    {
        if (B == 0)
        {
            if (C == 0)
            {
                cout << "The equation has infinite solutions." << endl;
            }
            else
            {
                cout << "The equation is unsolvable." << endl;
            }
        }
        else
            {
                double X = -C / B;
                cout << "The solution is: X = " << X << endl;
            }
    }
    else
    {
        double delta = B * B - 4 * A * C;
        
        if (delta < 0)
        {
            cout << "The equation is unsolvable." << endl;
        }
        else if (delta == 0)
        {
            double X = -B / (2 * A);
            cout << "Equation with double root: X = " << X << endl;
        }
        else
        {
            double X1 = (-B + sqrt(delta)) / (2 * A);
            double X2 = (-B - sqrt(delta)) / (2 * A);
            cout << "Equation with two distinct" << endl;
            cout << "roots: X1 = " << X1 << ", X2 = " << X2 << endl; 
        }
    }

    return 0;
}