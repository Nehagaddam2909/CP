#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n,ll x)
    {
        ll A=0,B=0,C=0;
        ll k=(x/3);
        if(x%3!=0)
            k++;
        ll h=(3*k)-x;
        if((k+h)<=n)
        {
            cout<<"YES"<<endl;
            cout<<k<<" "<<h<<" "<<(n-(k+h))<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        Test tt;
        tt.func(n,x);
    }
    return 0;
}