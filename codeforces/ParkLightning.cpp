/*
Author: Neha Gaddam
Date: 6-4-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll a,ll b);
};
class Neha: public Test
{
    public:
    void func(ll a,ll b)
    {
       ll c=a*b;
       cout<<(int)ceil(c/2.0)<<endl;
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll x,y;
      cin>>x>>y;
      Neha nn;
      nn.func(x,y);
   }
    return 0;
}