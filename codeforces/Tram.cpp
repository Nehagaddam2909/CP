#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        ll s=0,a,b,mx=0;
        while(n--)
        {
            cin>>a>>b; 
            s-=a;
            s+=b; 
            mx=max(s,mx);
        }
        cout<<mx<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    Test tt;
    tt.func(t);
    return 0;
}