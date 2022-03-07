#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    
    ll n;
    cin>>n;
    while(n--)
    {
        multiset<ll,greater<ll>>m;
        ll k,t;
        cin>>k;
        for(ll i=0;i<k;i++)
        {
            cin>>t;
            m.insert(t);
        }
        ll z=(k+1)/2;
        //cout<<z<<endl;
        ll s=0;
        for(auto it =m.begin();it!=m.end() && z>0;it++,z--)
        {
            s+=*it;
            it++;
        }
        cout<<s<<endl;

    }
    return 0;
}