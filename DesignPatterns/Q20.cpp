// Print the following pattern
//         1 
//       2 2 
//     3 3 3 
//   4 4 4 4 
// 5 5 5 5 5 

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
        for(col=1; col<=row; col++) {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}