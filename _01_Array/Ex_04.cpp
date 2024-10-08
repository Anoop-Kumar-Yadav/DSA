/*
  Find element x in the array. Take array and x as input
*/

#include <iostream>
using namespace std;


int main() {
    int size,x;
    cout<<"Enter the size of Array : ";
    cin>>size;
    int arr[size];

    cout<<"Enter the Elements : ";
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }

    cout<<"Enter Element to Search : ";
    cin>>x;

    // FIND CODE
    bool flag = false; //check mark
    for (int i = 0; i < size; i++) {
        if (arr[i]==x)
        {
            flag = true;
        }
        
    }

    if (flag == true) printf("Element is Found");
    
    // --------------------------------------------------------
    
    return 0;
}

/*
Author: Your Name
Date: Date
*/