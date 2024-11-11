/*
  Your comment here
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaration + Initialization
    string str = "Hello World !"; // character array of size = 14(include space & null)

    // Input--------------------------------------------------------
    string name;
    // cout <<"Enter Your Name : ";
    // cin>>name;  ---> Anoop Kumar Yadav
    // cout<<"Your Name is : "<< name;  ---> Anoop

    // This happens because cin separate inoputs by Space & Enter
    
    cout<<"Enter Your Name : ";
    getline(cin,name); // ---> Anoop Kumar Yadav
    cout<<"Your Name is : "<<name; // ---> Anoop Kumar Yadav

    return 0;
}

/*
Author: Your Name
Date: Date
*/