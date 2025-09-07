#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *pa = &a;
    int *pb = &b;

    cout << "Enter integer a: ";
    cin >> *pa;
    cout << "Enter integer b: ";
    cin >> *pb;

    cout << "Initial values" << endl;
    cout << "a = " << *pa << ", address = " << pa << endl;
    cout << "b = " << *pb << ", address = " << pb << endl;

    int temp = *pa;
    *pa = *pb;
    *pb = temp;

    cout << "After swapping" << endl;
    cout << "a = " << *pa << ", address = " << pa << endl;
    cout << "b = " << *pb << ", address = " << pb << endl;

    return 0;
}