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
    vector<ll> get_Input(ll n)
    {
       vector<ll>v;
       ll k;
       for(int i=0;i<n;i++)
       {
          cin>>k;
          v.push_back(k);
       }
       return v;
    }
    void func(ll n)
    {
       
       vector<ll>v=get_Input(n);
       ll neg_count=0,pos=0;
       for(ll i=0;i<n;i++)
       {
          if(v[i]<0)
            neg_count++;
         else if(v[i]>0)
            pos++;
       }
       if(neg_count>1)
       {
          neg_count=(neg_count*(neg_count-1))/2;
       }
       pos=(pos*(pos-1))/2;
       pos=pos+neg_count;

       cout<<pos<<endl;
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll n,k;
      cin>>n;
      Neha nn;
      nn.func(n);

   }
    return 0;
}