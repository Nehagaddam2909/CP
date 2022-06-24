/*
Author : Neha 
Modified : 23/4/2022*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func()
   {

   }
};
class Neha : public Test
{
   public:
   void func(ll n,vector<ll>v)
   {
      ll c=0,a=-1,b=-1;
      for(int i=0;i<n-1;i++)
      {
         if(v[i]==v[i+1])
         {
            if(a==-1 and b==-1)
            {
               a=i;
               b=i+1;
            }
            else
            {
               //cout<<"#"<<b<<" "<<i<<endl;
               if(b==i)
               {
                  c+=1;
                  a=i;
                  b=i+1;
                  i++;
               }
               else
               {
                  c+=i-b;
                  a=i-1;
                  b=i;
               }  
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
      vector<ll>v;
      cin>>n;
      for(int i=0;i<n;i++)
      {
         ll k;
         cin>>k;
         v.push_back(k);
      }
      Neha nn;
      nn.func(n,v);
   }
   return 0;
}