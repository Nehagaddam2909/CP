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
   void func(ll a,ll b)
   {
      ll s=0;
      ll low=2,high=b,mid,flag=0;
      while(low<=high && high>=2)
      {
         mid=(low+high)/2;
         if((s+mid)<=a)
         {
            if(s!=0)
               s-=1;
            s+=mid;
         }
         else if((s+mid)>a)
         {
            high=mid-1;
            continue;
         }

         if(s==a)
         {
            flag=1;
            break;
         }
         

      }
      if(flag==1)
         cout<<"YES"<<endl;
      else
         cout<<"NO"<<endl;
   }
};
int main()
{
   ll a,b;
   cin>>a>>b;
   if(a==b)
      cout<<1<<endl;
   else
   {
      Neha nn;
      nn.func(a,b);
   }
   
   return 0;
}