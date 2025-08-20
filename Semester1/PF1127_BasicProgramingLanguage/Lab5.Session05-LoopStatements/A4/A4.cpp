#include <iostream>
using namespace std;

int main()
{
    int hobbyChoice;

    cout << "======================" << endl;
    cout << "======HOBBY MENU======" << endl;
    cout << "======================" << endl;
    cout << "1. Reading" << endl;
    cout << "2. Listening to Music" << endl;
    cout << "3. Playing Sports" << endl;
    cout << "4. Computer" << endl;
    cout << "5. Exit" << endl;
    cout << "======================" << endl;

    do
    {
        cout << "Enter your choice: ";
        cin >> hobbyChoice;

        switch (hobbyChoice)
        {
        case 1:
            cout << "You like Reading." << endl;
            break;
        case 2:
            cout << "You like Listening to Music." << endl;
            break;
        case 3:
            std::cout << "You like Playing Sports" << std::endl;
            break;
        case 4:
            std::cout << "You like Computer" << std::endl;
            break;
        case 5:
            std::cout << "See ya" << std::endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

    } while (hobbyChoice != 5);
    return 0;
}