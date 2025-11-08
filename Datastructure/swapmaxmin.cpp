#include<bits/stdc++.h>
using namespace std;
void swaap(int ar[],int size);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before swap :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    swaap(arr,n);
    cout<<"After swap :";
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}
void swaap(int ar[],int size)
{
   int Max=INT_MIN;
   int Min=INT_MAX;
   int maxindex;
   int minindex;
   for(int j=0;j<size;j++)
   {
    if(Max<ar[j])
    {
        Max=ar[j];
        maxindex=j;

    }
       if(Min>ar[j])
    {
        Min=ar[j];
        minindex=j;
    }
}
   
   swap(ar[maxindex],ar[minindex]);
}