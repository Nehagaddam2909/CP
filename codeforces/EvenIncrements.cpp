#include<bits/stdc++.h>
using namespace std;
class Test
{
   public:
   void func();
};
class Neha : public Test
{
   public:
   bool check(vector<int>v,int n)
   {
      int c=0,m=0;
      for(int i=0;i<n;i++)
      {
         if(v[i]%2==0)
            c++;
         else
            m++;
      }
      if(c==n or m==n)
         return true;
      
      return false;
   }
   void func(int n,vector<int>v)
   {
      vector<int>v1(n);
      vector<int>v2(n);

      for(int i=0;i<n;i++)
      {
         if(i%2!=0)
         {
            v2[i]=v[i]+1;
            v1[i]=v[i];
         }
         else
         {
            v1[i]=v[i]+1;
            v2[i]=v[i];
         }
      }
      
      if(check(v1,n) || check(v2,n))
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;
   }
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      vector<int>v;
      for(int i=0;i<n;i++)
      {
         int k;
         cin>>k;
         v.push_back(k);
      }
      
      Neha nn;
      if(nn.check(v,n))
         cout<<"YES"<<endl;
      else
      {
         
      nn.func(n,v);
      }
      
   }
   return 0;
}