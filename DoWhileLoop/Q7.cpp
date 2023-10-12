// Print Sum of cube of first n natural number using Do While Loop.

#include <iostream>
using namespace std;

int main() {
    int n, i=1, sum = 0;
    cout<<"Enter any number: ";
    cin>>n;
    do {
        sum+=i*i*i;
        i++;
    } while(i<=n);
    cout<<"Sum of cube of first "<<n<<" natural number: "<<sum;
}