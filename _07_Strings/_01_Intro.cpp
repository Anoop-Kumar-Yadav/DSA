/*

Strings = characater Array

*/

#include <iostream>
using namespace std;

int main() {
    
    // char str[] = {'H','e','l','l','o'};
    char str[] = "Hell\0o World"; 
    // 5 + 1 where compiler add '\0' = null character at end
    // null character cannot be print
    // cout << (int)(str[5]); ---> 0  which is ASCII value of null character
    // cout << (int)(str[7]); ---> 0
    // cout << (int)(str[7]); ---> 0
    // cout << (int)(str[7]); ---> 0

    // PRINT -1
    // OUTPUT : Hell
    for (int i = 0; str[i] != '\0'; i++) {
        cout<<str[i];  
    } 
    cout<< endl;

    // PRINT -2
    // OUTPUT : Hello World
    int size = sizeof(str)/sizeof(str[0]);
    for (int i = 0; i < size; i++) {
        cout<<str[i];
    } 
    cout<< endl;
    
    // PRINT -2
    // OUTPUT : Hell
    cout << str ;

    return 0;
}

/*
Author: Your Name
Date: Date
*/