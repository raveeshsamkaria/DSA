// Print Sum of square of first n natural number using While Loop.

#include <iostream>
using namespace std;

int main() {
	int n, i=1, sum=0, sq=0;
	cout<<"Enter any number: ";
	cin>>n;
	while(i<=n) {
	    sq=i*i;
	    sum+=sq;
	    i++;
	}
	cout<<"Sum of square of first "<<n<<" natural number: "<<sum;
}