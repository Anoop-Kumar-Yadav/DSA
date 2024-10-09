#include <iostream>
#include <vector>
#include <algorithm> // Required for std::sort

using namespace std;

// PASS BY VALUE --> means copy not original
void change(vector<int> a){ 
    a.at(0) = 500;
}

// PASS BY REFERENCE --> means  original
void change2(vector<int>& a){ 
    a.at(0) = 500;
}

int main() {
    vector<int> v;

    // TAKING INPUT IN VECTOR if size known
    for (int i = 0; i < 5; i++) {
        int x ;
        cin>>x;
        v.push_back(x);
    }

    // TO ACCESS & UPDATE VALUE
    cout<<v.at(0)<<endl; // v[0] access
    v.at(0) = 100; // v[0] =   100 update


    // PRINT THE VECTORS
    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    // SORTING IN VECTOR
    sort(v.begin(), v.end());
    

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