// Print Sum of square of first n natural number using Do While Loop.

#include <iostream>
using namespace std;

int main() {
	int n, i=1, sum=0, sq=0;
	cout<<"Enter any number: ";
	cin>>n;
	do {
	    sq=i*i;
	    sum+=sq;
	    i++;
	} while(i<=n);
	cout<<"Sum of square of first "<<n<<" natural number: "<<sum;
}