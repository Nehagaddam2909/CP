#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func(ll a,double b)
   {
      if(a<=2)
         cout<<1<<endl;
      else
      {
         a-=2;
         cout<<1+ceil(a/b)<<endl;
      }
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll a,b;
      cin>>a>>b;
      double d=(double)b;
      Test tt;
      tt.func(a,d);
   }
   return 0;
}