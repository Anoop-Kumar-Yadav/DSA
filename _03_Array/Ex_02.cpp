/*
  Move all negative numbers to beginning and positive to 
  end with constant extra space. 
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

/*
    METHOD-1 : ONLY ONE TRAVERSAL
  # Skip i if negative ,move forward
  # Skip j if positive ,move forward
  # Replace if i=1 & j=0 ,move forward
*/
void moveNegPos(vector<int>& v){
    int i = 0;
    int j = v.size()-1;

    while(i<j){
        if (v.at(i)<0) i++; // Skip if negative ,move forward
        if (v.at(j)>0) j--; // Skip if positive ,move forward
        else if (v.at(i)>0 && v.at(j)<0){ // Replace if i=positive & j=negative ,move forward
            int temp = v.at(j);
            v.at(j) = v.at(i);
            v.at(i) = temp;
        }   
    }
}

int main() {
    
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(-3);

    display(v);
    moveNegPos(v);
    display(v);

    return 0;
}

/*
Author: Your Name
Date: Date
*/