#include <iostream>
using namespace std;

int main()
{
    int userInput;                       // first i declare a variable
    cout << "Enter a number to grade: "; // now ask user to enter your number
    cin >> userInput;                    // user number stored in this variable which i created

    // now make a conditon for grading

    if (userInput >= 90 && userInput <= 100)
    {
        cout << "Grade A" << endl;
    }
    else if (userInput >= 80 && userInput < 90)
    {
        cout << "Grade B" << endl;
    }
    else if (userInput >= 70 && userInput < 80)
    {
        cout << "Grade C" << endl;
    }
    else if (userInput >= 60 && userInput < 70)
    {
        cout << "Grade D" << endl;
    }
    else if (userInput >= 0 && userInput < 60)
    {
        cout << "Grade F" << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }

    return 0;
}
