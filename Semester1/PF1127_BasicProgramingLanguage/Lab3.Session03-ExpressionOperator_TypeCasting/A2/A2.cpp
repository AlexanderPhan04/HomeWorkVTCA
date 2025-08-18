#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, ex;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    ex = pow(x, 3) + 3 * pow(x, 2) + 3 * x * pow(y, 2) + pow(y, 3);

    cout  << "Result: " << ex << endl;

    return 0;
}