/*
  ** vector< vector<int> > v ;
  ** vector< vector<int> > v(m) ;
  ** vector< vector<int> > v(m , vector<int> (n)) ; 
  ** vector< vector<int> > v(m , vector<int> (n,k)) ;
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    //  In 1D Vector : vector<int> v( intial_capacity , each value )
    int m = 3;
    int n = 3;
    vector< vector<int> > v(m , vector<int> (n,0)) ; 
/*
    m = intital_capacity = row
    vector<int> (n,0) = each value is a vector of size n = column
                        each value of cell = 0
*/
    cout<<v[0][0]<<endl; // ---> 0
    cout<<"Rows : "<<v.size()<<endl; // ---> 3
    cout<<"Column : "<<v[0].size()<<endl; // ---> 3

    // BASIC STL functions in  vector 
    // push_back()
    // pop_back()
    // begin()
    // end()
    // rbegin()
    // rend()
    
    return 0;
}

/*
Author: Your Name
Date: Date
*/