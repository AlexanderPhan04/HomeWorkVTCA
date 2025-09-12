#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int a[SIZE], b[SIZE], c[SIZE];

    cout << "Enter elements of array A (" << SIZE << " integers):";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> *(a + i);
    }
    
    cout << "Enter elements of array A (" << SIZE << " integers):";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> *(b + i);
    }

    for (int i = 0; i < SIZE; i++)
    {
        *(c + i) = *(a + i) + *(b + i);
    }
    

    return 0
}