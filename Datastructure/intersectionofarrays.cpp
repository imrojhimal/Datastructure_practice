#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,size;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>size;
    int b[size];
    for(int i=0;i<size;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(a[i]==b[j])
            {
                cout<<"intersected at index (i,j)=("<<i<<","<<j<<")"<<endl;
                cout<<"element : "<<b[j]<<endl;
            }
        }
    }
}