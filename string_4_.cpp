#include <bits/stdc++.h>
using namespace std;

//first non repeating character of given string

//step1:sabko -1 se intialize krr de 
//step2:traverse kro or i ki value 26 size ke array me rakh do -1 hai to -1 ka mtlb ki ek bhi baar nahi dikha
//step3:agr value badi aayi yaani tune koi index ki value store ki thi ye tu dusri baar dekhri hai
//step4:abb tu traverse krr or sabse minimum index ki value return krr agr index pe zero ke equal ya usse badi hai 


char nonRepeat(string s){
    vector<int> v1(26,-1);

    for(int i=0;i<s.size();i++){
        if(v1[(s[i]-'a')]==-1){
            v1[(s[i]-'a')]=i;

        }
        else{
            v1[(s[i]-'a')]=-2;
        }
    }
    int firstInd=INT_MAX;
    for(int i=0;i<26;i++){
        if(v1[i]>0){
            firstInd=min(firstInd,v1[i]);
        }


    }
    if(firstInd==INT_MAX)return ' ';
    return s[firstInd];


}


int main(){
    string s="geeksforgeeks";
    char num=nonRepeat(s);
    
    cout<<num;
    return 0;
}