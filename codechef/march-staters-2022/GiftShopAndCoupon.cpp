#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n,ll k,multiset<ll,greater<ll>>m)
    {
        ll mm=*m.begin();       
        mm=mm/2;
        m.erase(m.begin());
        m.insert(mm);
        ll sk=0,c=0;
        for(auto it=m.rbegin();it!=m.rend();it++)
        {
            if((sk+*it)<=k)
            {
                sk+=*it;
                c++;
            }
            else
            {
                sk+=(*it/2);
                if(sk<=k)
                    c++;
                break;
            }
        }
        cout<<c<<endl;

    }
    
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,z,s=0;
        multiset<ll,greater<ll>>m;
        cin>>n>>k;
        for(ll i=0;i<n;i++)
        {
            cin>>z;
            m.insert(z);
           
        }
        Test tt;
        tt.func(n,k,m);
    }
    return 0;
}
