#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void func(int x,int y,vector<int>v)
{
   
   
      long long c=x;
      sort(v.begin(),v.end());
      for(int i=1;i<x;i++)
      {
         c+=v[i];
        // c++;
      }
      c+=v[x-1];
      if(c<=y)
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;
   
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int x,y,k;
      cin>>x>>y;
      vector<int>v;
      for(int i=0;i<x;i++)
      {
         cin>>k;
         v.push_back(k);
      }

      func(x,y,v);
   }
   return 0;
}