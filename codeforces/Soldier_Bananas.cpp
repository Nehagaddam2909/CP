#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Neha
{
    public:
    void func(ll b,ll w,ll n)
    {
        ll s=0;
        for(ll i=1;i<=n;i++)
        {
            s+=b*i;
           // cout<<s;
        }
        if(w>=s)
            cout<<0<<endl;
        else
            cout<<s-w<<endl;
    }
};  
int main()
{
    ll a,b,x;
    cin>>a>>b>>x;
    Neha n;
    n.func(a,b,x);
    return 0;
}