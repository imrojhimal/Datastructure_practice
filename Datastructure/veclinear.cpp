#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int size;
    cout<<"you wanna fix the size :";
    cin>>size;
    cout<<endl;
    int input;
    for(int i=0;i<size;i++)
    {
          cin>>input;
          vec.push_back(input);
    }
    cout<<"what do you wanna search : ";
    int target,count=0;
    cin>>target;
    for(int val:vec)
    {
        if(val==target)
        {
            cout<<endl<<"found at index :"<<count<<endl<<"element is :"<<val;
        }
        count++;
    }
}