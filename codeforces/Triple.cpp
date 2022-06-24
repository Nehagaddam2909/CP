#include<bits/stdc++.h>
using namespace std;
class Test
{
   public:
   void func();
};
class Neha: public Test
{
   public:
   void func(int n,vector<int>v)
   {
      map<int,int>mp;
      for(int i=0;i<n;i++)
      {
         mp[v[i]]++;
      }
      int flag=0;
      for(auto it:mp)
      {
         if(it.second>=3)
         {
            cout<<it.first<<endl;
            flag=1;
            break;
         }
      }
      if(flag==0)
         cout<<-1<<endl;

   }
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      vector<int>v;
      cin>>n;
      for(int i=0;i<n;i++)
      {
         int k;
         cin>>k;
         v.push_back(k);
      }
      Neha nn;
      nn.func(n,v);
   }
   return 0;
}