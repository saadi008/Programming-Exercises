#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;

    cout << " Enter two number: ";
    cin >> num1 >> num2;

    cout << "Enter an Operator (+, -, *, /, %): ";
    cin >> op;

    if (op == '+')
    {
        cout << "Result: " << num1 + num2 << endl;
    }
    else if (op == '-')
    {
        cout << "Result: " << num1 - num2 << endl;
    }
    else if (op == '*')
    {
        cout << "Result: " << num1 * num2 << endl;
    }
    else if (op == '/')
    {
        if (num2 != 0)
        {
            cout << "Result: " << num1 / num2 << endl;
        }
        else
            cout << "Error Division by zero! " << endl;
    }
    else if (op == '%')
    {
        if (num2 != 0)
        {
            cout << "Resullt: " << num1 % num2 << endl;
        }
        else
            cout << "Error: Enter Modulus Operator: " << endl;
    }
    else
        cout << "Invalid operator!" << endl;

    return 0;
}
