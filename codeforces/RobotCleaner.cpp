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
   void func(ll x,ll y,ll s1,ll s2,ll d1,ll d2)
   {
      ll c=INT_MAX,f1=1,f2=1;
      if(d1>=s1)
         c=min(c,(d1-s1));
      else
         c=min(c,(2*(x-s1)+s1-d1));
      if(d2>=s2)
         c=min(c,(d2-s2));
      else
         c=min(c,(2*(y-s2)+s2-d2));

      cout<<c<<endl;


      
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll x,y,s1,s2,d1,d2;
      cin>>x>>y>>s1>>s2>>d1>>d2;
      Neha nn;
      nn.func(x,y,s1,s2,d1,d2);
   }
   return 0;
}