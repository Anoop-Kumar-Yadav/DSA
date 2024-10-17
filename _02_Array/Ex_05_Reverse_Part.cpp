/*
  Reverse the Part Of an array without using extra array
*/

#include <iostream>
#include <vector>

using namespace std;

void reverse_Part_Of_Array(vector<int>& v){ // MAIN LOGIC CODE
    int i,j;
    cout<<"Enter START : ";
    cin>>i;
    cout<<"Enter END : ";
    cin>>j;

    int temp;

    // (starting  = i) & ( end = j ) and then apply reversal code
    for (i , j ; i <= j; i++,j--) {
        temp = v.at(j);
        v.at(j) = v.at(i);
        v.at(i) = temp;
    }
}


int main() {
    
    vector<int> v(5);

    for (int i = 0; i < v.size(); i++) {
        cin>>v.at(i);
    }

    cout<<"List : ";
    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    reverse_Part_Of_Array(v);

    cout<<"Reverse : ";
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