#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        if(n%10!=0 && n%5!=0)
            cout<<-1<<endl;
        else
        {
            ll s=n/10;
            s+=(n%10)/5;
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
        ll n;
        cin>>n;
        Test tt;
        tt.func(n);
    }
    return 0;
}
