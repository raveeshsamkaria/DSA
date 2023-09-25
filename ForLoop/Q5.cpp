// Print char from 'A'to'Z' & 'Z'to'A' with the help of a for loop.
#include <iostream>
using namespace std;

int main() {
    cout << "Alphabets from (A-Z) are:\n";
    for ( int i = 65; i <= 90; i++) {
        cout << (char)i << " ";
    }
    cout << "\nAlphabets from (a-z) are:\n";
    for (i = 97; i <= 122; i++) {
        cout << (char)i << " ";
    }
}