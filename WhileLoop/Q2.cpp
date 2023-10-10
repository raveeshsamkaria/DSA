// Write a Program to find the factorial of a number using While loop.

#include <iostream>
using namespace std;

int main() {
    int num,fact=1, i=1;
	cout << " Enter a number to find the factorial: ";
	cin>> num;
	while (i<=num) {
	    fact=fact*i;
	    i++;
	}
	cout<<"The factorial of the given number is: "<<fact<<endl;
}