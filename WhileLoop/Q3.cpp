// Write a Program to find the all Odd numbers from 1 to n using While Loop.

#include <iostream>
using namespace std;

int main() {
    int num, i=1;
    cout<<"Enter the number: ";
    cin>>num;
    while(i<=num) {
        if(i%2==1) {
            cout<<i<<endl;
        }
        i++;
    }
}