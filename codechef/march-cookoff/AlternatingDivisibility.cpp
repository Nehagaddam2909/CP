#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        vector<ll>v;
        ll b=(a+1)/2;
        for(ll i=2;i<=b+1;i++)
        {
            v.push_back(i);
            v.push_back(i*2);
        }
        for(ll i=0;i<a;i++)
            cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}