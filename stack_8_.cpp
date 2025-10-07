#include <bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='^')return 3;
    else if(c=='*' || c=='/')return 2;
    else if(c=='+' || c=='-')return 1;
    else{
        return -1;
    }
}

string InfixToprefix(string s){

    
    stack <char> st;
    int n=s.size();
    string ans="";
    int i=0;
    while(i<n){
        char c=s[i];
        if((c>='a'&& c<='z' ) || (c>='A'&& c<='Z' )||(c>='0'&& c<='9' )){
            ans+=c;

        }
        else if(c=='('){
            st.push(c);
        }
        else if(c==')'){
            while(st.top()!='('){
                ans+=st.top();
                st.pop();

            }
            st.pop();
        }
        else{
           if(c=='^'){
                  while(!st.empty() && prec(c)<=prec(st.top())){
                      ans+=st.top();
                      st.pop();
                      
                  }
              }
              else{
                  while(!st.empty() && prec(c)<prec(st.top())){
                      ans+=st.top();
                      st.pop();
                  }
              }
              st.push(c);
              
        }
        i++;
    }
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
int main(){
    string s="(A+B)*C-D+F";
    reverse(s.begin(),s.end());
    string rev="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            rev=rev+')';
        }
        else if(s[i]==')'){
            rev=rev+'(';
        }
        else{
            rev+=s[i];
        }
    }
   string res=InfixToprefix(rev);
   cout<<res;
    return 0;
}