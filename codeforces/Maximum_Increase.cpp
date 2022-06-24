#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        ll c=1,k;
        vector<ll>v;
        for(ll i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        ll mx=0;
        for(ll i=1;i<n;i++)
        {
            if(v[i-1]<v[i])
                c++;
            else
            {
                mx=max(mx,c);
                c=1;
            }
        }
        mx=max(mx,c);
        cout<<mx<<endl;
    }
};
int main()
{
    ll n;
    cin>>n;
    Test tt;
    tt.func(n);
    return 0;
}