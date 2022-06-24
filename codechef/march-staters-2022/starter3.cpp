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
   void func(string s)
   {
      stack<char>st;
      int c=0,left_count=0,right_count=0;
      string ss;
      int flag=0;
      vector<int>v;
      for(int i=0;i<s.length();i++)
      {
         if(s[i]=='(')
         {
            //if(st.empty())
            st.push(s[i]);
            if(flag==1)
               {
                  flag=0;
                  v.push_back(right_count);
                  right_count=0;
               }
         }
         else
         {

            if(!st.empty())
            {
               st.pop();
               right_count++;
               if(flag==0)
                  flag=1;
            }
         }

         
         
      }
         if(flag==1)
         {
            v.push_back(right_count);
         }
         if(!st.empty())
            c+=st.size();
      for(auto it:v)
      {
         cout<<it<<endl;
      }
      

   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      string s;
      cin>>s;
      Neha nn;
      nn.func(s);
   }
   return 0;
}