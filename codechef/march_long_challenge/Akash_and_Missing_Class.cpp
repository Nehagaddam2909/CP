#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        ll count=n/7;
        ll d=n%7;
        if(d==6)
            count++;
        cout<<count<<endl;
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