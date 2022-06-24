
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}
class Test
{
    public:
    void func(ll a,ll b);
    
};
class Neha: Test
{
   public:
   void check(ll k,ll m,ll b)
   {
      ll mx=INT_MAX,mn=INT_MAX;
      if(b==2)
      {
         ll q=k+2;
         if(q<=m)
         {
            mx=k+q;
            if(ceil(k/3.0)<=m)
            {
               mn=3*ceil(k/3.0);
               if(mn+3 <=m)
               {
                  mn+=(mn+3);
                  if(mn<mx)
                  {
                     cout<<3*ceil(k/3.0)<<" "<<(3*ceil(k/3.0))+3<<endl;
                  }
                  else
                  {
                     cout<<k<<" "<<k+2<<endl;
                  }
               }
               else
               {
                  mn=INT_MAX;
                  cout<<k<<" "<<(k+2)<<endl;
               }
            }
            if(mx==INT_MAX && mn==INT_MAX)
               cout<<-1<<endl;
            
            
         }
         else
         {
            //if()
            cout<<-1<<endl;
         }
      }
      else if(b==3)
      {
         ll q=k+3;
         if(q<=m)
         {
            mx=k+q;
            
               mn=(k+1);
               
                  mn+=(mn+3);
                  if(mn<mx)
                  {
                     cout<<(k+1)<<" "<<(k+3)<<endl;
                  }
                  else
                  {
                     cout<<(k)<<" "<<(k+3)<<endl;
                  }
               
            

            
         }
         else
         {
            if(k+1==m)
               cout<<-1<<endl;
            else
               check(k+1,m,2);
         }
      }
      
   }
   void func(ll a,ll b)
   {
      if(a%2==0)
      {
         check(a,b,2);
      }
      else if(a%3==0)
      {
         check(a,b,3);
      }
      else
      {
         func(a+1,b);
      }
   }
  
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll a,b;
       cin>>a>>b;
       Neha nn;
       nn.func(a,b);
    }
    return 0;
}
