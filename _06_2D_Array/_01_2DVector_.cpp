/*
  Basics of 2D Vectors : vector of vectors

  Advantages of vector over Arrays in 2D
  * Can Increase Rows
  * Variable Column
  * 
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

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

    vector< vector<int> > v(3);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    
/* Createed 2D Vector
   1  2 3
   1  2
   1  2 3 4
*/

    return 0;
}

/*
Author: Your Name
Date: Date
*/