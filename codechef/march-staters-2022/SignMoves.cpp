#include<bits/stdc++.h>
/*Author- Neha Gaddam*/
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        cout<<calculate(n)<<endl;
    }
    ll calculate(ll n)
    {
        if(n%2==0)
        {
            return n/2;
        }
        else
        {
            return -(ceil(n/2.0));
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