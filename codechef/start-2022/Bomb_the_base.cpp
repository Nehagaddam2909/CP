#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Temp
{
    public:
    void func(ll a,ll b,vector<ll>v)
    {
        ll count=0;
        for(ll i=0;i<a;i++)
        {
            if(v[i]<b)
            {
                //b=b+1;
                count=i+1;
            }
        }
        cout<<count<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>vi;
        ll a,b,k;
        cin>>a>>b;
        for(ll i=0;i<a;i++)
        {
            cin>>k;
            vi.push_back(k);
        }
        Temp t;
        t.func(a,b,vi);
    }
    return 0;
}