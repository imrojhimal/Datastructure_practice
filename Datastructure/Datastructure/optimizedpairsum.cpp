#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size : ";
  cin>>n;
  cout<<endl<<"Enter the elements of Array : ";
  int a[n];
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  int pairsum, target,i=0,j=n-1;
  cout<<endl<<"give me the target bro : ";
  cin>>target;
sort(a,a+n);
vector<int>pair;
  while(i<j)
  {
    pairsum=a[i]+a[j];
    if(pairsum>target)
    {
        j--;
    }
    else if(pairsum<target)
    {
        i++;
    }
    else
    {
       pair.push_back(i);
        pair.push_back(j);
        i++;
        j--;
    }
  }
  cout<<"\n found the sum at "<<pair[0]<<" and "<<pair[1];   
}