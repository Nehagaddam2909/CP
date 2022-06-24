#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void func(ll a,ll b,vector<int>v1,vector<int>v2)
{
   ll low=0,high=b+3000,mid;
   while(low<=high)
   {
      mid=(low+high)/2;

      ll z=0,total=0;
      for(int i=0;i<a;i++)
      {
         ll r1=max(v1[i]*mid-v2[i],z);
         total+=r1;
      }

      if(total<=b) low=mid+1;
      else  high=mid-1;
   }
   cout<<high<<endl;
}
int main()
{
   ll a,b;
   cin>>a>>b;
   vector<int>v1,v2;

   for(int i=0;i<a;i++)
   {
      ll k;
      cin>>k;
      v1.push_back(k);
   }

   for(int i=0;i<a;i++)
   {
      ll k;
      cin>>k;
      v2.push_back(k);
   }

   func(a,b,v1,v2);
   return 0;
}