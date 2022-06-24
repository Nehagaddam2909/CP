#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func(string s);
};
class Neha: Test
{
   public:
   void func(string s)
   {
      string s1="";
      ll n=s.length();
      if(n>10)
      {
         ll k=n;
         n=n-2;
         s1+=s[0]+to_string(n)+s[k-1];
      }
      else
      {
         s1+=s;
      }
      cout<<s1<<endl;
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      Neha nn;
      string s;
      cin>>s;
      nn.func(s);
   }
   return 0;
}