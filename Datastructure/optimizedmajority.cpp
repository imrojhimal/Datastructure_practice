#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&nums,int n);
int main()
{
    int n;
    cout<<"Enter the size of vector :";
    vector<int>nums;
    cin>>n;
    cout<<"enter the values : ";
    int value;
    for(int i=0;i<n;i++){
        cin>>value;
        nums.push_back(value);
    }
    int result=majority(nums,n);
    cout<<"the majority element is :"<<result;
}
int majority(vector<int>&nums,int n)
{
   int size;
   sort(nums.begin(),nums.end());
   size=nums.size();
   int freq=1;
   int ans=nums[0];
   for(int j=1;j<n;j++)
   {
    if(nums[j]==nums[j-1])
    {
        freq++;
    }
    else
    {
        freq=1;
        ans=nums[j];
    }
   }
   if(freq>size/2)
   {
    return ans;
   }
   else 
   {
    return -1;
   }
}