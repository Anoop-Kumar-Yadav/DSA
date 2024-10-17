/*
  Sort the array of 0's and 1's
*/

#include <iostream>
#include <vector>

using namespace std;
void display(vector<int> v){
    for (int i = 0; i < v.size(); i++) {
        cout<<v[i]<<" ";
    }  
    cout<<endl;  
}

// METHOD-1 : iF MORE THAN ONE TRAVERSAL IS ALLOWED --------------------------------------------------------
void sort01METHOD1(vector<int>& v){
    int zero = 0;
    int one = 0;
    for (int i = 0; i < v.size()-1; i++) {
        if (v.at(i) == 0 ){
            zero++;
            v.at(i)= 1;
        }
        else if (v.at(i)==1){
            one++;
            
        }
    }
    // Filling Element
    for (int i = 0; i < zero; i++) {
        v.at(i) = 0;
    }
}

// METHOD-1 : ONLY ONE TRAVERSAL IS ALLOWED --------------------------------------------------------
void sort01METHOD2(vector<int>& v){
    int i ,j;
    i = 0 ;
    j = v.size()-1;

    while(i<j){
        if (v.at(i) == 0) i++;
        if (v.at(j) == 1) j--;

        //if (i>j) break;

        else if (v.at(i) == 1 & v.at(j) == 0){
            v.at(i) = 0 ;
            v.at(j) = 1 ;
            i++;
            j--;
        }
    }
}

int main() {
    
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    display(v);
    sort01METHOD2(v);
    display(v);

    return 0;
}

/*
Author: Your Name
Date: Date
*/