/*What will be the output of the following program? #include <iostream>
using namespace std;
 
int main()
{
    int a = 32, *ptr = &a;
    char ch = 'A', &cho = ch;
 
    cho += a;
    *ptr += ch;
    cout << a << ", " << ch << endl;
    return 0;
} */

     // OUTPUT
    
/*
Initialization:

Integer variable a is 32.
Integer pointer ptr is assigned to point to the address of a.
Character variable ch is 'A'.
Reference cho is to refer ch.  

It is a ASCII value of a
The output of this program will be  [97, a]

*/