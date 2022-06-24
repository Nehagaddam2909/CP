#include<bits/stdc++.h>
using namespace std;
class Test
{
   public:
   void func(int r);
};
class Neha: public Test
{
   public:
   void func(int r)
   {
      if(r>=1900)
         cout<<"Division 1"<<endl;
      else if(r<=1899 && r>=1600)
         cout<<"Division 2"<<endl;
      else if(r<=1599 && r>=1400)
         cout<<"Division 3"<<endl;
      else
         cout<<"Division 4"<<endl;
   }
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int r;
      cin>>r;
      Neha nn;
      nn.func(r);
   }
   return 0;
}