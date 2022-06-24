#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        cout<<n-checkPower(n)<<endl;

    }
    ll checkPower(ll n)
    {
        int t=0;
        if(ceil(log2(n))==floor(log2(n)))
            t=1;
        return ceil(log2(n))+t;
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
        Test tt;
        tt.func(n);
    }
    return 0;
}