#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d;
    cout << "Enter four real numbers: " << endl;
    cin >> a >> b >> c >> d;

    double maxVal = a;
    double minVal = b;

    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
    if (d > maxVal) maxVal = d;

    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;
    if (d < minVal) minVal = d;

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}