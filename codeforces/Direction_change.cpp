#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void func(ll x,ll y)
{
   if(x==1 && y==1)
   {
      cout<<0<<endl;
   }
   else if((x==1 && y>=3) or (y==1 && x>=3))
   {
      cout<<-1<<endl;
   }
   else
   {
      ll c=min(x,y);
      c=(c-1)*2;

      ll k=max(x,y)-min(x,y);
      c+=(k*2);
      if(k%2!=0)
         c-=1;

      cout<<c<<endl;
   }
}
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll x,y;
      cin>>x>>y;
      func(x,y);
   }
   return 0;
}