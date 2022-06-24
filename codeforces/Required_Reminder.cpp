#include<bits/stdc++.h>
using namespace std;
class Neha 
{
   public:
   void func(int a,int b,int c)
   {
      int k=(a*(c/a))+b;
      if(k>c)
      {
         k=(a*((c/a)-1))+b;
         cout<<k<<endl;
      }
      else
         cout<<k<<endl;
   }
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int a,b,c;
      cin>>a>>b>>c;
      Neha nn;
      nn.func(a,b,c);
   }
   return 0;
}