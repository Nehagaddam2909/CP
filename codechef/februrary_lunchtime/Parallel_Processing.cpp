#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        vector<ll>m;
        ll n,t;
        cin>>n;
        ll s=0;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            m.push_back(t);
            s+=t;
        }
       //ll s=accumulate(m.begin(),m.end(),0);
       ll s1=0;
       ll k=0;
       ll original=0;
       ll ans=s;
       for(auto it=m.begin();it!=m.end();it++)
       {
           
           s1+=*it;
           k=s-s1;
           original=max(k,s1);
            ans=min(original,ans);

       }
       cout<<ans<<endl;

    }
    return 0;
}