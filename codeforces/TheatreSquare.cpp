/*
Author: Neha Gaddam
Date: 15-4-2022*/
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
    void func(ll a,ll b,ll c)
    {

       ll i=ceil(a/(double)c);
       ll j=ceil(b/(double)c);

        ll x=max(i,j);
      if(a>c && b>c)
         cout<<i*j<<endl;
      else
         cout<<x<<endl;

      
       
       //cout<<x<<endl;
    }
};
int main()
{
   ll a,b,c;
   cin>>a>>b>>c;
   
      Neha nn;
      nn.func(a,b,c); 
   
   
    return 0;
}