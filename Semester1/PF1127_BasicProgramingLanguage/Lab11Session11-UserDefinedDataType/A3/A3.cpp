#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Mark
{
	string subject;
	float written;
	float practical;
	float average;
};

int main()
{
	const int N = 6;
	Mark marks[N];
	bool entered = false;
	int choice;

	do
	{
		cout << "====================MENU===============" << endl;
		cout << "|1. Enter marks                       |" << endl;
		cout << "|2. Display marks list                |" << endl;
		cout << "|3. Show subject with highest average |" << endl;
		cout << "|4. Exit                              |" << endl;
		cout << "======================================|" << endl;
		cout << "Choose: " << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			{
				cout << "Enter Marks for " << N << " subject" << endl;
				cin.ignore();
				for (int i = 0; i < N; i++)
				{
					cout << "Enter subject name " << i + 1 << ": " << endl;
					getline(cin, marks[i].subject);
					cout << "Written mark: ";
					cin >> marks[i].written;

					cout << "Practical marks: ";
					cin.ignore();

					marks[i].average = (marks[i].written + marks[i].practical) / 2;
				}
				entered = true;
				break;
			}
		case 2:
			if (!entered)
			{
				cout << "Please enter marks first!" << endl;
				break;
				cout << "========Marks List=======" << endl;
				cout << left << setw(20) << "Subject" << setw(12) << "Written" << setw(12) << "Practical" << setw(12) << "Averger" << endl;
				cout << string(60, '-') << endl;

				for (int i = 0; i < N; i++)
				{
					cout << left << setw(20) << marks[i].subject << setw(12) << marks[i].written << setw(12) << marks[i].practical << setw(12) << marks[i].average << endl;
				}
				break;
			}
		case 3:
			{
			if (!entered)
			{
				cout << "Please enter marks first!" << endl;
				break;
			}
			int bestIndex = 0;
			for (int i = 0; i < N; i++)
			{
				if (marks[i].average > marks[bestIndex].average)
				{
					bestIndex = i;
				}
			}
			cout << "Subject with highest average" << endl;
			cout << "Subject: " << marks[bestIndex].subject << endl;
			cout << "Averger: " << marks[bestIndex].average << endl;
			break;
			}
	case 4:
			cout << "Exiting program..." << endl;
			break;

		default:
			cout << "Invalid choice, please try again!";
		
		}
		
	} while (choice !=4);

	return 0;
}