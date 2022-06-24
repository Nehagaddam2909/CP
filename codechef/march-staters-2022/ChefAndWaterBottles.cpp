#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n,ll l,ll m)
    {
        ll max_b=m/l;
        if(max_b>=n)
            cout<<n<<endl;
        else
            cout<<max_b<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,l,k;
        cin>>n>>l>>k;
        Test tt;
        tt.func(n,l,k);
    }
    return 0;
}