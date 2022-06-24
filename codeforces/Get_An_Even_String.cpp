/*
Author: Neha Gaddam
Date: 31-3-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(string s);
};
class Neha: public Test
{
    public:
    void func(string s)
    {
       set<char>ss(s.begin(),s.end());
       ll mm=0,n=s.length();
       map<char,ll>mp;
       if(ss.size()==n)
         cout<<n<<endl;
      else
      {
         for(int i=1;i<n;i+=2)
         {
            if(s[i-1]!=s[i])
               {
                  mp[s[i]]++;
                  mp[s[i-1]]++;
               }
         }
         if(n%2!=0)
            mp[s[n-1]]++;
         ll c=0;
         for(auto it:mp)
         {
            if(it.second%2==0)
               c++;
            else
               mm+=(it.second)%2;
         }
         if(c==mp.size())
            mm+=c/2;
         if((n-mm)%2!=0)
            mm+=1;
         cout<<mm<<endl;
      }
    }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      string s1;
      cin>>s1;
      Neha nn;
      nn.func(s1); 
   }
    return 0;
}