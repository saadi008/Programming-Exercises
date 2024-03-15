#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter three integer number : ";
    cin >> num1 >> num2 >> num3;
    int largest = num1;
    if (num2 > largest)
    {
        largest = num2;
    }
    else if (num3 > largest)
    {
        largest = num3;
    }
    else
    {
        cout << "The largest Number is " << largest;
    }
    return 0;
}