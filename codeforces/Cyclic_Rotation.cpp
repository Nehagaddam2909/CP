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
   void func(int n,vector<ll>v1,vector<ll>v2,map<int,int>mp)
   {
      int i=n-1,j=n-1,flag=0;
      while(i>0 && j>0)
      {
         if(v1[i]!=v2[j])
         {
            if(j<n-1 && v1[i+1]==v2[j])
            {
               if(mp[v2[j]]>1)
               {
                  j--;
               }
               else
               {
                  flag=1;
                  break;
               }
            }
            else
            {
               flag=1;
               break;
            }
            
         }
         else
         {
            i--;
            j--;
         }
      }
   if(flag==1) cout<<"NO"<<endl;
   else  cout<<"YES"<<endl;
      
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
      vector<ll>v1;
      vector<ll>v2;
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
         int k;
         cin>>k;
         v1.push_back(k);
         mp[k]++;
      }
      for(int i=0;i<n;i++)
      {
         int k;
         cin>>k;
         v2.push_back(k);
      }
      Neha nn;
      nn.func(n,v1,v2,mp);
   }
   return 0;
}