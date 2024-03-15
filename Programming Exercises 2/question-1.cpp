
#include <iostream>
using namespace std;

int main()
{
    const int size = 10;   // first i created a constant variable which hold a number of 10 arrays
    int numbers[size];     // than i declare an array 'number' of size 10 which stored user integers
    double sum = 0;

    // Now Reading the entries from the user
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cout << "Entry " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i]; // Calculating sum
    }

    // Calculate average (x)
    double x = sum / size;

    cout << "Average (x): " << x << endl;

    // Now Displaying entries which is  greater than or equal to (x)
    cout << "Entries greater than or equal to x:" << endl;
    for (int i = 0; i < size; ++i)
    {
        if (numbers[i] >= x)
        {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
