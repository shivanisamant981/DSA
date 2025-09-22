#include <bits/stdc++.h>
using namespace std;

//Hi Anonymous what you doing here are you doing good yes okay that's great  
vector<int> findLPS(string s){
            int n=s.size();
            vector<int> lps(n,0);
            int len=0;
            int i=1;
            while(i<n){
                if(s[i]==s[len]){
                    len++;
                    lps[i]=len;
                    i++;
                }
                else{
                    if(len!=0){
                        len=lps[len-1];

                    }
                    else{
                        lps[i]=0;
                        i++;
                    }
                }
            }
            return lps;
}
bool kmp(string s,string pat,vector<int> lps ){
    int m=pat.size();
    int n=s.size();
    int i=0;
    int j=0;
    while(i<n){
        if(s[i]==pat[j]){
            i++;
            j++;
        }
        if (j==m){
            return true;
        }
        else if(s[i]!=pat[j]){
            if(j!=0){
                j=lps[j-1];
            }
            else{
                i++;
            }

        }
    }
    return false;
}
int main(){
         
    string s="abababd";
    string patt="ababd";
    vector<int> lps=findLPS(patt);
    bool res=kmp(s , patt, lps);
    cout<<res;
    return 0;
}