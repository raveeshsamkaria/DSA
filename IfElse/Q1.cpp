// Take two numbers as an input from user and print the greater number. It is given that both numbers can’t be the same.
#include<iostream.h>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter 1st Number: ";
    cin>>a;
    cout<<"Enter 2nd Number: ";
    cin>>b;
    if (a>b)
        cout<<a<<" is greater";
    else
        cout<<b<<" is greater";
}