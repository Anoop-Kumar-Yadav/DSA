/*
  Sum Of All Element of 2D Matrix

*/
#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {2,45,2,56,76,45,23,1};

// SUM LOGIC --------------------------------------------------------
    int sum_ = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum_ += arr[i][j]; 
        }
    }
// --------------------------------------------------------
    cout<<"Sum : "<<sum_;
    return 0;
}

/*
Author: Your Name
Date: Date
*/