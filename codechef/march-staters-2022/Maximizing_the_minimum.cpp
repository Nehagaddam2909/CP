/*
Author: Neha Gaddam
Date: 30-3-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n,ll a);
};
class Neha: public Test
{
    public:
    void func(ll n,ll a)
    {
        vector<ll>v;
        multiset<ll>m;
        map<ll,ll>mp;
        ll k;
        for(ll i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
            m.insert(k);
            mp.insert(pair<ll,ll>(k,i));
        }

        if(a>=(n-1))
            cout<<*m.rbegin()<<endl;
        else
        {
            //cout<<<<endl;
            ll c=0;
            for(auto it=m.begin();it!=m.end();it++)
            {
                if(c==a)
                    cout<<*it<<endl;
                c++;
            }
        }
        /*
        ll mn=*m.begin();
        ll index=mp[mn];
        ll least_index=index-a;
        if(least_index<0)
            least_index=0;
        ll most_index=index+a;
        if(most_index>=n)
            most_index=n-1;
        

        ll mx=v[index];
        for(int i=least_index;i<index;i++)
            mx=max(mx,v[i]);
        for(int j=most_index;j>index;j--)
            mx=max(mx,v[j]);

        cout<<mx<<endl;
        */
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n>>a;
        Neha nn;
        nn.func(n,a);
    }
    return 0;
}