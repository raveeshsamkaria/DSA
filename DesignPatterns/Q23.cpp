// Print the following pattern
//         1 
//       2 1 
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1 

#include <iostream>
using namespace std;

int main() {
    int row, col, n;
    cout<<"Enter the Number: ";
    cin>>n;
    for(row=1; row<=n; row++) {
        // Print Space
        for(col=1; col<=n-row; col++) {
            cout<<"  ";
        }
        // Print Numbers
        for(col=row; col>=1; col--) {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}