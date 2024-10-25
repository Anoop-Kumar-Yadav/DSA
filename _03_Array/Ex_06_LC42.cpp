/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

*/

#include <iostream>
#include <vector>

using namespace std;
void display(int v[] ,int size){
    for (int i = 0; i < size; i++) {
        cout<<v[i]<<" ";
    }  
    cout<<endl;  
}

int trap(vector<int>& height) {

    int water_ = 0;
    int size = height.size();

    // previous greates element array
    int pre_greatest[size];
    pre_greatest[0] = -1;
    int max_ = height[0];
    for (int i = 1; i < size; i++) {
        pre_greatest[i] = max_;
        if ( max_ < height[i]) max_ = height[i];
    }

    // next greatest element array    
    pre_greatest[size-1] = -1;
    max_ = height[size-1];
    for (int i = size-2; i >= 0; i--) {
        if(max_ < pre_greatest[i]) pre_greatest[i] = max_;
        if (max_ < height[i]) max_ = height[i] ;
    }   
    
    // // minimum array 
    // for (int i = 0; i < size; i++) {
    //     pre_greatest[i] = (pre_greatest[i]>next_greatest[i])? next_greatest[i] : pre_greatest[i];
    // }

    for (int i = 1; i < size-1; i++) {
        if (height[i] < pre_greatest[i]){
            water_ = water_ + (pre_greatest[i]-height[i]);
        }
    }
    return water_ ;
}

int main() {
    vector<int> v;
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(0);
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(1);
    v.push_back(4);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);

    int filled_water = trap(v);
    cout<<"Filled : "<<filled_water;

    return 0;
}

/*
Author: Your Name
Date: Date
*/