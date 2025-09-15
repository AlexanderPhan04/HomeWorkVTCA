#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string standardization(string str)
{
    while (!str.empty() && isspace(str.front()))
    {
        str.erase(str.begin());
    }

    while (!str.empty() && isspace(str.back()))
    {
        str.pop_back();
    }

    string result = "";
    bool space = false;
    for (char c : str)
    {
        if (isspace(c))
        {
            if (!space)
            {
                result += ' ';
                space = true;
            }
        }
        else
        {
            result += c;
            space = false;
        }
    }
    if (!result.empty() && islower(result[0]))
    {
        result[0] = toupper(result[0]);
    }

    return result;
}

int main()
{
    string s;
    cout << "Enter a string : ";
    getline(cin, s);

    string rs = standardization(s);
    cout << "Standardized string: " << rs << endl;

    return 0;
}
