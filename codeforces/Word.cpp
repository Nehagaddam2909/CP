#include<bits/stdc++.h>
using namespace std;
class Test
{
   public:
   void func(string s);
};
class Neha: Test 
{
   public:
   void func(string s)
   {
      int upper_case=0,lower_case=0;
      string s1,s2;
      for(int i=0;i<s.length();i++)
      {
         if(s[i]>=65 && s[i]<=90)
            upper_case++;
         else if(s[i]>=97 && s[i]<=122)
            lower_case++;

         s1+=toupper(s[i]);
         s2+=tolower(s[i]);
      }
      if(upper_case>lower_case)
            cout<<s1<<endl;
         else
            cout<<s2<<endl;
      



   }
};
int main()
{
   string s;
   Neha nn;
   cin>>s;
   nn.func(s);
   return 0;
}