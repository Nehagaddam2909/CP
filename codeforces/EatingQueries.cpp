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
   vector<int>ans;
   int size;
   int binary_search1(int k)
   {
      
      return -1;
   }
   void func(int m,int n)
   {
      vector<int>candies;
      vector<int>queries;
      int total=0;
      //size=m;
      for(int i=0;i<m;i++)
      {
         int k;
         cin>>k;
         candies.push_back(k);
         
      }
      sort(candies.begin(),candies.end(),greater<int>());
      vector<int>ans;
      for(int i=0;i<m;i++)
      {
         total+=candies[i];
         //cout<<total<<" ";
         ans.push_back(total);
      }
      //size=n;
      for(int i=0;i<n;i++)
      {
         int k;
         cin>>k;
         int low=0,high=ans.size()-1,mid=0,an=-1;

         while(low<=high)
         {
            mid=(low+high)/2;
            if(ans[mid]>=k or (ans[mid]>k and ans[mid-1]<k))
              {
                 an=mid+1;
                 high=mid-1;
              }
            else
               low=mid+1;
            
         }
         cout<<an<<endl;
      //size=0; 
      }
      
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll m,n;
      cin>>m>>n;
      Neha nn;
      nn.func(m,n);
   }
   return 0;
}