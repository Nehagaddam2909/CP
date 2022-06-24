#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Neha
{
   public:
   void func(string s,ll b,ll su,ll c,ll cost_b,ll cost_s,ll cost_c,ll n)
   {
      ll burger=0,cheese=0,sausage=0;
      for(ll i=0;i<s.length();i++)
      {
         if(s[i]=='S') sausage++;
         if(s[i]=='B') burger++;
         if(s[i]=='C')  cheese++;
      }
      
           
      ll low=0,high=n+200,mid=0;
      while(low<=high)
      {
         mid=(low+high)/2;

         //ll k=cost_b*burger+cost_s*sausage+cost_c*
        // cout<<low<<" "<<high<<endl;
         ll z=0;
         ll r1=max(burger*mid-b,z);
         ll r2=max(cheese*mid-c,z);
         ll r3=max(sausage*mid-su,z);
         //cout<<r1<<" "<<r2<<" "<<r3<<endl;
         ll total=r1*cost_b+r2*cost_c+r3*cost_s;

         if(total<=n) low=mid+1;
         else  high=mid-1;


      }
      cout<<high<<endl;

   }
};
int main()
{
   string st;
   cin>>st;
   ll s,b,c,cost_s,cost_c,cost_b,n;

   cin>>b>>s>>c>>cost_b>>cost_s>>cost_c>>n;

   
   Neha nn;
   nn.func(st,b,s,c,cost_b,cost_s,cost_c,n);
   return 0;
}