#include <iostream>
#include <vector>

using namespace std;

// Vector Pass BY Value
void changeByValue(vector<int> a){
    a.at(2) = 5;
}
// --------------------------------------------------------
// Vector Pass BY Reference
void changeByReference(vector<int>& a){
    a.at(2) = 5;
}
// --------------------------------------------------------
int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(13);

    // print
    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;   // 10 11 13 

    changeByValue(v);

    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;   // 10 11 13 --> No change reflect
    
    changeByValue(v);

    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;   // 10 11 5 --> change reflect
    return 0;
}

/*
Author: Your Name
Date: Date
*/