/*
Given an integer rowIndex, return the rowIndexth (0-indexed) 
row of the Pascal's triangle.

Example 1:
Input: rowIndex = 3
Output: [1,3,3,1]

*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//PRINT CURRENT ROW PASCAL TRIANGLE ROW
void print1DVector(vector<int> v){

    int size = v.size();
    for (int i = 0; i < size; i++) {
        cout <<v[i]<< ' ';
    }
    cout<<endl;
}

// MAIN LOGIC CODE  --------------------------------------------------------
vector<int> generate(int rowIndex){
    int numRows = rowIndex + 1;
    vector<int> v(numRows,1);
    int stratIDX = v.size() - 2 ;

    for (int i = 2; i < numRows ; i++) {
        for (int j = stratIDX ;j < v.size()-1; j++) {
            v[j] = v[j] + v[j+1]; 
        }
        stratIDX =  v.size()-1-i;
    }
    print1DVector(v);
    return v;
}

// --------------------------------------------------------

int main() {
    // print2DVector(generate(5));
    generate(5);
    return 0;
}

/*
Author: Your Name
Date: Date
*/