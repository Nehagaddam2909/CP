/*
Author: Neha Gaddam
Date: 30-3-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll x,ll y,ll z);
};
class Neha: public Test
{
    public:
    void func(ll a,ll x,ll y)
    {
        string s;
        cin>>s;
        ll count_0=0,count_1=0;
        for(int i=0;i<a;i++)
        {
            if(s[i]=='1')
                count_1++;
            else    
                count_0++;
        }
        cout<<count_0<<endl;
        if(count_1==0 or count_0==0)
            cout<<0<<endl;
        else
            cout<<min(x,y)<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        Neha nn;
        nn.func(x,y,z);
    }
    return 0;
}