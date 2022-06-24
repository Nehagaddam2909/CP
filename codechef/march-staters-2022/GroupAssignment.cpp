#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll m,ll n)
    {
        ll g=2*m;
        cout<<g-(--n)<<endl;
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
        Test tt;
        tt.func(m,n);
    }
    return 0;
}