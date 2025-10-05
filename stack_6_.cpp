#include <bits/stdc++.h>
using namespace std;
//Balance parenthesis stack

bool CheckBalance(string s){
    stack <char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
             char top=st.top();
            if((s[i]=='}' && top=='{') ||(s[i]==']' && top=='[') || (s[i]=')' && top=='(')){
                st.pop();

            }
        }
    }
    if(st.empty())return true;
    return false;
}

int main(){
    string s="{}[(){}]";
    bool x=CheckBalance(s);      
    cout<<x;  


    return 0;
}