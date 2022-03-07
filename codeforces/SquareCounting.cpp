#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
class Square_Counting
{
    public:
    void func(ll a,ll b)
    {
        ll c=0;
        a=a*a;
        c=b/a;
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
        Square_Counting s;
        s.func(a,b);
    }
    return 0;
}