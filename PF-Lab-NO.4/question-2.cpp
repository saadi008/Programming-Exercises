#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "Enter your grade: ";
    cin >> grade;

    if (grade >= 90)
    {
        cout << "Great Work! " << endl;
    }
    else if (grade >= 80)
    {
        cout << "Good Job!" << endl;
    }
    else if (grade >= 70)
    {
        cout << "Good Try!" << endl;
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << "Study Harder " << endl;
    }
    else
    {
        cout << "Tutoring is available " << endl;
    }
}