#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char ch;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter a character to count: ";
    cin >> ch;

    for (char c : str)
    {
        if (c == ch)
        {
            count++;
        }
    }
    
    cout << "The character " << ch << " appears " << count << " times in the string." << endl;
    return 0;
}