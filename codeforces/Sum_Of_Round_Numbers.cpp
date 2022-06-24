#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        set<ll>v;
        ll m=n;
        ll q=1,k;
        while(m>0)
        {
            k=(m%10)*q;
            if(k!=0)
                v.insert(k);
            q=q*10;
            m=m/10;
        }
        cout<<v.size()<<endl;
        for(auto it=v.begin();it!=v.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;

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