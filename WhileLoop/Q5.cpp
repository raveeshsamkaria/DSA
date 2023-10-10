// Print char from 'A'to'Z' & 'Z'to'A' using While Loop.

#include <iostream>
using namespace std;

int main() {
    char i;
    cout << "Alphabets from (A-Z) are:\n";
    i=65;
    while(i<=90) {
        cout<<i<<" ";
        i++;
    }
    cout << "\nAlphabets from (a-z) are:\n";
    i=95;
    while(i<=122) {
        cout<<i<<" ";
        i++;
    }
}