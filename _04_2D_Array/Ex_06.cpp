/*
  Modify matrix entered by user into transpose without using other matrix
*/

#include <iostream>
using namespace std;

int main() {
    int row , col;

    cout<<"Enter No. of Row : ";
    cin>>row;
    
    cout<<"Enter No. of Column : ";
    cin>>col;

    if (row != col) {
        cout<<"Invalid Matrix ! Should be a square matrix.";
        return 0;
    }
    int mat[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin>>mat[i][j];
        }
    }

// TRANSPOSE LOGIC CODE--------------------------------------------------------
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i==j) break;
            int x = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = x;
        }
    }

    // OR

//     for (int i = 0; i < row; i++) {
//         for (int j = i+1; j < col; j++) {
//             // if (i==j) break;
//             int x = mat[i][j];
//             mat[i][j] = mat[j][i];
//             mat[j][i] = x;
//         }
//     }
// // --------------------------------------------------------
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Author: Your Name
Date: Date
*/