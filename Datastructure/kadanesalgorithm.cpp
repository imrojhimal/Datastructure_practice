#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec={3,-4,5,4,-1,7,-8};
    int cs,ms;
    ms=INT_MIN;
    cs=0;
    for(int val:vec)
    {
        cs+=val;
        ms=max(cs,ms);
        if(cs<0)
        {
            cs=0;
        }
    }
    cout<<"the value of maximum sub array is : "<<ms<<endl;
}