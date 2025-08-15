#include <iostream>
using namespace std;

int main() {
    cout << "Size of data types (byte):" << endl;
    cout << "--------------------------" << endl;
    cout << "char: " << sizeof(char) << " byte" << endl;
    cout << "signed char: " << sizeof(signed char) << " byte" << endl;
    cout << "unsigned char: " << sizeof(unsigned char) << " byte" << endl;

    cout << "short: " << sizeof(short) << " byte" << endl;
    cout << "unsigned short: " << sizeof(unsigned short) << " byte" << endl;

    cout << "int: " << sizeof(int) << " byte" << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << " byte" << endl;

    cout << "long: " << sizeof(long) << " byte" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " byte" << endl;

    cout << "long long: " << sizeof(long long) << " byte" << endl;
    cout << "unsigned long long: " << sizeof(unsigned long long) << " byte" << endl;

    cout << "float: " << sizeof(float) << " byte" << endl;
    cout << "double: " << sizeof(double) << " byte" << endl;
    cout << "long double: " << sizeof(long double) << " byte" << endl;

    cout << "bool: " << sizeof(bool) << " byte" << endl;

    cout << "wchar_t: " << sizeof(wchar_t) << " byte" << endl;
    cout << "char16_t: " << sizeof(char16_t) << " byte" << endl;
    cout << "char32_t: " << sizeof(char32_t) << " byte" << endl;
    
    return 0;
}