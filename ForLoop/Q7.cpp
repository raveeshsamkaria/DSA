// Print Sum of cube of first n natural number.
#include<iostream>
using namespace std;

int main() {
   int n, sum = 0;
   cout<<"Enter any number: ";
   cin>>n;
   for (int i = 1; i <= n; i++) {
      sum += i * i * i;
   }
   cout<<"Sum of cube of natural number: "<<sum;
}