#include <iostream>
using namespace std;

int main() {
    double xA, yA, xB, yB, xC, yC;

    cout << "Enter coordinates of point A (xA, yA): ";
    cin >> xA >> yA;
    cout << "Enter coordinates of point B (xB, yB): ";
    cin >> xB >> yB;
    cout << "Enter coordinates of point C (xC, yC): ";
    cin >> xC >> yC;

    double area = 0.5 * ((xB- xA) * (yC - yA) - (xC - xA) * (yB - yA));

    if (area == 0) {
        cout << "The points A, B, and C are collinear.";
    }
    else 
    {
        cout << "The points A, B, and C are not collinear." << endl;
    }

    return 0;
}