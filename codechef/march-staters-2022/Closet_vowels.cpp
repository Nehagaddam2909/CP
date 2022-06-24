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
   void func(int n,string s)
   {
      unordered_map<char,int>mp;
      mp['e']=4;
      mp['a']=0;
      mp['i']=8;
      mp['o']=14;
      mp['u']=20;

      unordered_map<int,int>up;
      up[4]=5;
      up[0]=5;
      up[8]=5;
      up[14]=5;
      up[20]=5;

      int c=0,flag=0;

      for(int i=0;i<s.length();i++)
      {
         if(s[i]!='a' and s[i]!='e' and s[i]!='i' and s[i]!='o' and s[i]!='u')
         {
            flag=1;
            int mn=s[i]-'a';
            //cout<<mn<<endl;
            int mx=mn-0;
            for(auto x:mp)
            {
               if(abs(x.second-mn)<mx)
                  mx=abs(x.second-mn);
            }
           // cout<<mn<<" "<<mx<<endl;
            //cout<<up[mn+mx]<<" "<<mp[abs(mn-mx)]<<endl;
            if(up[mn+mx]==5 and up[abs(mn-mx)]==5)
            {
               //c++;
               c%=1000000007;
               c++;
            }
         }
         //cout<<endl;
      }
      //cout<<c<<endl;
      //cout<<endl;
      if(flag==0)
         cout<<1%1000000007<<endl;
      else
      {
         ll k=pow(2,c);
         k%=1000000007;
         cout<<k<<endl;
      }

   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll n;
      cin>>n;
      string s;
      cin>>s;
      Neha nn;
      nn.func(n,s);
   }
   return 0;
}