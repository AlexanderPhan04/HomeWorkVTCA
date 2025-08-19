#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i = 5;
    int j = 7;

    double result = static_cast<double>(i) / j;

    cout << fixed << setprecision(7);
    cout << "Result: " << result << endl;

    return 0;
}