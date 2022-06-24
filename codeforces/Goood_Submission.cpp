#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Neha
{
    public:
    void func(ll n)
    {
        multiset<ll>v;
        ll k;
        map<ll,ll>m;
        for(ll i=0;i<n;i++)
        {
            cin>>k;
            v.insert(k);
            m[k]=i;
        }
        if(n==1)
        {
            cout<<1<<" "<<1<<endl;
        }
        auto i=v.begin();
        auto j=v.begin();
        while(i!=v.end() && j!=--v.end())
        {
            ll sub=abs(*i-*j);
            if(sub==(*i-sub)+(*j-sub))
            {
                if(m.count(sub)>1)
                {
                    if(m[*i]>m[*j])
                        cout<<++m[*j]<<" "<<++m[*i]<<endl;
                    else
                        cout<<++m[*i]<<" "<<++m[*j]<<endl;
                    break;    
                }
            }
            ll sub2=abs(*i-*++j);
        
            if(sub2==(abs(*i-sub2)+abs(*j-sub2)))
            {
                if(m.count(sub2))
                {
                    if(m[*i]>m[*j])
                        cout<<++m[*j]<<" "<<++m[*i]<<endl;
                    else
                        cout<<++m[*i]<<" "<<++m[*j]<<endl;
                    break;
                }
            }
            
        }
        
    }     //Check(v,n);
    
    
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll b;
        cin>>b;
        Neha n;
        n.func(b);
    }
    return 0;
}