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
    void func(ll n,string s)
    {
       int zero_count=0,one_count=0,flag=0;
       if(s[0]=='1')
         one_count++;
       for(int i=1;i<n;i++)
       {
          if(s[i]=='1' && s[i-1]=='1')
         {
            flag=1;
            one_count++;
         }
         else if(s[i]=='1')
         {
            one_count++;
         }

       }
       if(one_count==0)
         cout<<0<<endl;
       else if(flag==1)
         cout<<2<<endl;
      else 
         cout<<1<<endl;
    }
};
int main()
{
   ll n;
   cin>>n;
   while(n--)
   {
      ll t;
      cin>>t;
      string s;
      cin>>s;
      Neha nn;
      nn.func(t,s);
   }
    return 0;
}