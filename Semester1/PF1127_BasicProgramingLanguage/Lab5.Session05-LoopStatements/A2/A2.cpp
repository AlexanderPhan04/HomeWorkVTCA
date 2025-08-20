#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character(if space stop): ";

    while (true)
    {
        cin >> noskipws >> ch;
        if (isspace(ch) && ch == ' ')
        {
            cout << "You entered a space character. Stopping input." << endl;
            break;
        }
        if (isalpha(ch))
        {
            cout << ch << " is an alphabetic character." << endl;
        }
        else if (isdigit(ch))
        {
            cout << ch << " is a digit." << endl;
        }
        else
        {
            cout << ch << " is a special character." << endl;
        }
    }
    return 0;
}