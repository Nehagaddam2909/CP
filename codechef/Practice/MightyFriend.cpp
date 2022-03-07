#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    while(n>0)
    {
        multiset<ll,greater<ll>>mottu;
        multiset<ll>tomu;
        ll a,t;
        int k;
        cin>>a>>k;
        for(ll i=0;i<a;i++)
        {
            cin>>t;
            if(i%2==0)
                mottu.insert(t);
            else
                tomu.insert(t);
        }
        ll s_mottu=accumulate(mottu.begin(),mottu.end(),0);
        ll s_tommu=accumulate(tomu.begin(),tomu.end(),0);

        if(s_mottu<s_tommu)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            ll maxii,mini;
            while(k>0)
            {
                maxii=*mottu.begin()++;
              
                mini=*tomu.begin()++;
                s_mottu=s_mottu-maxii+mini;
                s_tommu=s_tommu-mini+maxii;
               // mottu.erase(mottu.find(maxii));
                //tomu.erase(tomu.find(mini));
                k--;
            }
            if(s_mottu<s_tommu)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        }

        n--;
    }
    return 0;
}