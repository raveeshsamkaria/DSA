// Print the following pattern
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 

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
        // Print Stars
        for(col=1; col<=2*row-1; col++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}