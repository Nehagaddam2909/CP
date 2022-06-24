#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        vector<ll>v;
        map<ll,ll>m;
        ll k;
        for(ll i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
            m[k]=floor(log2(k))+1;
        }
        ll count=0;
        for(ll i=1;i<n;i++)
        {
            if(m[v[i]]==m[v[i-1]])
                count++;
            else if(count>=2)
            {
                c=count*(count-1)/2;
            }
        }
        cout<<count<<endl;
        





        /*multiset<ll>v;
        ll count=0,k;
        for(ll i=0;i<n;i++)
        {
            cin>>k;
            v.insert(k);
        }
        vector<ll>m;
        auto it1=v.begin();
        for(auto it=++v.begin();it!=v.end() ;it++)
        {
            if(*it1==*it)
                count++;
            else
            {
                 if(floor(log2(*it1))==floor(log2(*it)))
                {
                    m.push_back(*it1);
                    m.push_back(*it);
                }
            }
             
            it1++;
        }
        

        cout<<count<<endl;*/
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        Test tt;
        tt.func(n);
    }
    return 0;
}