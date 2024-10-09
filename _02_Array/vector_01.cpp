/*
  SYNTAX : vector<int> arr;

  If array ful then it then create new array having
   double the size of previous one with same name
*/

#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v; // you do not need mention the size
    cout<<v.size()<<endl;           // SIZE = 0
    cout<<v.capacity()<<endl;       // CAPACITY = 0 

    vector<int> v2(5,7); // intial size = 5 , each element  = 7 by defaul 0
    cout<<v2.size()<<endl;           // SIZE = 5
    cout<<v2.capacity()<<endl;       // CAPACITY = 5     

    // INSERT FROM BACK - 
    // if we use v[index] = value ---> give segmentaton array bcz array's size is 0.
    v.push_back(6); // 6                
    cout<<v.size()<<endl;           // SIZE = 1
    cout<<v.capacity()<<endl;       // CAPACITY = 1    

    v.push_back(2); // 6 2          
    cout<<v.size()<<endl;           // SIZE = 2 
    cout<<v.capacity()<<endl;       // CAPACITY = 1*2 = 2 

    v.push_back(4); // 6 2 4          
    cout<<v.size()<<endl;           // SIZE = 3
    cout<<v.capacity()<<endl;       // CAPACITY = 2*2 = 4 

    v.push_back(5); // 6 2 4 5          
    cout<<v.size()<<endl;           // SIZE = 4
    cout<<v.capacity()<<endl;       // CAPACITY = 4 


    // v[i] can be used for access and update value .
    int size = v.size();
    for (int i = 0; i < size; i++) {
        cout<<v[i]<<" ";
    }

    // REMOVE ELEMENT FROM BACK 
    // it removes only data means size decreases but capacity not
    v.pop_back();
    cout<<v.size()<<endl;           // SIZE = 3 
    cout<<v.capacity()<<endl;       // CAPACITY = 4
    v.pop_back();
    cout<<v.size()<<endl;           // SIZE = 2 
    cout<<v.capacity()<<endl;       // CAPACITY = 4
    
    return 0;
}

/*
Author: Your Name
Date: Date
*/