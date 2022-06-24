#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func(ll n);
};
class Neha:public Test
{
   public:
   void func(ll n)
   {
      vector<ll>v;
      ll k,odd_c=0,even_c=0;
      for(int i=0;i<n;i++)
      {
         cin>>k;
         if(k%2!=0)
         {
            odd_c++;
         }
         else
         {
            even_c++;
         }
      }
      if(odd_c==0)
         cout<<"NO"<<endl;
      else
      {
         if(n%2==0 && even_c==0)
            cout<<"NO"<<endl;
         else
            cout<<"YES"<<endl;
      }
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
      Neha nn;
      nn.func(n);
   }
   return 0;
}