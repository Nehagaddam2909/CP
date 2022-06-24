/*
Author: Neha Gaddam
Date: 6-4-2022*/
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
    void func(ll a,ll b,ll c)
    {
       if(a==b && b==c && a==c)
      {
         cout<<"YES"<<endl;
         cout<<a<<" "<<b<<" "<<c<<endl;
      }
      else if(a!=b && b!=c && a!=c)
         cout<<"No"<<endl;
      else
      {
            //cout<<"YES"<<endl;
            if(a==c)
            {
               if(b>a)
                  cout<<"NO"<<endl;
               else
               {
                  cout<<"YES"<<endl;
                  cout<<a<<" "<<b<<" "<<b<<endl;
               }
            }
            else if(a==b)
            {
               if(a<c)
                  cout<<"NO"<<endl;
               else
               {
                  cout<<"YES"<<endl;
                  cout<<a<<" "<<c<<" "<<c<<endl;
               }
                  
            }
            else
            {
               if(a>b)
                  cout<<"NO"<<endl;
               else
               {
                  cout<<"YES"<<endl;
                  cout<<a<<" "<<a<<" "<<c<<endl;
               }
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
      ll a,b,c;
      cin>>a>>b>>c;
      Neha nn;
      nn.func(a,b,c);
   }
    return 0;
}