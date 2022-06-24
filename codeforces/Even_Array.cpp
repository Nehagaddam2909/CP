/*
Author: Neha Gaddam
Date: 8-4-2022*/
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
      vector<ll>v;
      ll even_c=0,odd_c=0,k,flag=0;
      for(ll i=0;i<n;i++)
      {
         cin>>k;
         v.push_back(k);
         if(k%2!=0)
            odd_c++;
         else
            even_c++;
      }
      if(n%2==0)
      {
         if(even_c!=odd_c)
            cout<<-1<<endl;
         else 
            flag=1;
      }
      else
      {
         if((even_c-1)!=odd_c)
            cout<<-1<<endl;
         else
            flag=1;
      }
      if(flag==1)
      {
         ll c1=0;
         for(ll i=0;i<n;i+=2)
         {
            if(v[i]%2!=0)
               c1++;
         }
         cout<<c1<<endl;
      }
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