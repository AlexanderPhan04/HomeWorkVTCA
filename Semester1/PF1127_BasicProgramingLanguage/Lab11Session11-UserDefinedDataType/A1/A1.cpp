#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

struct Mark
{
	char subject[80];
	float written;
	float practical;
};

int main()
{
	Mark m;

	cout << "Enter subject name: ";
	cin.getline(m.subject, 80);

	cout << "Enter written exam mark: ";
	cin >> m.written;

	cout << "Enter pracice exam mark: ";
	cin >> m.practical;

	float avg = (m.written + m.practical) / 2;

	cout << "=============================" << endl;
	cout << "|      Score information    |" << endl;
	cout << "=============================" << endl;
	cout << "|Subject:                   |" << m.subject << endl;
	cout << "|Written Mark:              |" << m.written << endl;
	cout << "|Practical Mark:            |" << m.practical << endl;
	cout << "|Avg:                       |" << avg << endl;
	cout << "|___________________________|" << endl;

	return 0;
}