// Print n’th Fibonacci number using While Loop.

#include <iostream>
using namespace std;

int main() {
    int n1=0, n2=1, n3, i, n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<n1<<" "<<n2<<" ";
    i=2;
    while(i<n) {
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
        i++;
    }
}