#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    vector<vector<ll>>v;
    vector<ll>k;
    ll p,q,r;
    cin>>n;
    for(int z=0;z<n;z++)
    {
        cin>>p>>q>>r;
        k.push_back(p);
        k.push_back(q);
        k.push_back(r);
        v.push_back(k);
        k.clear();
    }
    ll m=0,c=0;
    for(int z=0;z<n;z++)
    {
        m=0;
        for(int mm=0;mm<3;mm++)
        {
            if(v[z][mm]==1)
                m++;
        }
        if(m>=2)
            c++;
    }
    cout<<c<<endl;
    return 0;
}