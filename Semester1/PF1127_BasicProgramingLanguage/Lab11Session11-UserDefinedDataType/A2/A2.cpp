#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Product
{
    string name;
    int quantity;
    float price;
};

int main()
{
    Product product[5];
    int n = 5;
    float totalAll = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter product " << i + 1 << " name: ";
        cin.ignore();
        getline(cin, product[i].name);

        cout << "Enter quantity: ";
        cin >> product[i].quantity;

        cout << "Enter unit price ($): ";
        cin >> product[i].price;
    }

    cout << "Product catalog" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << left << setw(5) << "STT" << setw(20) << "Product Name" << setw(10) << "Quantity" << setw(12) << "Unit Price($)" << setw(12) << "Total($)" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------";

    for (int i = 0; i < n; i++)
    {
        float total = product[i].quantity * product[i].price;
        totalAll += total;

        cout << left << setw(5) << i + 1 << setw(20) << product[i].name << setw(10) << product[i].quantity << setw(12) << product[i].price << setw(12) << total << endl;
    }

    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout << right << setw(49) << "Grand Total: " << totalAll << endl;

    return 0;
}