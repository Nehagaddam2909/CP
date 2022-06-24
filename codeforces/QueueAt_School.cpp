#include<bits/stdc++.h>
using namespace std;
class Test
{
   public:
   string func(int n,string ss)
   {
      string s1;
      string s2;
      for(int i=0;i<n-1;i++)
      {
         if(ss[i]=='B' && ss[i+1]=='G')
         {
            s1+=ss[i+1];
            s1+=ss[i];
            i++;
         }
         else
         {
            s1+=ss[i];
         }
      }
      if(s1.length()<n)
         s1+=ss[n-1];
      return s1;
   }
};
int main()
{
   int a,b;
   cin>>a>>b;
   string s;
   cin>>s;
   Test tt;
   for(int i=0;i<b;i++)
   {
      s=tt.func(a,s);
   }
   cout<<s<<endl;
   return 0;
}
