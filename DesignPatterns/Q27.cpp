// Print the following pattern
//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 

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
        // Print 1 to Row
        for(col=1; col<=row; col++) {
            cout<<col<<" ";
        }
		// Print Row-1 to 1
		for(col=row-1; col>=1; col--) {
			cout<<col<<" ";
		}
        cout<<endl;
    }
}