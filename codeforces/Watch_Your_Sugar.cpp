#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,s;
    multiset<ll>m;
    cin>>t>>s;
    ll count=0;
    for(int i=0;i<t;i++)
    {
        cin>>k;
        m.insert(k);
    }
    auto it=m.begin();
    s-=*it;
    while(s>1 && it!=m.end())
    {
        count++;
        it++;
        s-=*it;
        
    }
    cout<<count<<endl;
    return 0;
}