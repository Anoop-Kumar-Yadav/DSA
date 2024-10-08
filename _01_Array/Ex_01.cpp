/*
Given array of marks of student , if the marks of any student is less than 35 print its roll number.[roll number refers tot he index].
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number Of Student : ";cin>>n;
    int student[n];
    
    for (size_t i = 0; i < n; i++)
    {   
        cout<<"Enter Marks : ";
        cin>>student[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if(student[i]<35)
            cout<<i<<" ";
        
    }
    
    return 0;
    
}