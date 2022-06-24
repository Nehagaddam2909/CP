#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll a,ll b)
    {
        ll n=a,c=0;
        while(n>1)
        {
            n=n-2;
            c+=2*b;
            //cout<<c<<" ";
            n=n-1;
        }
        if(n==1)
            c+=b;
       // cout<<a%2<<" ";
        cout<<c<<endl;
    }
    
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        Test tt;
        tt.func(a,b);
    }
    return 0;
}
