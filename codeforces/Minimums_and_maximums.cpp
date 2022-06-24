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
   void func(ll l1,ll l2,ll l3,ll l4)
   {
      if(l1==l2 and l3==l4 and l2==l3)
         cout<<l3<<endl;
      else if(l3<=l2 and l3>=l1)
         cout<<l3<<endl;
      else if(l3<=l2 and l3<l1 and l1>l4)
         cout<<(l3+l1)<<endl;
      else if(l3<=l2 and l3<l1 and l1<=l4)
         cout<<l1<<endl;
      else if(l3>l2)
         cout<<(l1+l3)<<endl;
      
      
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll l1,r1,l2,r2;
      cin>>l1>>r1>>l2>>r2;
      Neha nn;
      nn.func(l1,r1,l2,r2);
   }
   return 0;
}