/*
Author: Neha Gaddam
Date: 8-4-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n);
};
class Neha: public Test
{
    public:
    void func(ll n)
    {
       ll s=(n*(n+1))/2;
       cout<<(s/n)<<endl;
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
      nn.func(n);
   }
    return 0;
}