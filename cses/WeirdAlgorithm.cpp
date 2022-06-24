#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Neha 
{
   public:
   void func(ll n)
   {
      cout<<n<<endl;
      while(n>1)
      {
         if(n%2==0)
            n=n/2;
         else
            n=(3*n)+1;
         cout<<n<<endl;
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