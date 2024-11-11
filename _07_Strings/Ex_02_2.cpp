/*
  Input a string of size n and Update all 
  the even positions in the string to character
  'a' ,Consider 0-based indexing. 
*/


#include <iostream>
#include <string>
// #include <cctype>

using namespace std;


int main() {
    
    string str ;
    getline(cin,str);
    // int legth = str.size();
    int length = str.length() ;  // ---> excluding null character  Index : 0 - length-1
    
    for (int i = 0; i < length; i++) {
        if (i%2 == 0) str[i] = 'a';
    }
    cout<<str;

    return 0;
}
