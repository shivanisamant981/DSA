#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string &s){
    int i=0,j=s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;j--;
    }  
}
int main(){
    string s="madam";
    string temp=s;
    isPalindrome(s);
    if(temp==s){
        cout<<"it is palindrom ";
    }
    else{
        cout<<"not it is not palindrome";
    }

    return 0;
}