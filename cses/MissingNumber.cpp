#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n;
   cin>>n;
   ll k=(n*(n+1))/2;
   ll s,q=0;
   for(ll i=0;i<n-1;i++)
   {
      cin>>s;
      q+=s;
   }
   cout<<k-q<<endl;
   return 0;
}