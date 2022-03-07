#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void func(vector<ll>v,ll n)
{
    ll m=v.size();
    ll s=0,k;
    for(int i=0;i<m;i++)
    {
        s=s+v[i];
        if(s>=n)
        {
            k=s/n;
            s=s%n;
            cout<<k<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
            
    }
}
int main()
{
    vector<ll>v;
    ll n,m,t;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    func(v,m);    
    return 0;
}