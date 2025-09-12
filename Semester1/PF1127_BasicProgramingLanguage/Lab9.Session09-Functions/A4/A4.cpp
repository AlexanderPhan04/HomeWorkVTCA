#include <iostream>
#include <limits>
using namespace std;

int getMenuChoice()
{
    int choice;
    while (true)
    {
        cout << "==========================" << endl;
        cout << "|         Menu           |" << endl;
        cout << "==========================" << endl;
        cout << "|1. Menu 1               |" << endl;
        cout << "|2. Menu 2               |" << endl;
        cout << "|3. Menu 3               |" << endl;
        cout << "|4. Menu 4               |" << endl;
        cout << "|5. Exit                 |" << endl;
        cout << "==========================" << endl;
        cout << "Please choose: ";
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 5)
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max());
            cout << "Entered incorrectly, re-enter." << endl;
        }
        else
        {
            return choice;
        }
    }
}

int main()
{
    int choice;
    do
    {
        choice = getMenuChoice();
        switch (choice)
        {
        case 1:
            cout << "Doing menu 1..." << endl;
            break;
        case 2:
            cout << "Doing menu 2..." << endl;
            break;
            case 3:
            cout << "Doing menu 3..." << endl;
            break;
            case 4:
            cout << "Doing menu 4..." << endl;
            break;
            case 5:
            cout << "Exiting program..." << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}