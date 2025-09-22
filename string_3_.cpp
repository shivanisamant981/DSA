#include <bits/stdc++.h>
using namespace std;


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

bool kmp(string s,vector<int> ){
    

}


int main(){
         
    string s="abababd";
    string patt="ababd";
    vector<int> lps=findLPS(s);
    for(auto value:lps){
        cout<<value<<" ";
    }



    return 0;
}