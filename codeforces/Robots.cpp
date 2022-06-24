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
   void func(ll n,ll m)
   {
      vector<vector<char>>v;
      for(int i=0;i<n;i++)
      {
         vector<char>vv;
         for(int j=0;j<m;j++)
         {
            char k;
            cin>>k;
            vv.push_back(k);
         }
         v.push_back(vv);
      }
      map<int,int>mp;
      int min_x=INT_MAX,min_y=INT_MAX;
      for(int i=0;i<n;i++)
      {
         for(int j=0;j<m;j++)
         {
            if(v[i][j]=='R')
            {
               min_x=min(min_x,i);
               min_y=min(min_y,j);
            }
         }
      }
      if(v[min_x][min_y]=='R')
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll n,m;
      cin>>n>>m;
      Neha nn;
      nn.func(n,m);
   }
   return 0;
}