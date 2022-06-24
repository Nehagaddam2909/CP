#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n,ll k,ll l,ll c,ll d,ll p,ll nl,ll np)
    {
        ll nm=k*l;
        ll sf=nm/nl;
        ll sl=c*d;
        ll salt=p/np;
        //cout<<nm<<" "<<sf<<" "<<sl<<" "<<salt<<" ";
        ll mm=min(sf,sl);
        mm=min(mm,salt);
        //cout<<" "<<mm<<" ";
        cout<<mm/n<<endl;
    }
};
int main()
{
    ll n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    Test tt;
    tt.func(n,k,l,c,d,p,nl,np);
    return 0;
}