#include <iostream>
using namespace std;

int main()
{
    const int SIZE 100;
    int arr[SIZE];

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        cout << setw(5) << arr[i];
        if ((i + 1) % 10 == 0) cout << endl;
    }

    

    sort(arr, arr + SIZE);

    cout << ""
    
}