#include <bits/stdc++.h>
using namespace std;


string rev(string s){
    reverse(s.begin(),s.end());
    int i=0;
    string word="";
    while(i<s.size()){
        string temp="";
        while(i<s.size() && s[i]!=' '){
            temp.push_back(s[i]);
            i++;
        }
          reverse(temp.begin(),temp.end());
           if(temp.size()>0){
            word=word + ' ' + temp;

           }
            

        i++;
    }
    return word;

}
int main(){

     string s="you are beautiful";
     string num=rev(s);
    cout<<num;


    return 0;
}