#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        map<ll,ll>m;
        ll c=0,q;
        for(ll i=0;i<n;i++)
        {
            cin>>q;
            m[q]++;
            if(m[q]>1 && c<m[q])
                c=m[q];
        }
        
            cout<<min((n-2),(n-c))<<endl;
      
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
}