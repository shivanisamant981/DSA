#include <bits/stdc++.h>
using namespace std;
 
int prec(char c){
        if(c=='^'){
            return 3;
        }
        else if(c=='*' || c=='/'){
            return 2;
        }
        else if(c=='+' || c=='-'){
            return 1;
        }
        else{
            return -1;
        }
    }
string InfixToPost(string s){
    int i=0;
    stack <char> st;
    string ans;
    int n=s.size();
    while(i<n){
        if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') ){
            ans+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prec(s[i])<=prec(st.top())){ //jo string se aaya vo chota hai and st me already tha vo bada nahi seh skte
                ans+=st.top();
                st.pop();
                
            }
            st.push(s[i]);

        }
         i++;
    }
    while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
    return ans;
}
int main(){
    string s="a+b*(c^d-e)";
    string res=InfixToPost(s);
    for(auto value:res){
        cout<<value;
    }
    return 0;
}