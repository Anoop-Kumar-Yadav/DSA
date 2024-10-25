/*
  Add Two Matrices
*/

#include <iostream>
using namespace std;

int main() {
    int row1,row2,col1,col2;
    row1 = 2; row2 = 2;
    col1 = 3; col2 = 3;

    if ((row1 != row2) || (col1 != col2)) {
        cout<<"Invalid Matrix";
        return 0;
    }

    int mat1[row1][col1] = {{1,2,3},{4,5,6}};
    int mat2[row2][col2] = {{1,2,3},{4,5,6}};

    
 // ADDITION LOGIC --------------------------------------------------------
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            mat1[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
// --------------------------------------------------------

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Author: Your Name
Date: Date
*/