/*
  Input a string of size n and Update all 
  the even positions in the string to character
  'a' ,Consider 0-based indexing. 
*/

#include <iostream>
#include <string>
// #include <cctype>

using namespace std;

void updateStr(char str[] , int n){
    for (int i = 0; i < n; i++) {
        if (i%2 == 0)
        {
            str[i] = 'a';
        }
    }
}

int main() {
    
    int n;
    cout<<"Enter length : ";
    cin>>n;

    char str[n];
    cout<<"Enter String : ";
    for (int i = 0; i < n; i++) {
        cin>>str[i];
    }

    cout<<"Previous : "<<str;
    updateStr(str,n);
    cout<<"New : "<<str;
    
    return 0;
}

/*
Author: Your Name
Date: Date
*/