/*
  Traverdal in 2D Array
*/

#include <iostream>
using namespace std;

// void print2DArray(int row,int col,int arr[row][col]){
//     for (int i = 0; i < row; i++) {
//         for (int j = 0; j < col; j++) {
//             cout<<arr[row][col]<<" ";
//         }
//         cout<<endl;
//     }
// }

int main() {
    int row = 2 ;
    int col = 3 ;
    int arr[row][col];

    // INPUT
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin>>arr[i][j] ;
        }
    }

    // PRINT
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*
Author: Your Name
Date: Date
*/