#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        map<ll,ll>m;
        ll q;
        for(ll i=0;i<n;i++)
        {
            cin>>q;
            m[q]++;
        }
        ll s=0;
        for(auto it:m)
        {
            if(it.first<=it.second)
            {
                s+=it.first;
            }
            
        }
        cout<<s<<endl;
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