#include <bits/stdc++.h>
using namespace std;

//largest element in array

class solution{

 public:
        int largest(vector<int> v1){
            int maxi=INT_MIN;
            for(int i=0;i<v1.size();i++){
                if(v1[i]>maxi){
                    maxi=v1[i];
                }
            }
            return maxi;
        }

 };

int main()
{
    vector<int> v1={2,3,5,32,56,2,67};
    solution s1;
    int x=s1.largest(v1);
    cout<<x;

return 0;
}