/*
  Reverse the array without using extra array
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
//  METHOD-1 (Not Recommended) : --------------------------------------------------------
/*
    int temp;
    for (int i = 0; i < v.size()/2; i++) {
        temp = v.at(v.size()-1-i);
        v.at(v.size()-1-i) = v.at(i);
        v.at(i) = temp;
    }
*/
//  METHOD-2 : --------------------------------------------------------
/*
    int i = 0;
    int j = v.size()-1
    while ( i <= j ){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++ ;
        j-- ;
    }
*/
//  METHOD-3 : --------------------------------------------------------

    for (int i = 0 , j = v.size()-1; i <= j; i++,j--) {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
//  METHOD-4 : (Built-In-Function) --------------------------------------------------------
    // reverse(v.begin(),v.end());
  

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