/*
Author: Neha Gaddam
Date: 30-3-2022*/
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
    void func(ll n)
    {
       ll a[n];
      for(ll i=0;i<n;i++)
      {
         cin>>a[i];
         if(a[i]==0)
         {
            cout<<0<<endl;
            continue;
         }
         ll mod=32768;
         ll c,ans=INT_MAX;
         for(ll j=0;j<16;j++)
         {
            ll x=a[i]+j;
            c=0;
            while(x%2==0)
           {
              x=x/2;
              c++;
           }
            ll y=j+15-c;
            ans=min(y,ans);
         }
         cout<<ans<<endl;
      }
    }
};
int main()
{
   ll t;
   cin>>t;
   
      Neha nn;
      nn.func(t);
   
    return 0;
}