#include <bits/stdc++.h>
using namespace std;

class Queue{
   public:
   int size;
   int * arr;
   int start,end;
   int current_size;
   Queue(){
       size=1000;
      start=-1;
      end=-1;
      current_size=0;
      arr=new int[size];
      
   }
   void push(int x){
      if(current_size==size){
         cout<<"over flow";
      }
      if(current_size==0){
         start=0;
         end=0;
      }
      else{
            end=(end+1)%size;
      }
      
         arr[end]=x;
         current_size+=1;
      

   }
   int pop(){
     if(current_size==0){
      cout<<"nothing to pop";
     }
     int el=arr[start];
     if(current_size==1){
      start=end=-1;
     }
     else{
      start=(start+1)%size;
     }
     current_size-=1;
     return el;
   }
   int top(){
     if(current_size==0)cout<<"underflow";
     return arr[start];
   }
   int size1(){
      return current_size;
   }
   void print(){
      if(current_size==0){
         cout<<"no element found";
      }
      int i=start;
      for(int count=0;count<current_size;count++){
         cout<<arr[i]<<endl;
         i=(i+1)%size;
         
      }
   }

};
int main(){
   Queue q1;
   q1.push(34);
   q1.push(56);
   q1.push(90);
   cout<<q1.pop();
   q1.print();
       

    return 0;
}