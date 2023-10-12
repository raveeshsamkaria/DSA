// Write a Program to find sum of first n natural numbers using Do While Loop.

#include <iostream>
using namespace std;

int main() {
	int n, i=1, sum=0;
	cout<<"Enter the Number to get the Sum: ";
	cin>>n;
	do {
	    sum+=i;
	    i++;
	} while (i<=n);
	cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
}