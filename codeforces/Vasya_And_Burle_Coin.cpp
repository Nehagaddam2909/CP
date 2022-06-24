/*
Author: Neha Gaddam
Date: 31-3-2022*/
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
       if(a==0 && b==0)
            cout<<1<<endl;
      else if(a==0)
            cout<<1<<endl;
      else if(b==0)
      {
         cout<<a+1<<endl;
      }
       else
            check(a,b);
    }
    void check(ll neha_a,ll neha_b)
    {
       ll m=(neha_a+2*neha_b)+1;
       //return m;
       cout<<m<<endl;
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll neha_a,neha_b;
      cin>>neha_a>>neha_b;
      Neha nn;
      nn.func(neha_a,neha_b);
   }
    return 0;
}