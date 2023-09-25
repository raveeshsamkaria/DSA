// Print Sum of square of first n natural number.
#include<iostream>
using namespace std;

int main() {
	int n,i,sum=0,d;
	cout<<"Enter any number: ";
	cin>>n;
	for(i=1;i<=n;++i) {
		d=i*i;
		sum+=d;
	}
	cout<<"Sum of square of natural number: "<<sum;
}