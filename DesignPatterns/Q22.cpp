// Print the following pattern
//         A 
//       A B 
//     A B C 
//   A B C D 
// A B C D E 

#include <iostream>
using namespace std;

int main() {
    int row, col, n;
    char name;
    cout<<"Enter the Number: ";
    cin>>n;
    for(row=1; row<=n; row++) {
        // Print Space
        for(col=1; col<=n-row; col++) {
            cout<<"  ";
        }
        // Print Characters
        for(col=1; col<=row; col++) {
            name = 'A'+col-1;
            cout<<name<<" ";
        }
        cout<<endl;
    }
}