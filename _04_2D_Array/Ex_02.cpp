/*
  Find largest and Second Largest element of a given 2D Array of Integers
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[3][4] = {34,67,23,56,7,3,85,87,23,43,12};

    int max_ = INT_MIN;
// MAX LOGIC--------------------------------------------------------
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > max_) max_ = arr[i][j];
        }
    }
// --------------------------------------------------------
// SECOND MAX LOGIC--------------------------------------------------------
    int smax_ = INT_MIN;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] > smax_ & arr[i][j] != max_)  smax_= arr[i][j];
        }
    }
// --------------------------------------------------------   
    cout<<"Max : "<<max_<<endl;
    cout<<"Second Max : "<<smax_;
    return 0;
}

/*
Author: Your Name
Date: Date
*/