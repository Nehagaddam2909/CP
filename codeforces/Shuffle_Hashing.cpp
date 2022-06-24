#include<bits/stdc++.j>
using namespace std;
class Test
{
   public:
   void func(string s1,string s2);
};
class Neha: public Test
{
   public:
   void func(string s1,string s2)
   {
      vector<int>v1(s1.begin(),s1.end());
      vector<int>v2(s2.begin(),s2.end());

      int i=0,j=0,flag=0,n=v1.size(),m=v2.size();
      if(m<n)
         cout<<"YES"<<endl;
      else{
         map<int,int>mp;
         while(i<n)
         {
            for(j=0;j<v2.size();j++)
            {
               if(v1[i]==v2[j])
                  {
                     v2.erase(v2[j]);
                     break;
                  }
            }
            i++;
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
      string s1,s2;
      cin>>s1>>s2;
      Neha nn;
      nn.func(s1,s2);
   }
   return 0;
}