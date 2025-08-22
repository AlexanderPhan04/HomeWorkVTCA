#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int a[SIZE];

    cout << "Enter" << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> a[i];
    }

    int maxVal = a[0], minVal = a[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (a[i] > maxVal) maxVal = a[i];
        if (a[i] < minVal) minVal = a[i];
    }

    int countMax = 0, countMin = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (a[i] == maxVal) countMax++;
        if (a[i] == minVal) countMin++;
    }

    cout << "Maximum value: " << maxVal << " (occurs " << countMax << " times)" << endl;
    cout << "Minimum value: " << minVal << " (occurs " << countMin << " times)" << endl;
    
    return 0;
}