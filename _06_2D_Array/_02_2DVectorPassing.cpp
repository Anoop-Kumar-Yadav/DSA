/*
  In Passing in a function
  * In 1D :  Array - Pass By Reference
          :  Vector - Pass By Value/(&)Reference Both
  * In 2D : Array - Need Size in passing to function 
          : Vector - No need to Mention Size
*/

#include <iostream>
#include <vector>

using namespace std;

void change1DArray(int a[]){ 
    // here we do not need to take size
    a[0] = 9;
}

void change2DArray(int a[][3]){ 
    // must  take size both row and col otherwise error
    a[0][0] = 100;
}

void change2DVector( vector< vector<int> > &v){ 
    // here we do not need to take size even in 2D
    // Even Length can be calculate inside other function of 
    // both outer and inner vectors
    cout<<"Rows : "<<v.size()<<endl;
    v[0][0] = 100 ;

}

int main() {

     int a[3] = {1,2,3};
     cout<<a[0]<<endl; //---> 1
     change1DArray(a); 
     cout<<a[0]<<endl;  //---> 9

     int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
     cout<<arr[0][0]<<endl;   //---> 1
     change2DArray(arr); 
     cout<<arr[0][0]<<endl;   //---> 100
// --------------------------------------------------------
// --------------------------------------------------------
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    
    vector<int> v3;
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(4);

    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    
    cout<<v[0][0]<<endl; // ---> 1
    change2DVector(v); 
    cout<<v[0][0]<<endl; // ---> 100





    return 0;
}