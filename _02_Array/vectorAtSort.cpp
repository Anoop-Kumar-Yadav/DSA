#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort

using namespace std;

int main() {

    vector<int> v;
    for (int i = 0; i < 5; i++) {
        v.push_back(i);
    }
    cout<<v.at(2)<<endl; // value at index 2   
    v.at(2) = 5;    // Update at value index 2

    //Print
    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    // Sort
    sort(v.begin(),v.end());

    //Print
    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    return 0;
}

/*
Author: Your Name
Date: Date
*/