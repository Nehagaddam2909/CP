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
    ll get_Sum(vector<ll>v,ll n)
    {
       return accumulate(v.begin(),v.end(),0);
    }
    void func(vector<ll> v,ll n,ll a)
    {
       ll s=get_Sum(v,n);
       ll m=(3*a)-s;
       if(m<0)
         cout<<0<<endl;
      else
       cout<<m<<endl;
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll n,x,k;
      cin>>n>>x;
      vector<ll>v;
      for(int i=0;i<n-1;i++)
      {
         cin>>k;
         v.push_back(k);
      }
      Neha nn;
      nn.func(v,n,x);
   }
    return 0;
}