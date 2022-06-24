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
   int check(priority_queue<int>pq,priority_queue<int>q)
   {
      int flag=0,i=-1,j=0;
      while(!pq.empty() and !q.empty())
      {
         j=pq.top();
         pq.pop();
         if(i!=-1 and j<=i)
         {
            return 1;
         }
         i=q.top();
         q.pop();

         if(i<=j)
         {
            return 0;
         }
      
      }

      return 1;
      
    
   }
   void func()
   {
      ll n,m;
      priority_queue<int>pq;
      priority_queue<int>q;
      cin>>n;
      for(int i=0;i<n;i++)
      {
         int k;
         cin>>k;
         pq.push(k);
      }
      cin>>m;
      for(int i=0;i<m;i++)
      {
         int k;
         cin>>k;
         q.push(k);
      }

      int l=check(pq,q);

      if(l==0)
         cout<<"Alice"<<endl;
      else  
         cout<<"Bob"<<endl;
      int z=check(q,pq);
      if(z==0)
         cout<<"Bob"<<endl;
      else  
         cout<<"Alice"<<endl;
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      Neha nn;
      nn.func();
   }
   return 0;
}