#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
    const int SIZE = 100;
    int arr[SIZE];

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 1001;
    }

    cout << "Random array: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(5) << arr[i];
        if((i + 1) % 10 == 0) cout << endl;
    }
    
    sort(arr, arr + SIZE);

    cout << "Array after sorting: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(5) << arr[i];
        if ((i +1) % 10 ==0) cout << endl;
    }
    
    int x;
    cout << "Enter a number to search: ";
    cin >> x;

    bool found = binary_search(arr, arr + SIZE, x);
    if (found)
    {
        int pos = lower_bound(arr, arr + SIZE, x) - arr;
        cout << "Number " << x << " found at position " << pos << endl;
    }
    else
    {
        cout << "Number " << x << " not found in the array." << endl;
    }
    
    return 0;
    
}