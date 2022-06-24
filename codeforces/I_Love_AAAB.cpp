/*
Author : Neha 
Modified : 23/4/2022*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
      int count_b=0,count_a=0,flag=0;
      for(int i=0;i<s.length();i++)
      {
         if(s[i]=='A')
            count_a++;
         else if(i>0)
            count_b++;
         else 
         {
            flag=1;
            break;
         }
         if(count_b>count_a)
         {
            flag=1;
            break;
         }

      }
      if(count_b>count_a or count_b==0 or s[s.length()-1]!='B' or flag==1)
         cout<<"NO"<<endl;
      else 
         cout<<"YES"<<endl;
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