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
   vector<vector<int>>v;
   int check(int i,int j)
   {
      int sum1=0;
      int l=i+1,m=j+1;
      while(l<v.size() and m<v[i].size())
      {
         sum1+=v[l][m];
         l++;
         m++;
      }
      l=i-1,m=j-1;
      while(l>=0 and m>=0)
      {
         sum1+=v[l][m];
         l--;
         m--;
      }
      l=i-1,m=j+1;
      while(l>=0 and m<v[i].size())
      {
         sum1+=v[l][m];
         l--;
         m++;
      }
       l=i+1,m=j-1;
      while(l<v.size() and m>=0)
      {
         sum1+=v[l][m];
         l++;
         m--;
      }
      sum1+=v[i][j];
      return sum1;
   }
   int find_num(int i,int j)
   {
      if(i>=0 and i<v.size() and j>=0 and j<v[i].size())
         return v[i][j];
      else
         return -1;
   }
   void func(int n,int m)
   {
      int mx=0;
      
      for(int i=0;i<n;i++)
      {
         vector<int>vm;
         for(int j=0;j<m;j++)
         {
            //mx=max(check()
            int k;
            cin>>k;
            vm.push_back(k);
         }
         v.push_back(vm);
      }
      for(int i=0;i<n;i++)
      {
         vector<int>vm;
         for(int j=0;j<m;j++)
         {
            mx=max(check(i,j),mx);
            
         }
         
      }
      cout<<mx<<endl;
      
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      int n,m;
      cin>>n>>m;
      Neha nn;
      nn.func(n,m);
   }
   return 0;
}