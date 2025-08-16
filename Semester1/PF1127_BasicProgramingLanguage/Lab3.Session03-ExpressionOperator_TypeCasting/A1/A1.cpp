#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    // Swapping the values of num1 and num2
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Plus one to both numbers
    num1++;
    num2++;

    // printing the results
    cout << "After swapping and incrementing " << endl;
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}