#include <bits/stdc++.h>
using namespace std;

//second largest element
class solution{

 public:
        int secondLargest(vector<int> v1){
                int fLarg=INT_MIN;
                int sLarg=INT_MIN;
                for(int i=0;i<v1.size();i++){
                    if(v1[i]>fLarg){
                        sLarg=fLarg;
                        fLarg=v1[i];
                       

                    }
                    else if(v1[i]<fLarg && v1[i]>sLarg){
                        sLarg=v1[i];
                    }
                }
              return (sLarg == INT_MIN ? -1 : sLarg);
        }

 };

int main()
{
    vector <int> v1={2,3,5,32,56,2,67};
    solution s1;
   int y= s1.secondLargest(v1);
   cout<<y;

return 0;
}