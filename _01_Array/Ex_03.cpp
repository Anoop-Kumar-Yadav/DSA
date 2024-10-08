/*
  Sum of Element of Array
*/
#include <iostream>
using namespace std;

void inputArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout<<"Enter array["<<i<<"] element : ";
        cin >> arr[i];
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size,sum=0;
    cout<<"Enter Size Of Array : ";
    cin>>size;
    // Sum

    int arr[size];
    inputArray(arr,size);
    printArray(arr,size);

    // SUM CODE
    for (int i = 0; i < size; i++) {
        sum =  sum + arr[i];
    }
    cout<<"Sum : "<<sum;

    // --------------------------------------------------------

    return 0;
}

/*
Author: Your Name
Date: Date
*/