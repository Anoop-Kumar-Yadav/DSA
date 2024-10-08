/*
  Count the number of element in the given array greater than a given number x.
*/

#include <iostream>
using namespace std;

int main() {
    int size,x;
    printf("Enter the Size of Array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements : ");
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    printf("Enter Counting Element : ");
    cin>>x;

    // COUNT CODE
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i]>x) count += 1;
    }
    // --------------------------------------------------------

    printf("Number of Element Greater than %d : %d",x,count);
    return 0;
}

/*
Author: Your Name
Date: Date
*/