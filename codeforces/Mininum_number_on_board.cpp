#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Test
{
    public:
    void func(ll n);
};
class Neha: Test
{
    public:
    void func(ll n)
    {
        cout<<2<<endl;
        calculate(n);
    }
    void calculate(ll n)
    {
        ll a=n,i=n-1;
        while(i>0)
        {
            cout<<a<<" "<<i<<endl;
            a=ceil((a+i)/2.0);
            i--;

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