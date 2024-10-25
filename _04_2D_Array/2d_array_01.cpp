/*
  Ways OfInitializations
*/

#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {};
    // = {{1,2,3},{4,5,6}}  ---> {1,2,3} {4,5,6}
    // = {{1,2},{3,4,5}}    ---> {1,2,0} {3,4,5}
    // = {{1,2}}            ---> {1,2,0} {0,0,0}
    // = {1,2,3,4}          ---> {1,2,3} {4,0,0}
    // = {}                 ---> {0,0,0} {0,0,0}
    cout<<arr[0][0]<<" ";
    cout<<arr[0][1]<<" ";
    cout<<arr[0][2]<<" ";
    cout<<arr[1][0]<<" ";
    cout<<arr[1][1]<<" ";
    cout<<arr[1][2]<<" ";

    return 0;
}

/*
Author: Your Name
Date: Date
*/