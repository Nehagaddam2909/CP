#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   string s;
   cin>>s;
   char ch=s[0];
   ll c=1,mx=0;
   for(ll i=1;i<s.length();i++)
   {
      if(s[i]!=ch)
      {
         mx=max(c,mx);
         ch=s[i];
         c=1;
      }
      else
      {
         c++;
      }
   }
   if(ch==s[s.length()-1])
      mx=max(mx,c);
   
      cout<<mx<<endl;
   return 0;
}