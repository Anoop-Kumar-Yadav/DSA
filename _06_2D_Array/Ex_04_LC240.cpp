/*
  Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

* Integers in each row are sorted in ascending from left to right.
* Integers in each column are sorted in ascending from top to bottom.

Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true

*/

#include <iostream>
#include <vector>
using namespace std;

#include <vector>
using namespace std;

// Most Optimized Method --------------------------------------------------------

bool optmSearch(vector< vector<int> >& matrix , int target){
    int rows = matrix.size();
    int cols = matrix[0].size();

    int i = 0 ;
    int j = cols - 1 ;
    while (i < rows && j >= 0)
    {
        if (matrix[i][j] == target) return true;
        else if (matrix[i][j] < target) i++;
        else j-- ;   
    }
     return false;
    

}

// Optimized Way --------------------------------------------------------
bool searchMatrix1(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    if (rows == 0) return false;

    int cols = matrix[0].size();
    if (cols == 0) return false;

    int left = 0, right = rows * cols - 1;

    // Binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;
        int mid_value = matrix[mid / cols][mid % cols];

        if (mid_value == target) {
            return true;
        } else if (mid_value < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

// Method 1 --------------------------------------------------------
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int cols = matrix[0].size();
    int rows = matrix.size();
    int max_col = cols - 1;
    int max_row = rows - 1;

    for(int j = 0 ; j < cols; j++ ){
            if (matrix[0][j] > target){
                max_col = j ;
                break;
            }
            if (matrix[0][j] == target){
                return true ;
            }
    }
    for(int i = 0 ; i < rows; i++ ){
            if (matrix[i][0] > target){
                max_row = i ;
                break;
            }
            if (matrix[i][0] == target){
                return true ;
            }
    }
    for(int i = 1 ; i <= max_row ; i++){
        for(int j = 1 ; j <= max_col ; j++){
            if (matrix[i][j] == target) return true ;
        }
    }
    return false;

}

// --------------------------------------------------------
// --------------------------------------------------------
int main() {

    vector< vector<int> > matrix = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };

    cout<< optmSearch(matrix , 27);
    
    return 0;
}

/*
Author: Your Name
Date: Date
*/