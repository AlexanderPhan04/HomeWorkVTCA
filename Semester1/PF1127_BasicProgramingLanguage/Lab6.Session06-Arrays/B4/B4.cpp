#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int STUDENTS = 5;
    const int SUBJECTS = 3;
    double scores[STUDENTS][SUBJECTS];
    double avg[STUDENTS];

    for (int i = 0; i < STUDENTS; i++)
    {
        cout << "Enter scores for student " << (i + 1)<< ":" << endl;
        for (int j = 0; j < SUBJECTS; j++)
        {
            cout << "Subject " << (j + 1) << ": ";
            cin >> scores[i][j];
        }
    }

    for (int i = 0; i < STUDENTS; i++)
    {
        double sum = 0;
        for (int j = 0; j < SUBJECTS; j++)
        {
            sum += scores[i][j];
        }
        avg[i] = sum / SUBJECTS;
    }

    cout << "Average scores: " << endl;
    cout << setw(10) << "Student";
    for (int j = 0; j < SUBJECTS; j++)
    {
        cout << setw(8) << "Subject " + to_string(j+1); 
    }
    cout << setw(8) << "Average";
    cout << endl;

    for (int i = 0; i < STUDENTS; i++)
    {
        cout << setw(10) << "Student " + to_string(i+1);
        for (int j = 0; j < SUBJECTS; j++)
        {
            cout << setw(8) << fixed << setprecision(1) << scores[i][j];
        }
        cout << setw(8) << fixed << setprecision(1) << avg[i];
        cout << endl;
    }
    return 0;
}