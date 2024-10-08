/*
  Find Maximum value out of all the elements int the array.
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
    int max = arr[0];
    // int max = INT_MIN;
    for (int i = 1; i < size; i++) {
        if (arr[i]>max) max = arr[i];
    }
    // --------------------------------------------------------

    printf("Max : %d",max);


    return 0;
}

/*
Author: Your Name
Date: Date
*/