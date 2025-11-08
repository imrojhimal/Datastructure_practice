#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
  vector<int> vec(5,0);
for(int i:vec)
{
    cout<<i<<endl;
}
vec.push_back(25);
vector<char> chvec={'a','n','l'};

chvec.push_back('b');
vec.push_back(100);
vec.push_back(45);
chvec.pop_back();
for(char val:chvec)
{
    cout<<val<<endl;
}
cout<<"size : "<<chvec.size()<<endl;

cout<<"size : "<<vec.size()<<endl;

cout<<"element : "<<vec.at(5)<<endl;
}