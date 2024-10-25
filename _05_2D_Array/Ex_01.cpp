/*
  Write a program to print the multiplication of two matrices given by the user.
*/

#include <iostream>
using namespace std;

int main() {
    int row1 = 4; int row2 = 4;
    int col1 = 4; int col2 = 4;
    
    if(col1 != row2) return ;

    int mat1[row1][col1] = {{7,14,15,6},
                            {4,8,12,3},
                            {14,21,6,9},
                            {13,7,6,4}};

    int mat2[row2][col2] = {{5,7,14,2},
                            {8,16,4,9},
                            {13,6,8,4},
                            {6,3,2,4}};
    int res[row1][col2] = {};

//MULTIPLICATION LOGIC CODE --------------------------------------------------------
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < row2; k++) {
                res[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }
// --------------------------------------------------------
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Author: Your Name
Date: Date
*/