/*
  Given a Integer 'numRows' generate pascal's triangle

Example 1:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// PRINT PASCAL TRIANGLE --------------------------------------------------------
void print2DVector(vector<vector<int>> v){
    // Print the 2D vector
    int rows = v.size();
    for (int i = 0; i < rows; ++i) {
        cout <<string(rows-i, ' ');
        for (int j = 0; j < v[i].size(); ++j) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
// MAIN LOGIC CODE 1 --------------------------------------------------------
vector<vector<int>> generate2(int numRows){
    
    vector<vector<int>> v;

    for (int i = 0; i < numRows ; i++) {
        vector<int> a(i+1);
        v.push_back(a);

        for (int j = 0; j <= i; j++) {
            if (j==0 || j==i)
                v[i][j] = 1;
            else 
                v[i][j] = v[i-1][j] + v[i-1][j-1];
             
        }
    }
    cout<<endl;
    print2DVector(v);

    return v;
}
// MAIN LOGIC CODE 2 --------------------------------------------------------
vector<vector<int>> generate(int numRows){
    
    vector<vector<int>> v(numRows);

    for (int i = 0; i < v.size(); i++)
    {   
        v[i] = vector<int>(i + 1, 1); 
    }

    for (int i = 0; i < v.size() - 1 ; i++) {
        for (int j = 1; j < v[i+1].size()-1; j++) {
            v[i+1][j] = v[i][j-1] + v[i][j]; 
        }
    }
    cout<<endl;
    print2DVector(v);

    return v;
}

// --------------------------------------------------------

int main() {
    // print2DVector(generate(5));
    generate2(10);
    return 0;
}

/*
Author: Your Name
Date: Date
*/