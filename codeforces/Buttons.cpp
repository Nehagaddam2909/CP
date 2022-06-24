#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Test
{
    public:
    void func(ll n);
};
class Neha:Test
{
    public:
    void func(ll n)
    {
        ll s=n;
        ll r=--n;
        ll i=1;
        while(r>0)
        {
            s+=n+(r-1)*i;
           // cout<<n<<" "<<r<<" "<<s<<endl;
            r--;
            n--;
            i++;
        }
        cout<<s<<endl;
    }
};
int main()
{
    ll n;
    cin>>n;
    Neha nn;
    nn.func(n);
    return 0;
}