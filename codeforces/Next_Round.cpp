#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func(ll n);
};
class Neha
{
   public:
   void func(ll n,ll a)
   {
      vector<int>v;
      ll k,c=0,flag=0;
      for(int i=0;i<n;i++)
      {
         cin>>k;
         v.push_back(k);
      }
      for(int i=0;i<n;i++)
      {
         if(v[i]>0 && v[i]>=v[a-1])
            c=i+1;
         else
            break;
      }
      
         cout<<c<<endl;
      
   }
};
int main()
{
   ll n,a;
   cin>>n>>a;
   Neha nn;
   nn.func(n,a);
   return 0;
}