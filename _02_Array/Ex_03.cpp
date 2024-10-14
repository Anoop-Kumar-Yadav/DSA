/*
  Copy the content of one array into another in reverse order
*/

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
    vector<int> v1;

    for (int i = 0; i < 5; i++) {
        int x;
        cin>>x;
        v1.push_back(x);

    }

    vector<int> v2(v1.size(),0);
    for (int i = 0; i < v2.size(); i++) {
        v2.at(i) = v1.at(v1.size()-1-i);
    }

    display(v1);
    display(v2);

    return 0;
}

/*
Author: Your Name
Date: Date
*/