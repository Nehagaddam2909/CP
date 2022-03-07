#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll a,ll b)
    {
        cout<<a*b<<endl;
    }
};
int main()
{
    ll n;
    cin>>n;
    while(n>0)
    {
        ll a,b;
        cin>>a;
        cin>>b;
        Test t;
        t.func(a,b);
        n--;
    }
}