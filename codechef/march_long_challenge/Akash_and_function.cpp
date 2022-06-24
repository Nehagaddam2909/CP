#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        ll count=0;
        for(ll i=1;i<=n;i++)
        {
            if((2*i)<=n)
                count++;
            else
                break;
       
                
        }
        
        cout<<n-count<<endl;
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