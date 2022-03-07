#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,q,z;
    vector<ll>v;
    vector<ll>v1;
    v.push_back(-1);
    v1.push_back(900);
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>q;
        v.push_back(q);
    }
    z=n*m;
    q=5;
    for(int i=1;i<=z;i++)
    {
        if(i<=m)
        {
            v1[i]=v[i];
            //cout<<i<<" ";
        }
        else
        {
            q=q*7;
            v1[i]=q;
        }
    }   
    q=0;
    while(q<z)
    {
        for(int j=0;j<n;j++,q++)
            cout<<v1[q]<<" ";
        q++;
        cout<<endl;

    }

    return 0;
}