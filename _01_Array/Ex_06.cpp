/*
  Find Second Largest Element in given Array.
*/


#include <iostream>
#include<climits>
using namespace std;

int main() {
    int size;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements : ");
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    // MAX CODE
    // int max = INT_MIN;
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i]>max) max = arr[i];
    }

    // SECOND MAX CODE
    int smax = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i]>smax && arr[i] != max) smax = arr[i];
    }
    // --------------------------------------------------------

    printf("Max : %d\n",max);
    printf("SMax : %d",smax);


    return 0;
}

/*
Author: Your Name
Date: Date
*/