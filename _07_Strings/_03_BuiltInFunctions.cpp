#include <iostream>
#include <string>
#include <algorithm>
// #include <cctype>

using namespace std;

int main() {
    
    // Find Legth --------------------------------------------------------
    string str = "Anoop Kumar Yadav";
    
    // int legth = str.size();
    int length = str.length() ;  // ---> excluding null character  Index : 0 -> str.length() -1
    
    // Push & Pop characters --------------------------------------------------------
    string str1 = "abcd";

    cout<<str1<<endl; // ---> abcd
    str1.push_back('f');

    str1.push_back('g');
    cout<<str1<<endl; //  ---> abcdfg

    str1.pop_back(); 
    cout<<str1<<endl; //  ---> abcdf

    // "+" Operator (add : aage ya peeche) --------------------------------------------------------
    string s = "abc"; 
    string t = "def"; 

    s = s + t;
    cout<<s<<endl; // ---> abcdef

    s = s + "ghi";
    cout<<s<<endl; // ---> abcdefghi

    // reverse() --------------------------------------------------------
    string name = "Anoop Yadav";
    // reverse(name.begin(),name.end()); // full string reverse
    cout<<name; // ---> vadaY poonA

    reverse(name.begin()+2,name.begin()+4+1); // reverse from index 2 to 4
    cout<<name; // ---> Anpoo Yadav

    return 0;
}
