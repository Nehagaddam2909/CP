#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n);
};
class Neha:public Test
{
    public:
    void func(ll n)
    {
        ll neha_x,neha_y;
        //neha_y=neha_x-neha_y;
        cout<<-check(n)<<endl;
    }
    ll check(ll n)
    {
        return ++n;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        Neha n;
        n.func(a);
    }
    return 0;
}