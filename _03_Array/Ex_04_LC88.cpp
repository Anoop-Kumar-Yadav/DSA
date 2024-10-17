/*
You are given two integer arrays nums1 and nums2, sorted in 
non-decreasing order, and two integers m and n, representing the 
number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing 
order.

The final sorted array should not be returned by the function, 
but instead be stored inside the array nums1. To accommodate this, 
nums1 has a length of m + n, where the first m elements denote the 
elements that should be merged, and the last n elements are set to 0 
and should be ignored. nums2 has a length of n.

 

Example 1:

Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]

Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

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
void mergeSortSortedArray(vector<int>& nums1 , vector<int>& nums2){
    int m = (nums1.size()-nums2.size());
    int n = nums2.size();
    
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while (i >= 0 && j >= 0){
        if (nums1[i]>nums2[j]){
            nums1[k] = nums1[i];
            i--;
        } else if (nums2[j] > nums1[i]){
            nums1[k] = nums2[j];
            j--;
        } else {
            nums1[k] = nums1[i];
            k--;
            nums1[k] = nums1[i];
            i--;
            j--;
        }
        k--;
    }
    while (j >=0 ){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
    

}
vector<int> mergeSortUsingNewVector(vector<int>& v1,vector<int>& v2){
    int m = v1.size();
    int n = v2.size();

    vector<int> res(m+n,0);
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if (v1[i]<v2[j]){
            res[k] = v1[i];
            i++;
        }
        else if (v2[j]<v1[i]){
            res[k] = v2[j];
            j++;
        }
        else {
            // v2[j]=v1[i]
            res[k] = v1[i];
            i++;
            j++;
        }
        k++;
    }
    
        if (i==m){
            while (j < n){
                res[k] = v2[j];
                j++;
                k++;
            }
        }
        if(j==n){
            while (i < m){
                res[k] = v1[i];
                i++;
                k++;
            }
        }
        
    
    return res;
}

int main() {
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    // arr1.push_back(8);
    // arr1.push_back(9);
    
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);
    // arr1.push_back(0);
    // arr1.push_back(0);
    // arr1.push_back(0);
    // arr1.push_back(0);
    
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(5);
    arr2.push_back(6);
    // arr2.push_back(7);
    // arr2.push_back(10);
    // arr2.push_back(12);
    // arr2.push_back(13);

    cout<<"First Array :  ";
    display(arr1);
    cout<<"Second Array :  ";
    display(arr2);
    // oneStepForward(arr1,0,4);
    mergeSortSortedArray(arr1,arr2);
    cout<<endl;
    cout<<"Final Array : ";
    display(arr1);
    

    return 0;
}

/*
Author: Your Name
Date: Date
*/