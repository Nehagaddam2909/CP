/*
Author : Neha 
Modified : 1/5/2022*/

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
  // int get_second( pair<ll, ll> i ){ return i.second; }
   void func(ll n)
   {
      //vector<ll>v(n);
      map<ll,ll>mp;
      for(int i=0;i<n;i++)
      {
         ll k;
         cin>>k;
         //v[i]=k;
         mp[k]++;
      }
     multimap<int,int>mmp;
     for(auto it:mp)
     {
        mmp.insert({it.second,it.first});
        //cout<<it.second<<" "<<it.first<<endl;
     }
      
      vector<int>ans;
      for(int i=n;i>0;i--)
      {
         
         int c=0;
         int temp=i;
         for(auto it=mmp.rbegin();it!=mmp.rend();it++)
         {
            ll k=it->first;
            //cout<<k;
            
            if(k>temp)
            {
               //cout<<k<<" "<<temp<<endl;
               c+=k-temp;
               if(temp!=0)
                  c++;
               temp=0;
            }
            else
            {
               temp-=k;
               c++;
            }
           // c++;
            
         }
       //cout<<endl;
         ans.push_back(c);
      }
      for(int i=0;i<ans.size();i++)
      {
         cout<<ans[i]<<" ";
      }
      cout<<endl;
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
      Neha nn;
      nn.func(n);
   }
   return 0;
}