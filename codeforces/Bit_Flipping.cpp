#include<bits/stdc++.h>
using namespace std;
class Neha 
{
   public:
   void func(int a,string s,int k)
   {
      vector<int>v(a,0);
      if(k%2==0)
      {
         for(int i=0;i<a;i++)
         {
            if(s[i]=='0')
            {
               s[i]='1';
               v[i]++;
               k--;
               if(k==0)
                  break;
            }
         }
         if(k%2!=0)
         {
            v[a-1]+=k;
            s[a-1]='0';
         }
         else
         {
            v[a-1]+=k;
         }

      }
      else
      {
         for(int i=0;i<a;i++)
         {
            if(s[i]=='1')
            {
               k--;
               v[i]++;
               if(k==0)
               {
                  for(int j=i+1;j<a;j++)
                  {
                     if(s[j]=='1') s[j]='0';
                     else  s[j]='1';
                  }
                  break;
               }
            }
            else
            {
               s[i]='1';
            }
         }
         if(k%2!=0)
         {
            s[a-1]='0';
            v[a-1]+=k;
         }
         else
         {
            v[a-1]+=k;
         }
      }


      cout<<s<<endl;
      for(int i=0;i<a;i++)
      {
         cout<<v[i]<<" ";
      }
      cout<<endl;
   }
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int a,b;
      string s;
      cin>>a>>b>>s;
      if(b==0)
      {
         cout<<s<<endl;
         for(int i=0;i<a;i++)
         {
            cout<<0<<" ";
         }
         cout<<endl;
      }
      else
      {
         Neha n;
         n.func(a,s,b);
      }
   }
   return 0;
}