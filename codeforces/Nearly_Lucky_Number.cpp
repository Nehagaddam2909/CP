#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
   public:
   void func()
   {
    string s;
    cin>>s;
    check(s);
   }
   void check(string s)
   {
       ll c=0;
       for(ll i=0;i<s.length();i++)
       {
           if(s[i]=='4' || s[i]=='7')
            c++;
       }
       if(c==4 || c==7)
        cout<<"YES"<<endl;
       else 
        cout<<"NO"<<endl;
   }

};
int main()
{
    Test tt;
    tt.func();
    return 0;
}