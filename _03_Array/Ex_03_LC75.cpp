/*

Given an array nums with n objects colored red, white, or blue, 
sort them in-place so that objects of the same color are adjacent, 
with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red,
 white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.

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

//METHOD-1 : (Using Sorting) --------------------------------------------------------
void sortColors(vector<int>& nums) {
    int size = nums.size();
    for(int i = 0 ; i < size-1;i++){
        for(int j = i+1 ; j < size ; j++){
            if (nums[i] > nums[j]){
                nums[i] = nums[i] + nums[j];
                nums[j] = nums[i] - nums[j];
                nums[i] = nums[i] - nums[j];
            }
        }
    }
}
 
//METHOD-2 : (TWO PASS Algo : Count & Place)--------------------------------------------------------
void newSortColors(vector<int>& nums) {
    int size = nums.size();
    int zero = 0;
    int one = 0;
    int two = 0;

    for(int i = 0 ; i < size;i++){
        if (nums[i]==0) zero++ ;
        else if (nums[i]==1) one++ ;
        else if (nums[i]==2) two++ ;
        else cout<<"Incorrect Input";
    }
    for (int i = 0; i < size; i++) {
        if (i<zero) nums[i]=0;
        else if (i<(zero+one)) nums[i]=1;
        else nums[i]=2;
        }
}
//METHOD-3 : (ONE PASS : Algo-Dutch Flag Algo)--------------------------------------------------------
/*

# 0 -> low-1: All elements in this segment will be 0.
# low -> mid-1: All elements in this segment will be 1.
# mid -> high: This segment is being processed.
# high + 1 -> end: All elements in this segment will be 2.

*/
void optmSortColors(vector<int>& nums){
    int low = 0;    // It keeps track of where the 0s should be placed.
    int mid = 0;    // It traverses the array and processes each element.
    int high = nums.size()-1;   // It keeps track of where the 2s should be placed.

    while(mid<=high){  // The loop runs until the mid pointer crosses the high pointer

        // If the current element is 2, swap it with the element at the high position.
        if (nums[mid] == 2){        
            int temp = nums[mid];   
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;         //Decrement high because the last elements should be 2s ,
                            // After the swap, mid is not incremented because we need to check the newly swapped element at the mid position.
        }
        // If the current element is 0, swap it with the element at the low position.
        else if  (nums[mid] == 0){  
            int temp = nums[mid];
            nums[mid] = nums[low];
            nums[low] = temp;
            mid++;   // Increment both low and mid because the 0 is now in the correct position, 
            low++;   // and we move forward to check the next elements.

        }else 
            mid++; // If the current element is 1, just increment mid because 1s are already in their correct positions.
        
    }


}

int  main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);

    display(v);
    optmSortColors(v);
    display(v);
    return 0;
}
