/*
Author : Neha 
Modified : 22/6/2022*/

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
   bool func(ll x1,ll y1,ll x2,ll y2)
   {
      if(x1+1<=8 and x2-1>=1)
      {
         if(y1+2<=8 and y2+2<=8)
         {
            if(x1+1==x2-1 and y1+2==y2+2)
               return true;
         }
         else if(y1-2>=1 and y2-2>=1)
         {
            if(x1+1==x2-1 and y1-2==y2-2)
               return true;
         }
      }
      if(x1+2<=8 and x2-2>=1)
      {
         if(y1+1<=8 and y2+1<=8)
         {
            if(x1+2==x2-2 and y1+1==y2+1)
               return true;
         }
         else if(y1-1>=1 and y2-1>=1)
         {
            if(x1+2==x2-2 and y1-1==y2-1)
               return true;
         }
      }
      return false;
      
   }

   bool check(ll x1,ll y1,ll x2,ll y2)
   {
      if(x1==x2 or y1==y2)
      {
         if(y1==y2)
         {
            if(x1-1==x2+1 and x1>1 and x2<8)
            {
               if(x1-1 !=x2 and x2+1!=x1\)
                  return true;
            }
            if(x1+1 == x2-1 and x1<8 and x2>1)
            {
               if(x1+1 !=x2 and x2-1!=x1)
                  return true;
            }

            if(x1-2==x2+2 and x1-2>=1 and x2+2<=8)
            {
               if(x1-2 !=x2 and x1+2!=x2)
                  return true;
            }
            if(x1+2 == x2-2 and x1+2<=8 and x2-2>=1)
            {
               if(x1+2 !=x2 and x2-2!=x1)
                  return true;
            }

            
         }
         if(x1==x2)
         {
            if(y1-1==y2+1 and y1>1 and y2<8)
            {
               if(y1-1 !=y2 and y2+1!=y1)
                  return true;
            }
            if(y1+1 == y2-1 and y1<8 and y2>1)
            {
               if(y1+1 !=y2 and y2-1!=y1)
                  return true;
            }

            if(y1-2==y2+2 and y1-2>=1 and y2+2<=8)
            {
               if(y1-2 !=y2 and y1+2!=y2)
                  return true;
            }
            if(y1+2 == y2-2 and y1+2<=8 and y2-2>=1)
            {
               if(y1+2 !=y2 and y2-2!=y1)
                  return true;
            }
         }
      }

      return false;
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      Neha nn;
      ll x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
      if(nn.check(y1,x1,y2,x2) || nn.check(y2,x2,y1,x1))
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;
   }
   return 0;
}