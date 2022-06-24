#include<bits/stdc++.h>
using namespace std;
class Neha
{
   public:
   int check(string s)
   {
      int mx=0,c=0;
      for(int i=0;i<s.length();i++)
      {
         if(s[i]=='B')
         {
            c++;
         }
         
      }

      return max(mx,c);
   }
   void func(int a,int b,int c)
   {
      string s1;
      string s2;
      int k,l,c1=c,c2=c;
      if(c==1)
      {
         c=2;
         k=ceil(a/2.0);
         //cout<<k<<" ";
         for(int i=1;i<=a;i++)
         {
            if(i==k)
               s1+='B';
            else
               s1+='R';
         }
         cout<<s1<<endl;
         return ;
      }
     
      
      k=ceil(a/(c+1));
     
      
      
         
      l=k;
      k=0;
      
      for(int i=1;i<=a;i++)
      {
         if(k==l && c1>0)
         {
            s1+='B';
            l=(a-i)/c1;
            c1--;
            //l+=k;
            
            k=0;
         }
         else
         {
            s1+='R';
            k++;
         }
      }

      /*if(check(s1)>check(s2))
      {
         cout<<s2<<endl;
      }
      else
      {
         cout<<s1<<endl;
      }*/
      //cout<<check(s1)<<endl;
     cout<<s1<<endl;
   }
};
int main()
{
   int t;
   cin>>t;
   while(t--)
{   int a,b,c;
   cin>>a>>b>>c;


   Neha nn;
   nn.func(a,b,c);
}
   return 0;
}