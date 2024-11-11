/*
  Input a string of length n and count  all vowels in the string
NOTE :
The <cctype> library includes functions like:

tolower(char c): Converts a character to lowercase if it's uppercase.
toupper(char c): Converts a character to uppercase if it's lowercase.
isdigit(char c): Checks if a character is a digit.
isalpha(char c): Checks if a character is alphabetic.
isspace(char c): Checks if a character is whitespace.

 */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countVowels(char str[],int n) {
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        char ch = str[i];
    // for (char ch : str) {
        ch = tolower(ch);  // Convert to lowercase for easier checking
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
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

    cout<<"Vowels : "<<countVowels(str,n);

    return 0;
}

/*
Author: Your Name
Date: Date
*/