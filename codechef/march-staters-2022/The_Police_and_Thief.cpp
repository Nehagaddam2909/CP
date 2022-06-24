/*
Author: Neha Gaddam
Date: 20-4-2022*/
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
    void func(ll a,ll b)
    {
       ll c=0;
       while(a!=b)
       {
          a=a+2;
          b=b+1;
          c++;
       }
       cout<<c<<endl;
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll a,b;
      cin>>a>>b;
      Neha nn;
      nn.func(a,b);
   }
    return 0;
}