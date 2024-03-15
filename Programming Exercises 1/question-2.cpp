#include <iostream>
#include <string>
using namespace std;

int main() {
    string strings[] = {"Hello", "Hi", "Air", "Bill", "Big"};

    string smallestString = strings[0]; // Assume that our first string is smallest 

    for (int i = 1; i < 5; ++i) {            // our loop itrate the array which starting from the second string "Hello"
        if (strings[i] < smallestString) {  // it compares the each string with  the smallest one when until it's found
            smallestString = strings[i];   // now it update the smallest string which is "Air"
        }
    }

    cout << "The smallest string is: " << smallestString << endl;

    return 0;
}
