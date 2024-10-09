/*
  Copy the content of one array into another in reverse order
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;

    for (int i = 0; i < 5; i++) {
        int x;
        cin>>x;
        v1.push_back(x);

    }

    vector<int> v2(v1.size(),0);
    for (int i = v1.size()-1; i >0; i--) {
        v2.at(v1.size()-i-1) = v1.at(i);
    }

    for (int i = 0; i < v1.size(); i++) {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < v1.size(); i++) {
        cout<<v2[i]<<" ";
    }

    return 0;
}

/*
Author: Your Name
Date: Date
*/