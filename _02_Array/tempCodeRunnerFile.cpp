#include <iostream>
#include <vector>

using namespace std;


void change(vector<int> v){
    v.at(2) = 5;
}

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(13);
    v.push_back(15);
    v.push_back(17);

    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    change(v);

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