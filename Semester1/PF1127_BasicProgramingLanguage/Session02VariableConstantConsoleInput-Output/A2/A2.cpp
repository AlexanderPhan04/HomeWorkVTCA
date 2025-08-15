#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter integer a: ";
    cin >> a;

    cout << "Enter integer b: ";
    cin >> b;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;

    if(b != 0) {
        cout << "Division: " << (a / b) << endl; 
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}