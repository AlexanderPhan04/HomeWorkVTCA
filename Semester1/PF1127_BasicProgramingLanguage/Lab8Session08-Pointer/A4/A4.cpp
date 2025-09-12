#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of n: ";
    cin >> n;

    double* arr = new double[n];

    cout << "Enter " << n << " real numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "You entered: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}