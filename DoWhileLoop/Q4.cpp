// Write a Program to find the all numbers from 1 to n, which is divisible by 5 using Do While Loop.

#include <iostream>
using namespace std;

int main() {
    int num, i=1;
    cout<<"Enter the number: ";
    cin>>num;
    do {
        if(i%5==0) {
            cout<<i<<endl;
        }
        i++;
    } while (i<=num);
}