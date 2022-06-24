



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
    void func(ll n,string s)
    {
       ll i=0,j=n-1,flag=0;
       while(i<=j && i<n && j>=0)
       {
          int k=(int)s[i];
          int m=(int)s[j];
          //cout<<k<<" "<<m<<endl;
          int dif=abs(k-m);
          if(dif!=0 && dif!=2)
         {
            flag=1;
            break;
         }
          i++;
          j--;
          //cout<<i<<" "<<j<<endl;
       }
       if(flag==1)
         cout<<"NO"<<endl;
      else
         cout<<"YES"<<endl;
    }
};
int main()
{
   ll t;
   cin>>t;
   //cout<<t<<endl;
   while(t--)
   {
      ll n;
      string s;
      cin>>n>>s;
      //cout<<n<<" "<<s<<endl;
      Neha nn;
      nn.func(n,s);
   }
    return 0;
}