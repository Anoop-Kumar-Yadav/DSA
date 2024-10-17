/*
Find the next permutations of Array

NOTE : If not possible then print the sorted order in ascending order

For example, 

the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] 
because [3,2,1] does not have a lexicographical larger rearrangement.

*/

#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void display(vector<int> v){
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }  
    cout<<endl;  
}
void nextPermutation(vector<int>& nums) {
    int pivot = -1;
    for (int i = nums.size() -2; i >= 0 ; i--){
        if (nums[i]<nums[i+1]){
            pivot = i;
            break;
        }
    }
    if (pivot == -1 ) { // If Array is largest
        reverse(nums.begin(),nums.end());
        return;
    }

    reverse(nums.begin()+pivot+1,nums.end());
    //find just greator
    int justGreat_ = -1;
    for (int i = pivot+1; i < nums.size(); i++) {
        if (nums[i]>nums[pivot]){
            justGreat_ = i;
            break;

        }
    }
    int temp = nums[pivot];
    nums[pivot] = nums[justGreat_];
    nums[justGreat_] = temp;
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // v.push_back(3);
    display(v);
    nextPermutation(v);
    display(v);

    return 0;
}

/*
Author: Your Name
Date: Date
*/