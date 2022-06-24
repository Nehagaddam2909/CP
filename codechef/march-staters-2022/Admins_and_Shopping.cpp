/*
Author: Neha Gaddam
Date: 20-4-2022*/
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

    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll x,y;
      cin>>x>>y;
      vector<ll>v;
      ll s=0,cnt=0;
      for(int i=0;i<x;i++)
      {
         ll k;
         cin>>k;
         v.push_back(k);
         if(k<y)
         {
            s+=k;
            cnt++;
         }
      }
      if(s==0)
         cout<<x<<endl;
      else
      {
        if(cnt==x)
            cout<<y/s<<endl;
        else
        {
           ll temp=x-cnt;
           ll z=ceil(s/(double)y);

           cout<<(cnt*z)+temp<<endl;
        }

      }

   }
    return 0;
}