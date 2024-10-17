
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