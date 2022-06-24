/*
Author: Neha Gaddam
Date: 10-04-2022*/

#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
class Test
{
    public:
    void func();
    
};
class Neha: Test
{
    public:
    void func(ll n)
    {
       if(n%2!=0)
         cout<<-1<<endl;
      else
      {
         ll k=n/2,m,j;
        if(k%2==0)
        {
           m=2;
            if(m==k)
               m=3;
            j=k-m;
           if(((k^m)+(m^j)+(k^j))==n)
            cout<<m<<" "<<j<<" "<<k<<endl;
           else
            cout<<-1<<endl;
        }
        else
        {
           cout<<1<<" "<<(k-1)<<" "<<k<<endl;
        }
    }
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       Neha nn;
       nn.func(n);
    }
    return 0;
}
