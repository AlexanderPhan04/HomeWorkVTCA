#include <iostream>
using namespace std;

int main()
{
    double km, mile;

    cout << "enter km: ";
    cin >> km;

    mile = km * 0.621371192;

    cout << km << " km = " << mile  << " mile" << endl;

    return 0;
}