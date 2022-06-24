/*
Author : Neha 
Modified : 23/4/2022*/

#include<bits/stdc++.h>
using namespace std;
template <class T>
inline bool mnto(T& a, T b) {return a > b ? a = b, 1 : 0;}
template <class T>
inline bool mxto(T& a, T b) {return a < b ? a = b, 1: 0;}
#define REP(i, s, e) for (int i = s; i < e; i++)
#define RREP(i, s, e) for (int i = s; i >= e; i--)
typedef long long ll;
typedef long double ld;
#define MP make_pair
#define FI first
#define SE second
typedef pair<int, int> ii;
typedef pair<ll, ll> pll;
#define MT make_tuple
typedef tuple<int, int, int> iii;
#define ALL(_a) _a.begin(), _a.end()
#define pb push_back
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<ii> vii;

#ifndef DEBUG
#define cerr if (0) cerr
#endif

#define INF 1000000005
#define LINF 1000000000000000005ll
#define MAXN 200005

class Test
{
   public:
   void func()
   {

   }
};
class Neha : public Test
{
   public:
   void fun(ll k,ll s)
   {
      if(k<=s)
         {
            cout<<1<<endl;
            cout<<k<<endl;
         }
         else
         {
            int m=0,i;
            for(i=1;i<s;i++)
            {
               m+=i;
               if(m>=k)
                  break;
               
            }
            cout<<i<<endl;
            while(i>=1)
            {
               cout<<i<<" ";
               i--;
            }
            cout<<endl;
         }
   }
   void func(ll c,ll n,ll x,ll y)
   {
      ll s=(n*(n+1)/2);
      ll k=s/x;
      ll q=s/y;
      if((k/q)==(x/y))
      {
         cout<<"Case "<<c<<": "<<"POSSIBLE"<<endl;
         fun(k,s);
         
         //cout<<
      }
      else
      {
         cout<<"Case "<<c<<": "<<"IMPOSSIBLE"<<endl;
      }
   }
};
int main()
{
   ll t;
   cin>>t;
   int c=1;
   while(t--)
   {
      ll n,x,y;
      cin>>n>>x>>y;
      Neha nn;
      nn.func(c,n,x,y);
      c++;
   }
   return 0;
}