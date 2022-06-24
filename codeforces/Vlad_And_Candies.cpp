/*
Author: Neha Gaddam
Date: 30-3-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func(ll l);
};
class Neha: public Test
{
   public:
   void func(ll a)
   {
      multiset<ll>m;
      ll k;
      for(int i=0;i<a;i++)
      {
         cin>>k;
         m.insert(k);
      }
      check(m,a);
   }
   void check(multiset<ll>m,ll n)
   {
      ll mx=*m.rbegin();
      ll mx1=*(++m.rbegin());
      if((m.size()==1 && mx==1))
         cout<<"YES"<<endl;
      else if((mx-mx1)<=1 && m.size()>1)
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;
   }
};
int main()
{

   ll t;
   cin>>t;
   while(t--)
   {
      ll a;
      cin>>a;
      Neha nn;
      nn.func(a);
   }
   return 0;
}