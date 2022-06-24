/*
Author: Neha Gaddam
Date: 5-4-2022*/
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
    void func()
    {
       ll n=get_Input();
       cout<<ceil(n/4.0)<<endl;
    }
    ll get_Input()
    {
       ll n;
       cin>>n;
       return n;
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       Neha nn;
   nn.func();
   }
  
    return 0;
}