/*
Author: Neha Gaddam
Date: 30-3-2022*/
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
      string s;
      ll m,flag=0;
     // n-=4;
     // s+='4';
     // cout<<n<<" ";
      while(n>0)
      {
         if(n>=7 && n%7==0)
         {
            n-=7;
            s+='7';
         }
         else if(n<4 && n>0)
         {
            flag=1;
            break;
         }
         else
         {
            n-=4;
            s+='4';
         }
         //cout<<n<<" ";
      }
      if(flag==0)
      {
         /*string s1=s;
         reverse(s.begin(),s.end());
         if(s.compare(s1)<0)
            cout<<s<<endl;
         else
            cout<<s1<<endl;*/
         cout<<s<<endl;
      }
         
      else
         cout<<-1<<endl;
   }
};
int main()
{
   ll n;
   cin>>n;
   Neha nn;
   nn.func(n);
    return 0;
}