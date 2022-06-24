#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n,ll a, ll b)
    {
        ll q,bob=0,alice=0,both=0;
        vector<ll>m;
        for(ll i=0;i<n;i++)
        {
            cin>>q;
            m.push_back(q);
            if(q%a==0 && q%b==0)
                both++;
            else if(q%a==0)
                bob++;
            else if(q%b==0)
                alice++;
        }
       // cout<<both<<" "<<bob<<" "<<alice<<endl;
        if(both!=0)
            bob++;
        if(bob>alice)
            cout<<"BOB"<<endl;
        else
            cout<<"ALICE"<<endl;
            
        }
        
           


                

    
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        Test tt;
        tt.func(n,a,b);
    }
    return 0;
}