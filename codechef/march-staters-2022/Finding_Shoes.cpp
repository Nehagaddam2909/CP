/*
Author: Neha Gaddam
Date: 30-3-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll m,ll n);
};
class Neha: public Test
{
    public:
    void func(ll m,ll n)
    {
        ll q=2*m;
        check_sheos(q,n);
    }
    void check_sheos(ll q,ll n)
    {
        if(n>=q)
        {
           // cout<<n-q<<endl;
           cout<<(q/2)<<endl;
        }
        else
            cout<<q-n<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n;
        cin>>m>>n;
        Neha nn;
        nn.func(m,n);
    }
    return 0;
}