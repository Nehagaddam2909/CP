#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string na;
        ll a,ot;
        multimap<ll,pair<string,ll>,greater<ll>> mp;
        ll n;
        cin >> n;
        while(n--)
        {
            cin >> na >> a >> ot;
            mp.insert({a,{na,ot}});
        }
        for(auto i : mp)
        {
            cout << i.second.first << " " << i.first << " " << i.second.second << endl;
        }
    }
    return 0;
}