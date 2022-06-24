/*
Editor: Neha Gaddam
Date: 9-4-2022
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll a,ll b);
    
};
class Neha : Test
{
   public:
   void func(ll a,ll b)
    {
       if(b%a==0)
       {
          cout<<(b/a)-1<<endl;
       }
       else
       {
          cout<<(b/a)<<endl;
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
