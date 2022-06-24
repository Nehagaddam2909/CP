/*
Author: Neha Gaddam
Date: 9-04-2022*/
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
   void check(ll n)
   {
      vector<ll>v1;
      vector<ll>v2;
      ll k;
      for(ll i=0;i<n;i++)
       {
         cin>>k;
         v1.push_back(k);
       }
       for(ll i=0;i<n;i++)
       {
         cin>>k;
         v2.push_back(k);
       }
       func(v1,v2,n);
   }
   void func(vector<ll>v1,vector<ll>v2,ll n)
    {
       
       for(ll i=0;i<n;i++)
       {
          if(v1[i]>v2[i])
          {
             swap(v1[i],v2[i]);
          }
       }
       ll s=0;
       for(ll i=1;i<n;i++)
       {
         s+=abs(v1[i]-v1[i-1]);
       }
       for(ll i=1;i<n;i++)
       {
         s+=abs(v2[i]-v2[i-1]);
       }
       cout<<s<<endl;


    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll n;
      cin>>n;
      Neha nn;
      nn.check(n);
   }
    return 0;
}