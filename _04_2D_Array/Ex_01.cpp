/*
  WAP to store roll number and marks obtained by 4 student side by side
  in a matrix
*/

#include <iostream>
using namespace std;

int main() {
    int stud_ = 4;
    int sub_ = 2;
    int student[stud_][sub_];
    
// MAIN LOGIC--------------------------------------------------------

    for (int i = 0; i < stud_; i++) {
        printf("Enter %d Roll No : ",i+1);
        cin>>student[i][0];
        
        for (int j = 1; j < sub_; j++) {
            cout<<"Enter Marks : ";
            cin>>student[i][j];
        }
    }
// --------------------------------------------------------

    for (int i = 0; i < stud_; i++) {
        for (int j = 0; j < sub_; j++) {
            cout<<student[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
Author: Your Name
Date: Date
*/