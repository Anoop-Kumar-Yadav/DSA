/*
  Rotate the given array 'a' by k steps, where k is non-negative.
  NOTE : k can be greater than n as well where n is the size of array 'a'
*/

#include <iostream>
#include <vector>

using namespace std;

void reversePart(int i,int j,vector<int>& v){

    int temp;
    for (i,j; i <= j; i++,j--) {
        temp = v.at(j);
        v.at(j) = v.at(i);
        v.at(i) = temp;
    }
}

/*  METHOD - 1
    # The last element of the vector moves to the front.
    # All other elements are shifted one position to the right.
    # The original first element moves to the second position.
*/
void rotation_method_1(vector<int>& v, int rot_value_){

    for (int i = 0; i < rot_value_ ; i++) {
        int x = v.at(0);
        v.at(0) = v.at(v.size()-1);

        for (int j = v.size()-1; j >= 2; j--) {
            v.at(j) = v.at(j-1);
        }
        v.at(1) = x;
    }


}

/*
  METHOD-2 
  # Reverse the last rot_value_ elements
  # Reverse the first (n - rot_value_) elements
  # Reverse the entire vector
*/
void rotation_method_2(vector<int>& v, int rot_value_){
    reversePart(v.size() - rot_value_,v.size()-1,v); 
    reversePart(0,v.size() - rot_value_-1,v);        
    reversePart(0,v.size()-1,v);                     
}


int main() {
    
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);

    int k ;
    cout<<"Enter Rotation Value : ";cin>>k;

    if (k > v.size()) k = k % v.size();

    rotation_method_2(v,k);
    // print
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }  
    cout<<endl;

//     return 0;
// }
}
/*
Author: Your Name
Date: Date
*/