#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "===========================" << endl;
    cout << "============MENU===========" << endl;
    cout << "===========================" << endl;
    cout << "1. CF" << endl;
    cout << "2. C" << endl;
    cout << "3. HDJ" << endl;
    cout << "4. DreamWeaver" << endl;
    cout << "5. RDBMS" << endl;
    cout << "6. Learn Java by Example" << endl;
    cout << "============================" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
        cout << "You selected CF." << endl;
        break;
        case 2:
        cout << "You selected C." << endl;
        break;
        case 3:
        cout << "You selected HDJ." << endl;
        break;
        case 4:
        cout << "You selected DreamWeaver." << endl;
        break;
        case 5:
        cout << "You selected RDBMS." << endl;
        break;
        case 6:
        cout << "You selected Learn Java by Example." << endl;
        break;
        default:
        cout << "Invalid choice. Please select a number between 1 and 6." << endl;
    }

    return 0;
}