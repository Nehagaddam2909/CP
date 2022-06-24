#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func(ll n)
   {
      if(n%2==0)
         cout<<"Mahmoud"<<endl;
      else  
         cout<<"Ehab"<<endl;
   }
};
int main()
{
   ll n;
   cin>>n;
   Test tt;
   tt.func(n);
   return 0;
}