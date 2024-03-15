/*What will be the output of the following program?
#include <iostream>

using namespace std;

int main () {
   int  var = 20;   // actual variable declaration.
   int  *ip;        // pointer variable

   ip = &var;       // store address of var in pointer variable

   cout << "Value of var variable: ";
   cout << var << endl;

   // print the address stored in ip pointer variable
   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   // access the value at the address available in pointer
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   return 0;
}*/

// OUTPIT
/*
                                 Initialization:

We have a variable named var which is an integer set to 20.
There's a pointer variable named ip declared.
The pointer ip is made to point to the memory address of the variable var.

                                        Output:

"Value of var variable: ": This line shows the value stored in the variable var, which is 20.

"Address stored in ip variable: ": This line displays the memory address stored in the pointer variable ip. 
Since ip points to var, it will show the memory location where var is stored.

"Value of *ip variable: ": This line uses the pointer ip to access the value stored at the memory address it points to. 
As ip points to var, it will show the value stored in var, which is 20.

                                       FINAL OUTPUT:
Value of var variable: 20
Address stored in ip variable: [Memory Address of var]
Value of *ip variable: 20

*/