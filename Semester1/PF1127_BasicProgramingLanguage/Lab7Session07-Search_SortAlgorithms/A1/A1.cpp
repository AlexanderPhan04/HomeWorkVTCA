#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements n: ";
    cin >> n;

    int a[100];
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[i];
                a[j] = temp;
            }
            
        }
        
    }

    cout << "Array after sorting: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}