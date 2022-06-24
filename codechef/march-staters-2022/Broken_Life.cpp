/*
Author: Neha Gaddam
Date: 4-5-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func();
};
class Neha: public Test
{
    public:
    void func(ll n,ll m,string s,string s1)
    {
       int j=0;
      set<char>un(s1.begin(),s1.end());
      set<char>un1={'a','b','c','d','e'};
      set<char>ss;
      set_difference(un1.begin(), un1.end(), un.begin(), un.end(), 
                        std::inserter(ss, ss.begin()));
      string ans="";
      ll c=0;
      for(int i=0;i<n;i++)
      {
         if(s[i]!=s1[j])
         {
            //cout<<i<<" ";
               if(s[i]=='?')
               {
                  ans+=*ss.begin();
                  //cout<<i<<" ";
               }
               else
               {
                  ans+=s[i];
                  j++;

               }
         }
         else
         {
            c++;
            ans+=s[i];
            j++;
         }
      }
      if(c==m)
         cout<<-1<<endl;
      else
         cout<<ans<<endl;
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      ll n,m;
      string a,b;
      cin>>n>>m>>a>>b;

      Neha nn;
      nn.func(n,m,a,b);
   }
   
    return 0;
}