#include<bits/stdc++.h>
using namespace std;
class Neha
{
   public:
   void func(string s)
   {
      if(s.length()%2!=0)
         cout<<"NO"<<endl;
      else
      {
         map<int,int>mp;
         int count_1=0,count_0=0;
         int index1=-1,indexj=-1,mx;
         for(int i=0;i<s.length();i++)
         {
            if(s[i]=='0')
            {
               //count_0++;
               if(index1==-1)
               {
                  index1=i;
                  count_0=i;
               }
               else
               {
                  count_0=count_0+1;
               }
            
            }
            else
            {
               mx=count_0-index1;
               //if(mx==(s.length()/2))
                  
            }
            
            
         }
         if(index1!=count_0)
         {

         }
         
      }
   }
}
int main()
{
   int t;
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