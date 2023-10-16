// Create a Mini Calculator where a User can perform basis Arithmetic Operations.

#include <iostream>
using namespace std;

int main() {
    int ch, a, b;
    cout<<"-------------------------\n";
    cout<<"<--  Mini Calculator  -->\n";
    cout<<"-------------------------\n";
    cout<<"Enter the 1st Number: ";
    cin>>a;
    cout<<"Enter the 2nd Number: ";
    cin>>b;
    cout<<"-------------------------\n";
    cout<<"1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication \n";
    cout<<"4. Division\n";
    cout<<"Select the Option: ";
    cin>>ch;
    switch(ch) {
        case 1: cout<<"Result: "<<a+b;
                break;
        case 2: cout<<"Result: "<<a-b;
                break;
        case 3: cout<<"Result: "<<a*b;
                break;
        case 4: cout<<"Result: "<<a/b;
                break;
        default: cout<<"Please enter the Valid Option";
    }
}
