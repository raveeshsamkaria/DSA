 // Write a program in C++ to display n terms of natural numbers and their sum.
#include <iostream>
using namespace std;

int main() {
    int num, sum=0;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=1; i<=num; i++) {
        cout<<i<<",";
        sum = sum + i;
    }
    cout<<"\nSum: "<<sum;
}