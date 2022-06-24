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
    void func(ll n,ll x)
    {
       if(x==1)
       {
          for(int i=1;i<n;i++)
          {
             cout<<i<<" ";
          }
          if(n>1)
             cout<<-n<<endl;
       }
       if(x-(n/2) >0)
       {
          if(x%2==0)
          {
             for(int i=(n/))
          }
       }
    }
};
int main()
{
   
   ll t;
   cin >>t;
   while(t--)
   {
   ll n,k;
   cin>>n>>k;
   Neha nn;
   
   if(n==1)
      cout<<k<<endl;
   else if(n==2)
   {
      cout<<(k/2)-1<<" "<<(ceil(k/2.0)+1)<<endl;
   }
   else
      nn.func(n,k);

   }
   
    return 0;
}