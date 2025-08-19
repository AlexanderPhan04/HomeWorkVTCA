#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double r, h, area, volume;

    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter height: ";
    cin >> h;

    area = M_PI * r * r;

    volume = area * h;

    cout << "Area: " << area << endl;
    cout << "Volume: " << volume << endl;

    return 0;
}