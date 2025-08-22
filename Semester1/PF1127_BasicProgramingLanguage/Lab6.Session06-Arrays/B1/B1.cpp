#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
    
}
int main()
{
    const int SIZE = 20;
    int arr[SIZE];

    srand(time(NULL));
    cout << "Randomly generated array: ";
    for (int i = 0; i < SIZE; i++)
    {
        int num;
        do
        {
            num = rand() % 201;
        } while (!isPrime(num));
        
        arr[i] = num;
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
    
}