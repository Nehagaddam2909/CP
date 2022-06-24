#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Neha
{
    public:
    void func(ll a,ll b)
    {
        ll c=0;
        while(a<=b)
        {
            a=a*3;
            b=b*2;
            c++;
        }
        cout<<c<<endl;
    }
};
int main()
{
    ll t,q;
    cin>>t>>q;
    Neha n;
    n.func(t,q);
    return 0;
}