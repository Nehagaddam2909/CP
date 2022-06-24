#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func(ll n)
   {
      ll k=n/5;
      n=n%5;
      if(n>0)
      {
         k+=n/4;
         n=n%4;
         k+=n/3;
         n=n%3;
         k+=n/2;
         n=n%2;
         if(n>0)
            k+=n;
         
      }
      cout<<k<<endl;
   }
};
int main()
{
   Test tt;
   ll n;
   cin>>n;
   tt.func(n);
   return 0;
}