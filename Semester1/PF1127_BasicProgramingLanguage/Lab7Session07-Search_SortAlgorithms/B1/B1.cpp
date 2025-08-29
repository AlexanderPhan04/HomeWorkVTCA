#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

void displayMenu()
{
    cout << "--------------------------------------" << endl;
    cout << "|                Menu                |" << endl;
    cout << "|------------------------------------|" << endl;
    cout << "|1. Input one element for array      |" << endl;
    cout << "|2. Correct the word by position     |" << endl;
    cout << "|3. Remove element by position       |" << endl;
    cout << "|4. Linear search for 1 element      |" << endl;
    cout << "|5. One element binary search        |" << endl;
    cout << "|6. Sort in descending order         |" << endl;
    cout << "|7. Insert one element into the list |" << endl;
    cout << "|8. Display the array                |" << endl;
    cout << "|0. Exit                             |" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Enter your choice: ";
}

void displayArray(const vector<int> &arr)
{
    if (arr.empty())
    {
        cout << "Array is empty." << endl;
        return;
    }
    cout << "Array elements: ";
    for (int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;
}

int getIntegerInput()
{
    int value;
    while (!(cin >> value))
    {
        cout << "Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}

int main()
{
    vector<int> numbers;
    int choice;

    do
    {
        displayMenu();
        choice = getIntegerInput();

        switch (choice)
        case 1:
        {
            cout << "Enter an integer to add to the array: ";
            int value = getIntegerInput();
            numbers.push_back(value);
            cout << "Element added." << endl;
            break;
        }
        case 2:
        {
            if (numbers.empty())
            {
                cout << "Array is empty. Cannot correct any element." << endl;
                break;
            }
            cout << "Enter the position to correct (0 to " << numbers.size() - 1 << "):  ";
            int index = getIntegerInput();
            if (index >= 0 && index < numbers.size())
            {
                cout << "Enter the new value: ";
                int newValue = getIntegerInput();
                numbers[index] = newValue;
                cout << "Element corrected." << endl;
            }
            else
            {
                cout << "Invalid position." << endl;
            }
            break;
        }
        case 3:
        {
            if (numbers.empty())
            {
                cout << "Array is empty. Cannot remove any element." << endl;
                break;
            }
            cout << "Enter the position to remove (0 to " << numbers.size() - 1 << "): ";
            int index = getIntegerInput();
            if (index >= 0 && index < numbers.size())
            {
                /* code */
            }
            
            
        }

    } while (choice != 0);

    return 0;
}