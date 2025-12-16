#include<bits/stdc++.h>
using namespace std;
vector<int> pairsum(vector<int> &vec,vector<int> &ans,int target, int n)
{
   int i=0;
   int j=n-1;
   int ps,ms;
   sort(vec.begin(), vec.end());
   while(i<j)
   {
         ps=vec[i]+vec[j];
         if(ps>target)
         {
            j--;
         }
         else if(ps<target)
         {
            i++;
         }
         else{
            ans.push_back(i);
            ans.push_back(j);
            break;
         }
   }
   return ans;
}
int main()
{
    int n;
    cout<<"Enter the size of vector ";
    cin>>n;
    int temp=n;
    vector<int>vec;
    vector<int>ans;
    int values;
    while(temp>0)
    {
        cin>>values;
        vec.push_back(values);
        temp--;
    }
    int target;
    cout<<endl<<"enter the target"<<endl;
    cin>>target;
    pairsum(vec,ans,target,n);
    cout<<"found at ["<<ans[0]<<","<<ans[1]<<"]";
}