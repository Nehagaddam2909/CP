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
   void func(int n)
   {
      vector<int>v;
      for(int i=0;i<n;i++)
      {
         int k;
         cin>>k;
         v.push_back(k);
      }
      int c=n;
      for(int i=1;i<n;i++)
      {
         if(v[i]==v[i-1])
            c--;
      }
      cout<<c<<endl;
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      Neha nn;
      nn.func(n);
   }
   return 0;
}