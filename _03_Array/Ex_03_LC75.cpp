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

//METHOD-1 : --------------------------------------------------------
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
 
//METHOD-2 : (TWO PASS Algo)--------------------------------------------------------
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
//METHOD-3 : (ONE PASS Algo-Dutch Flag Algo)--------------------------------------------------------
void optmSortColors(vector<int>& nums){
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;
    // mid ke baare me socho
    // 0 -> low-1 = 0
    // high + 1 -> end = 2
    // low  -> mid - 1 =1
    while(mid<=high){
        if (nums[mid] == 2){
            int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
        }
        else if  (nums[mid] == 0){
            int temp = nums[mid];
            nums[mid] == nums[low];
            nums[low] == temp;
            mid++;
            low++;
        }else mid++;
        
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
