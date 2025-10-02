#include <bits/stdc++.h>
using namespace std;


class Stack{
    public:
     int top=-1, size=10;
     int stack[10];

     void push(int x){
        if(top>size)cout<<"OverFlow Error";
        top++;
        stack[top]=x;

     }
     int top(){
        if(top!=-1){
            return stack[top];
        }
        else{
            return -1;
        }
     }
     void pop(){
        if(top==-1)cout<<"underflow Error";
        top--;
        
     }
     int size(){
        return top+1;
     }
     void print(){
        while(top!=-1){
            cout<<stack[top];
            top--;
        }
     }


};
int main(){
        Stack st;
        st.push(45);
        st.push(59);
        st.print();
        
        

    return 0;
}