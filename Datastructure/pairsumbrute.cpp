#include<bits/stdc++.h>
using namespace std;
vector<int> pairsum(vector<int> &pair,int ar[], int n,int target)
{
    
 for(int i=0;i<n;i++)
 {
    for(int j=i+1;j<n;j++)
    {
      if(ar[i]+ar[j]==target)
      {
        pair.push_back(i);
        pair.push_back(j);
        return pair;
      }
      
    }
 }
 pair.push_back(-1);
pair.push_back(-1);
return pair;
}
int main()
{
    vector<int>pair;
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int ar[n];
    cout<<"\n enter the elements of array : ";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
     cout<<"\n enter the target : ";
     int target;
     cin>>target;
     pairsum(pair,ar,n,target);
     cout<<"\n found the sum at "<<pair[0]<<" and "<<pair[1];
}