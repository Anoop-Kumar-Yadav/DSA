/*
Array - Collection of same data type , here we mention collection because all blocks connected to same name .

DECLARATION : data-type name[size];
example: int student[7];

INITIALIZATION : student[0] = 5;
                 student[1] = 6;
                 student[2] = 4;

UPDATION :       student[0] = 8;
5
*/

#include<iostream>

using namespace std;

int main(){
    int arr[7] = {2,5,7,4,7,9,5};

    // Get size of array
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;

    // INPUT ARRAY
    for (size_t i = 0; i < size; i++)
    {   
        cout<<"Enter element : ";
        cin>>arr[i];
    }
    

    // PRINT ARRAY
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    

    
    return 0 ; 
}
