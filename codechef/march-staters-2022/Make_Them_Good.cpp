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
      vector<int>v;
      ll even_c=0,odd_c=0,k;
      for(ll i=0;i<n;i++)
      {
         cin>>k;
         v.push_back(k);
         if(k%2==0)
            even_c++;
         else  
            odd_c++;
      }
      ll mn=min(even_c,odd_c);
      if(mn==0)
         cout<<0<<endl;
      else
      {
         
            cout<<ceil(mn/2.0)<<endl;
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