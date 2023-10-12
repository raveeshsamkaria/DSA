// Print char from 'A'to'Z' & 'Z'to'A' using Do While Loop.

#include <iostream>
using namespace std;

int main() {
    char i;
    cout << "Alphabets from (A-Z) are:\n";
    i=65;
    do {
        cout<<i<<" ";
        i++;
    } while(i<=90);
    cout << "\nAlphabets from (a-z) are:\n";
    i=95;
    do {
        cout<<i<<" ";
        i++;
    } while(i<=122);
}