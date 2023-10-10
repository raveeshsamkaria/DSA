// Print Sum of cube of first n natural number using While Loop.

#include <iostream>
using namespace std;

int main() {
    int n, i=1, sum = 0;
    cout<<"Enter any number: ";
    cin>>n;
    while(i<=n) {
        sum+=i*i*i;
        i++;
    }
    cout<<"Sum of cube of first "<<n<<" natural number: "<<sum;
}