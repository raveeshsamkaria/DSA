// Write a Program to find the all numbers from 1 to n, which is divisible by 3 using While Loop.

#include <iostream>
using namespace std;

int main() {
    int num, i=1;
    cout<<"Enter the number: ";
    cin>>num;
    while (i<=num) {
        if(i%3==0) {
            cout<<i<<endl;
        }
        i++;
    }
}