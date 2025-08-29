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

void displayArray(const vector<int>& arr)
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

void getIntegerInput()
{
    int value;
    while (!(cin >> value))
    {
        
    }
    
}

int main()
{

}