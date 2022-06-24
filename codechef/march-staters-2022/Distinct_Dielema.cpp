/*
Author: Neha Gaddam
Date: 4-5-2022*/
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
       multiset<ll>m;
       map<ll,ll>mp;
       ll k;
       for(int i=0;i<n;i++)
      {
         cin>>k;
         m.insert(k);
      }
      ll c=0;
      ll g=-1;
      auto it=m.begin();
      for(int i=0;i<n;i++,it++)
      {

         if(mp[*it]==0)
         {
            mp[*it]++;
            c++;
         }
         else
         {
            if(mp[*it]>2)
            {
               if(mp[2*(*it)]==0)
                  c++;
            }
         }
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
      ll n;
      cin>>n;
      Neha nn;
      nn.func(n);
   }
    return 0;
}