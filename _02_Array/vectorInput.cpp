#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> v){

    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {

    // size Needed & not recommended & give error = segmenetation error
    vector<int> v(5); 
    display(v); // 0 0 0 0 0 
    for (int i = 0; i < v.size(); i++) {
        cin>>v[i];
    }
    display(v); 

    // Size = Not Required & Recommended
    vector<int> v2;
    display(v2); //
    for (int i = 0; i < 5; i++) {
        int x ;
        cin>>x;
        v2.push_back(x);
    }
    display(v2);
    
    return 0;
}

/*
Author: Your Name
Date: Date
*/