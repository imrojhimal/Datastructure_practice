#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={6,7,8,-4};
    int n=sizeof(ar)/sizeof(int);
    int start, end;
    for(start=0;start<n;start++)
    {
        for(end=start;end<n;end++)
        {
            for(int i=start;i<=end;i++)
            {
            cout<<ar[i];
        }
        cout<<" ";
        }
        cout<<endl;
    }
}