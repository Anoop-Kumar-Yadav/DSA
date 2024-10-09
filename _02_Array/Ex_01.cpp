/*
  Finding last Occurenece of x in given array.
*/

#include <iostream>
#include <vector>

using namespace std;


int main() {
    vector<int> v;
    int x;
    for (int i = 0; i < 5; i++) {
        int value;
        cin>>value;
        v.push_back(value);
    }

    cout<<"Enter a number : ";
    cin>>x;

    int idx = -1;
    for (int i = v.size()-1; i >0; i--) {
        if (v.at(i)==x) {
            idx=i;
            break;
        }
    }

    (idx != -1 ) ? cout<<"Index : "<<idx : cout<<"Not Found";
    
    return 0;
}

/*
Author: Your Name
Date: Date
*/