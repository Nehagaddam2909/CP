#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
class Test
{
    public:
    void func(ll t)
    {
        if(t%2==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
};
int main()
{
    ll n,t;
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