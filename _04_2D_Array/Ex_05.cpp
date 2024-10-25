/*
  Print Trancpose of matrix entered by user and store it in a new matrrix
*/

#include <iostream>
using namespace std;

int main() {
    int row , col;

    cout<<"Enter No. of Row : ";
    cin>>row;
    
    cout<<"Enter No. of Column : ";
    cin>>col;

    // if (row != col) {
    //     cout<<"Invalid Matrix";
    //     return 0;
    // }
    int mat[row][col];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin>>mat[i][j];
        }
    }
// TRANSPOSE PRINT LOGIC CODE--------------------------------------------------------
    cout<<"TRANSPOSE : "<<endl;
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }

// TRANSPOSE LOGIC CODE--------------------------------------------------------
    int res[col][row];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            res[j][i] = mat[i][j];
        }
    }
// --------------------------------------------------------
    
    return 0;
}

/*
Author: Your Name
Date: Date
*/