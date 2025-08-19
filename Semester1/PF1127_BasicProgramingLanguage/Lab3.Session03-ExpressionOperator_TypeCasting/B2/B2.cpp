#include <iostream>
using namespace std;

int main()
{
    int n, reversed = 0;

    cout << "Enter a 6 digit number: ";
    cin >> n;

    if(n < 100000 || n > 999999)
    {
        cout << "Please enter a valid 6 digit number." << endl;
        return 1;
    }

    int temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    
    cout << "Your number you entered: " << n << endl;
    cout << "Reversed number: " << reversed << endl;

    return 0;

}