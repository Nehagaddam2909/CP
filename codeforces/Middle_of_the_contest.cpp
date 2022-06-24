/*
Name : Neha 
Modified on: 4-4-2022
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Test
{
   public:
   void func(string s,string s1);
};
class Neha: public Test
{
   public:
   void func(string s,string s1)
   {
      int k=stoi(s.substr(3,2))+stoi(s1.substr(3,2));
      int c=k/60;
      k=k%60;
      k=k/2;
      int hours=stoi(s.substr(0,2))+stoi(s1.substr(0,2));
      hours+=c;
      int flag=0;
      //cout<<hours<<" ";
      //hours=hours*100+k;
      //cout<<hours<<endl;
      if(hours%2!=0)
      {
         flag=1;
         
         k+=30;
      }
      
      
         hours=hours/2;
         //cout<<hours<<" "<<k<<endl;
      //int total=(hours*100)+k;
      //cout<<total<<endl;
      string ans="";
      if(hours<10)
      {
         ans+="0"+to_string(hours);
      }
      else
      {
         ans+=to_string(hours);
      }
      ans+=":";
      if(k<10)
      {
         ans+="0"+to_string(k%100);
      }
      else
      {
         ans+=to_string(k%100);
      }
      cout<<ans<<endl;
       

   
      //cout<<total<<endl;
      
      

   }
};
int main()
{
   string s1,s2;
   cin>>s1>>s2;
   Neha nn;
   nn.func(s1,s2);
   return 0;
}