#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func(ll n);
};
class Neha : Test
{
   public:
   void func(ll n)
   {
      if(n%2==0 && n>3)
      {
         cout<<"YES"<<endl;
      }
      else
      {
         cout<<"NO"<<endl;
      }
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