/*
You are given an m x n binary matrix grid.

A move consists of choosing any row or column and 
toggling each value in that row or column 
(i.e., changing all 0's to 1's, and all 1's to 0's).

Every row of the matrix is interpreted as a binary 
number, and the score of the matrix is the sum of these 
numbers.

Return the highest possible score after making any number of moves (including zero moves).

Input: grid = [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
Output: 39
Explanation: 0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39

*/

#include <iostream>
using namespace std;
#include <vector>

void print2DVector(vector<vector<int>> v){
    // Print the 2D vector
    int rows = v.size();
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < v[i].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}


int convert(vector<int> v){
    int x = 1;
    int sum = 0;

    for(int i = v.size()-1 ; i >= 0 ; i--){
        if (v[i] == 1 ){
            cout<<"x : "<<x<<endl;
            sum += x;
            cout<<"sum : "<<sum<<endl;
        }
        x = x * 2;
    }
    return sum;
}
void print1DVector(vector<int> v){

    int size = v.size();
    for (int i = 0; i < size; i++) {
        cout <<v[i]<< ' ';
    }
    cout<<endl;
}

// MAIN LOGIC CODE --------------------------------------------------------
int maxScore(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    // Checking Rows
    for (int i = 0; i < rows; i++) {
        if (grid[i][0] != 1) {
            for (int j = 0; j < cols; j++) {
                grid[i][j] = 1 - grid[i][j]; // Flip 0 to 1 and 1 to 0
            }
        }
    }

    // Checking Columns
    for (int j = 0; j < cols; j++) { 
        int zeros = 0;
        int ones = 0;
        for (int i = 0; i < rows; i++) {
            if (grid[i][j] == 0) {
                zeros++;
            } else {
                ones++; 
            }
        }
        if (zeros > ones) {
            for (int i = 0; i < rows; i++) {
                grid[i][j] = 1 - grid[i][j]; // Flip 0 to 1 and 1 to 0
            }
        }
    }

    // Calculating the sum
    int sum_ = 0;
    for (int i = 0; i < rows; i++) {
        int x = 1;
        int sum = 0;
        for (int j = cols - 1; j >= 0; j--) {
            if (grid[i][j] == 1) {
                sum += x;
            }
            x *= 2;
        }
        sum_ += sum;
    }

    print2DVector(grid);
    return sum_;
}

// --------------------------------------------------------
int main() {
    // Define the grid input (example input)
    vector<vector<int>> grid = {
        {0, 0, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 0}
    };

    // Call the maxScore function
    int score = maxScore(grid);

    // Print the score
    cout << "Maximum Score: " << score << endl;

    return 0;
}
/*
Author: Your Name
Date: Date
*/