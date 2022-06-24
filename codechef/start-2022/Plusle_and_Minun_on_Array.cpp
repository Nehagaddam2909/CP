#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
class Test
{
    public:
    void func(ll search,multiset<ll>m,vector<ll>v,ll s,ll index)
    {
        auto lower =upper_bound(m.begin(), m.end(), search);
        if(lower!=m.end())
        {
            ll k=*lower;
            s-=v[index]-v[index+1];
            s+=k-v[index+1];
            ll final_s;
            for(int i=1;i<v.size();i++)
            {
                ll s1=s;
                if(v[i-1]==k)
                {
                    s1-=(v[i-1]-v[i]);
                    s1+=(search-v[i]);
                }
                final_s=max(final_s,s1);
            }
            cout<<final_s<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
       
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll le,k;
        cin>>le;
        ll mn=INT_MAX,mm,flag=0;
        multiset<ll>m;
        vector<ll>v;
        ll z=1,s=0,index;
        for(ll i=0;i<le;i++)
        {
            cin>>k;
            k=abs(k);
            v.push_back(k);
            m.insert(k);
            if(z==i)
            {
                mm=v[z-1]-v[z];
                
                if(mm<mn)
                {
                    flag=v[z-1];
                    index=z-1;
                    mn=mm;
                }
                s=s+mm;
                
                z=z+2;
            }
        }
        Test tt;
        tt.func(flag,m,v,s,index);
    }
    return 0;
}