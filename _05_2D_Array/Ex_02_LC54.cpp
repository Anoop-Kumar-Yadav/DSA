/*
  Print the matrix in spiral form.
*/
#include <iostream>
using namespace std;

int main() {
    int row = 3;
    int col = 4;
    int mat[row][col] = {
      {1,2,3,4},
      {5,6,7,8},
      {9,10,11,12}
    };
// SPIRAL LOGIC CODE fROM (0,0) --------------------------------------------------------

    int min_row,min_col,max_row,max_col,no_item,count;
    min_row = 0;
    min_col = 0;
    max_row = row - 1;
    max_col = col - 1;
    
    no_item = row*col;
    count = 0;


    while(min_row <= max_row && min_col <= max_col){

        // Right
        for (int i = min_col; i <= max_col && count < no_item; i++) {
            cout<<mat[min_row][i]<<" ";
            count++;
        }
        min_row++;

        // Down
        // if (min_row > max_row || min_col > max_col) break ;
        for (int j = min_row; j <= max_row && count < no_item; j++) {
            cout<<mat[j][max_col]<<" ";
            count++;
        }
        max_col--;

        // Left
        // if (min_row > max_row || min_col > max_col) break ;
        for (int k = max_col; k >= min_col && count < no_item; k--) {
            cout<<mat[max_row][k]<<" ";
            count++;
        }
        max_row--;

        //Up
        // if (min_row > max_row || min_col > max_col) break ;
        for (int l = max_row; l >= min_row && count < no_item; l--) {
            cout<<mat[l][min_col]<<" ";
            count++;
        }
        min_col++;
    }
// --------------------------------------------------------
    return 0;
}

/*
Author: Your Name
Date: Date
*/