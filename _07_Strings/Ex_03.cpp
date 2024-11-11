/*
  Input a string of even length and reverse the first half of the string.
*/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{   
    int n;
    cout<<"Enter even length for string : ";
    cin>>n;

    if (n%2 != 0) return 0;

    string str;

    cout<<"Enter String : ";
    for (int i = 0; i < n; i++) {
        cin>>str[i];
    }

    reverse(str.begin(),(str.length()/2)+1);
    cout<<str;




    return 0;
}
