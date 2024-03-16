#include <iostream>
using namespace std;
int main()
{
    float x = 7 / 22 * (3.14 + 2) * 3 / 5;  // x = 7/2 * 5.14 * 3/5 (x = int/int * float * int/int)
    cout << x;                              // x = 0 * 5.14 * 3/5   (x = int * float * int/int)
}                                          // x = 0 * 3/5           (x = int * int/int)
                                           // x = 0 /5              (x = int/int)
                                           // Final Answer will be ero 0:  