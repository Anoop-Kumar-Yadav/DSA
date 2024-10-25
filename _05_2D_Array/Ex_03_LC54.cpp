/*
  Print the matrix in WAVE form.
*/
#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 3;
    int mat[row][col] = {
      {1,2,3},
      {4,5,6},
      {7,8,9}
    };
// WAVE LOGIC CODE fROM (0,0) --------------------------------------------------------
    for (int i = 0; i < row; i++) {
        if(i%2 == 0){
          // For even indexed rows, print left to right
          for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
          }  
        } 
        else {
          // For odd indexed rows, print right to left
          for (int j = col - 1; j >= 0; j--) {
            cout << mat[i][j] << " ";
          }  
        }
    }
    cout<<endl;
// --------------------------------------------------------
// WAVE LOGIC CODE FROM left-bottom-corner--------------------------------------------------------
    int count = 0;
    for (int i = row-1; i >= 0; i--) {
        if(count%2 == 0){
          // For even indexed rows, print left to right
          for (int j = 0; j < col; j++) {
            cout << mat[i][j] << " ";
          }  
          count++ ;
        } 
        else {
          // For odd indexed rows, print right to left
          for (int j = col - 1; j >= 0; j--) {
            cout << mat[i][j] << " ";
          }
          count++ ;  
        }
    }   

// --------------------------------------------------------

    return 0;
}

/*
Author: Your Name
Date: Date
*/