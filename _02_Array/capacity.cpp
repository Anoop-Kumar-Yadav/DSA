#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(6);     // cap = 1 ,siz = 1
    v.push_back(1);     // cap = 2 ,siz = 2
    v.push_back(10);    // cap = 4 ,siz = 3
    v.push_back(33);    // cap = 4 ,siz = 4
    v.push_back(31);    // cap = 8 ,siz = 5

    v.pop_back();
    v.pop_back();       // cap = 8 ,siz = 3
    // On po pop-back size decreases but capacity not.
     

    return 0;
}

/*
Author: Your Name
Date: Date
*/