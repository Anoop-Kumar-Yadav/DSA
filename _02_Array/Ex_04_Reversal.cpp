/*
  Reverse the array without using extra array
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reversal_1(vector<int>& v){ // MEDTHOD -1 
    int i = 0;
    int j = v.size()-1;
    while ( i <= j ){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++ ;
        j-- ;
    }   
}

void reversal_2(vector<int>& v){ // METHOD -1 Using for loop
    for (int i = 0 , j = v.size()-1; i <= j; i++,j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}

void reversal_3(vector<int>& v){ // METHOD -2 Using Built-In Function (Not Recommended not mention to use)
    reverse(v.begin(),v.end());
}


int main() {
    
    vector<int> v(5);

    for (int i = 0; i < v.size(); i++) {
        cin>>v.at(i);
    }

    cout<<"List : ";
    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

/*
         Swapping using XOR
    a = a ^ b; // a becomes 15 (XOR of 5 and 10)
    b = a ^ b; // b becomes 5 (XOR of 15 and 10)
    a = a ^ b; // a becomes 10 (XOR of 15 and 5)

    // Swapping without using third variable
    a = a + b; // a becomes 15 (5 + 10) 
    b = a - b; // b becomes 5 (15 - 10) , (a+b) - b = a
    a = a - b; // a becomes 10 (15 - 5) , (a+b) - a = b

*/
    reversal_2(v);
    cout<<"Reverse : ";
    for (int i = 0; i < v.size(); i++) {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;


    return 0;
}

/*
Author: Your Name
Date: Date
*/