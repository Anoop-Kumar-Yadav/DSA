#include <iostream>
using namespace std;

void display(int arr[],int size){ // pointer of first element is passed
    // it is treated as a pointer to the first element, 
    // and the sizeof operator only returns the size of the pointer, 
    // not the size of the entire array.
    // int size = sizeof(arr)/sizeof(arr[0]); 

    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
 

void change(int b[]){
    b[0] = 100; // *b = 100  value updated in original array

}

void changebyPointer(int *b){
    b[1] = 100; // value updated in original array
}

int main() {
    int a , *ptr=&a;
    a = 8898;

    int arr[] = {2,4,67,5};
    int size = sizeof(arr)/sizeof(arr[0]); 

    display(arr,size); // 2 4 67 5 
    change(arr);
    changebyPointer(arr);
    display(arr,size); // 100 100 67 5 

    ptr[0] = 45;
    cout<<a; //45

    return 0;
}

/*
Author: Your Name
Date: Date
*/