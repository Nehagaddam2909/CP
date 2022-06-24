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
   void func(int n,priority_queue<int>pq)
   {
      int flag=0;
      while(!pq.empty())
      {
         if(pq.top()<=1)
            break;
         int q=pq.top();
         pq.pop();
         if(q%2==0)
         {
            pq.push(q/2);
            pq.push(q/2);
         }
         else
         {
            pq.push(q/2);
            pq.push((q/2)+1);
         }
         flag=!flag;
      }

      if(flag==0)
         cout<<"maomao90"<<endl;
      else
         cout<<"errorgorn"<<endl;
   }
};
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      priority_queue<int>pq;
      for(int i=0;i<n;i++)
      {
         int k;
         cin>>k;
         pq.push(k);
      }
      Neha nn;
      nn.func(n,pq);
   }
   return 0;
}