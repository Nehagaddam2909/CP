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
    void func(ll a,ll b)
    {
       if(b==1 && a==0)
         cout<<"ON"<<endl;
      else
      {
         if(a%4==0)
         {
            if(b==0)
               cout<<"Off"<<endl;
            else 
               cout<<"On"<<endl;
         }
         else
         {
            if(b==1)
               cout<<"Ambiguous"<<endl;
            else
               cout<<"On"<<endl;
         }
      }
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll a,b;
      cin>>a>>b;
      Neha nn;
      nn.func(a,b);
   }
    return 0;
}