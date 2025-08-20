#include <iostream>
#include <cmath>
using namespace std;

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
}
int main()
{
    double xA, yA, xB, yB, xC, yC, xD, yD;

    cout << "Enter the coordinates of point A (xA yA): ";
    cin >> xA >> yA;
    cout << "Enter the coordinates of point A (xB yB): ";
    cin >> xB >> yB;
    cout << "Enter the coordinates of point A (xC yC): ";
    cin >> xC >> yC;
    cout << "Enter the coordinates of point A (xD yD): ";
    cin >> xD >> yD;

    double S_ABC = area(xA, yA, xB, yB, xC, yC);

    if (S_ABC == 0)
    {
        cout << "Points A, B, and C are collinear." << endl;
        return 0;
    }

    double S1 = area(xD, yD, xB, yB, xC, yC);
    double S2 = area(xA, yA, xD, yD, xC, yC);
    double S3 = area(xA, yA, xB, yB, xD, yD);

    double S_sum = S1 + S2 + S3;

    double eps = 1e-9;

    if (fabs(S_sum - S_ABC) < eps)
    {
        cout << "Point D is inside the triangle ABC." << endl;
    }
    else
    {
        if (fabs(S1) < eps)
        {
            cout << "Point D is on the edge BC." << endl;
        }
        else if (fabs(S2) < eps)
        {
            cout << "Point D is on the edge AC." << endl;
        }
        else if (fabs(S3) < eps)
        {
            cout << "Point D is on the edge AB." << endl;
        }
        else
        {
            cout << "Point D is outside the triangle ABC." << endl;
        }
        
    }

    return 0;
}