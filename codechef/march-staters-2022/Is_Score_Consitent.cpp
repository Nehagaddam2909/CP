/*
Author: Neha Gaddam
Date: 13-4-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func();
};
class Neha: public Test
{
    public:
    void func(ll x1,ll y1,ll x2,ll y2)
    {
       if(x1<=x2 && y1<=y2)
         cout<<"POSSIBLE"<<endl;
      else
         cout<<"IMPOSSIBLE"<<endl;
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll a,b,x,y;
      cin>>a>>b>>x>>y;
      Neha nn;
      nn.func(a,b,x,y);
   }
    return 0;
}