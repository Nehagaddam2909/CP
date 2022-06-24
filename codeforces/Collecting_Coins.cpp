/*
Author: Neha Gaddam
Date: 6-4-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll a,ll b,ll c,ll n);
};
class Neha: public Test
{
    public:
    void func(priority_queue<ll>qq,ll n)
    {
      ll k=qq.top();
      qq.pop();
      ll m=qq.top();
      qq.pop();
      n=n-((k-m)+(k-qq.top()));
       if(n<0 or n%3!=0)
       {
          cout<<"NO"<<endl;
       }
       else
         cout<<"YES"<<endl;
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll a,b,c,d,n;
      cin>>a>>b>>c>>n;
      priority_queue<ll>q;
      q.push(a);
      q.push(b);
      q.push(c);
      Neha nn;
      nn.func(q,n);
   }
    return 0;
}