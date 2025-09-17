#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
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

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    string s;
    cout << "Enter string(max 80 characters): ";
    getline(cin, s);

    if (s.length() > 80)
    {
        s = s.substr(0, 80);
        cout << "Error: String exceeds 80 characters." << endl;
    }

    int totalChars = s.length();

    int vowelCount = 0;
    for (char c : s)
    {
        if (isalpha(c) && isVowel(c))
        {
            vowelCount++;
        }
    }

    double vowelPercent = (totalChars > 0) ? (vowelCount * 100.0 / totalChars) : 0;

    int wordCount = 0;
    bool inWord = false;
    for (char c : s)
    {
        if (!isspace(c) && !inWord)
        {
            wordCount++;
            inWord = true;
        }
        else if (isspace(c))
        {
            inWord = false;
        }
    }

    string rs = standardization(s);

    cout << "==============================" << endl;
    cout << "Total characters: " << totalChars << endl;
    cout << "Total vowels: " << vowelCount << " (" << fixed << setprecision(2) << vowelPercent << "%)" << endl;
    cout << "Total words: " << wordCount << endl;
    cout << "Standardized string: " << rs << endl;
    
    return 0;
}
