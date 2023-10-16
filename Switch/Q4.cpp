// Write a Program to perform different operations via Switch Statement.

#include <iostream>
using namespace std;

int main() {
    int ch, num, i, fact=1;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<"-------------------------\n";
    cout<<"1. Square of a Number\n";
    cout<<"2. Cube of a Number\n";
    cout<<"3. Factorial of a Number \n";
    cout<<"Select the Option: ";
    cin>>ch;
    switch(ch) {
        case 1: cout<<"Square: "<<num*num;
                break;
        case 2: cout<<"Cube: "<<num*num*num;
                break;
        case 3: for(i=1;i<=num;i++) {
                    fact=fact*i;
                }
                cout<<"Factorial: "<<fact;
                break;
        default: cout<<"Please enter the Valid Option";
    }
}
