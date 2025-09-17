#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <iomanip>
using namespace std;

string standardizeName(string str)
{
    while (!str.empty() && isspace(str.front()))
        str.erase(str.begin());

    while (!str.empty() && isspace(str.back()))
        str.pop_back();
    string result = "";
    bool space = false;
    for (char c : str)
    {
        if (isspace(c))
        {
            if (!space)
            {
                result += ' ';
                space = true;
            }
            else
            {
                result += tolower(c);
                space = false;
            }
        }

        bool capitalize = true;
        for (char &c : result)
        {
            if (capitalize && isalpha(c))
            {
                c = toupper(c);
                capitalize = false;
            }
            else if (isspace(c))
            {
                capitalize = true;
            }
        }
    }
    return result;
}

void displayStudents(const vector<string> &students)
{
    cout << left << setw(5) << "STT" << setw(25) << "Tên cũ" << setw(25) << "Tên chuẩn hóa" << endl;
    cout << string(55, '-') << endl;

    for (size_t i = 0; i < students.size(); i++)
    {
        cout << setw(5) << i + 1 << setw(25) << students[i] << setw(25) << standardizeName(students[i]) << endl;
    }
}

void searchStudents(const vector<string> &students, string keyword)
{
    bool found = false;
    for (size_t i = 0; i < students.size(); i++)
    {
        string orig = students[i];
        string normalized = standardizeName(orig);
        if (normalized.find(standardizeName(keyword)) != string::npos)
        {
            cout << "Find students at location" << i + 1 << ": " << normalized << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No students found!" << endl;
}

int main()
{
    system("chcp 65001 > nul");
    vector<string> students;
    int choice;

    do
    {
        cout << "==============================" << endl;
        cout << "            Menu              " << endl;
        cout << "==============================" << endl;
        cout << "1. Nhập thêm 1 học viên mới   " << endl;
        cout << "2. Tìm kiếm học viên          " << endl;
        cout << "3. Chuẩn hóa tên học viên     " << endl;
        cout << "4. Hiển thị danh sách học viên" << endl;
        cout << "0. Thoát                      " << endl;
        cout << "==============================" << endl;
        cout << "|Mời bạn chọn: ";
        cin >> choice;

        if (choice == 1)
        {
            string name;
            cout << "Nhập tên học viên: ";
            cin.ignore();
            getline(cin, name);
            students.push_back(name);
        }
        else if (choice == 2)
        {
            string keyword;
            cout << "Nhập tên cần tìm: ";
            cin.ignore();
            getline(cin, keyword);
            searchStudents(students, keyword);
        }
        else if (choice == 3)
        {
            cout << "Danh sách sau khi chuẩn hóa:";
            for (size_t i = 0; i < students.size(); i++)
            {
                students[i] = standardizeName(students[i]);
            }
            cout << "Đã chuẩn hóa tất cả tên học viên!";
        }
        else if (choice == 4)
        {
            displayStudents(students);
        }
        else if (choice == 0)
        {
            cout << "Thoát chương trình";
        }
        else
        {
            cout << "Lựa chọn không hợp lệ!";
        }
    } while (choice != 0);

    return 0;
}