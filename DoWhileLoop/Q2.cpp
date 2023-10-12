// Write a Program to find the factorial of a number using Do While loop.

#include <iostream>
using namespace std;

int main() {
    int num,fact=1, i=1;
	cout << " Enter a number to find the factorial: ";
	cin>> num;
	do {
	    fact=fact*i;
	    i++;
	} while (i<=num);
	cout<<"The factorial of the given number is: "<<fact<<endl;
}