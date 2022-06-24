#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void fun(string s,ll n)
   {
      int c=0;
      for(int i=0;i<n-1;i++)
      {
         if(s[i+1]==s[i])
            c++;
      }
      cout<<c<<endl;
   }
};
int main()
{
   Test t;
   ll n;
   cin>>n;
   string s;
   cin>>s;
   t.fun(s,n);
   return 0;
}