#include <iostream>
using namespace std;

int main() {
    double A, B;

    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;

    if (A == 0) {
        if (B == 0) {
            cout << "The equation is true for any number." << endl;
        } else {
            cout << "The equation has no root" << endl;
        }
    } else {
        double X = -B / A;
        cout << "Solution of equation: " << X << endl;
    }
    return 0;
}