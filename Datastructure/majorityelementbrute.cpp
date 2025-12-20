#include<bits/stdc++.h>
using namespace std;
int majority(vector<int>&nums)
{
    int n=nums.size();
    int freq;
    for(int val:nums)
    {
        freq=0;
        for(int mj:nums)
        {
            if(val==mj)
            {
                freq++;
            }
        }
        if(freq>n/2)
        {
            return val;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums={2,5,1,1,1,2,2};
    cout<<"the majority element is  "<<majority(nums);
}