#include<bits/stdc++.h>
using namespace std;
void vecreverse(vector<int>&v)
{
    int start;
    int end;
    start=0;
     end=v.size()-1;
      while(start<end)
    {
        swap(v[start],v[end]);
        start++;
        end--;   
    }
    for(int val :v)
    {
        cout<<val<<" ";
    }
}
int main()
{
    vector<int>vec={55,56,65,78,89,65,69};
    cout<<"Vector before reverse :";
    for(int val :vec)
    {
        cout<<val<<" ";
    }
cout<<endl<<"vector after reverse :";
vecreverse(vec);   
}