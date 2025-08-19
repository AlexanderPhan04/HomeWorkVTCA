#include <iostream>
using namespace std;

int main()
{
    double num1, num2, result;
    char expression;

    cout << "===========================" << endl;
    cout << "=======Calculator Menu=====" << endl;
    cout << "===========================" << endl;
    cout << "+" << endl;
    cout << "-" << endl;
    cout << "*" << endl;
    cout << "/" << endl;
    cout << "============================" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator: ";
    cin >> expression;

    if (expression != '+' && expression != '-' && expression != '*' && expression != '/')
    {
        cout << "Invalid operator. Please enter one of +, -, *, /." << endl;
    }

    cout << "Enter second number: ";
    cin >> num2;

    switch (expression)
    {
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;
    default:
        cout << "Invalid operator. Please enter one of +, -, *, /." << endl;
        return 1; // Exit if an invalid operator is entered
        break;
    }
    cout << "Result: " << result << endl;
    cout << "===========================" << endl;
    return 0; 
}