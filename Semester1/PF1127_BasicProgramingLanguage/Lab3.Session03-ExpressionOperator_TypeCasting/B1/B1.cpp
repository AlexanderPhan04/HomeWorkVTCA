#include <iostream>
using namespace std;

int main()
{
    int a, b;


    cout << "Enter integer a: ";
    cin >> a;
    cout << "Enter integer b: ";
    cin >> b;
    
    cout << "a & b (AND) = " << (a & b) << endl;
    cout << "a | b (OR) = " << (a | b) << endl;
    cout << "a ^ b (XOR) = " << (a ^ b) << endl;
    cout << "~a (NOT) = " << (~a) << endl;

    return 0;
}