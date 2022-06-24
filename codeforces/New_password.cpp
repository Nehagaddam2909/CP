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
   void func(ll t,ll n,string s)
   {
      int c1=0,c2=0,c3=0,c4=0;
      for(int i=0;i<n;i++)
      {
         int q=int(s[i]);
         if(q<=90 and q>=65)
            c1++;
         else if(q<=122 and q>=97)
            c2++;
         else if(q<=57 and q>=48)
            c3++;
         else if(s[i]=='@' or s[i]=='*' or s[i]=='#' or s[i]=='&')
            c4++;

      }
      if(c1<1)
         s+='A';
      if(c2<1)
         s+='a';
      if(c3<1)
         s+='1';
      if(c4<1)
         s+='*';
      while(s.length()<7)
         s+='1';
      cout<<"Case #"<<t<<": "<<s<<endl;
      
   }
};
int main()
{
   ll t;
   cin>>t;
   int c=1;
   while(t--)
   {
      
      ll n;
      cin>>n;
      string s;
      cin>>s;
      Neha nn;
      nn.func(c,n,s);
      c++;
   }
   return 0;
}