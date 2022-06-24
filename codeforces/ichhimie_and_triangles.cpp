#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func(ll a,ll b,ll c)
   {
      cout<<a<<" "<<b<<" "<<b<<endl;
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll x,y,z,d;
      cin>>x>>y>>z>>d;
      Test tt;
      tt.func(y,z,d);
   }
   return 0;
}