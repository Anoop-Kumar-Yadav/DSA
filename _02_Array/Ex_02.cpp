/*
  Finding Index of Doublets whose sum is equal to x.

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    cout<<"Enter Values : ";
    for (int i = 0; i < 8; i++) {
        int value;
        cin>>value;
        v.push_back(value);
    }

    int target ;
    cout<<"Enter Target : ";
    cin>>target;

// MAIN LOGIC CODE --------------------------------------------------------
    int size = v.size(); // 
    for (int i = 0; i < size-1; i++) { 
        for (int j = i+1; j < size; j++) {
            if( v[i] + v[j] == target ) cout<<"Index : "<<i<<" & "<<j<<endl;
        }     
    }
// --------------------------------------------------------

    return 0;
}

/*
Author: Your Name
Date: Date
*/