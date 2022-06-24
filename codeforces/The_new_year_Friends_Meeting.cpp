#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll x1,ll x2,ll x3)
    {
        ll mid1,mid2,mid3;
        mid1=x1,mid2=x2,mid3=x3;

        ll m1=(abs(x1-mid1)+abs(x2-mid1)+abs(x3-mid1));
        ll m2=(abs(x1-mid2)+abs(x2-mid2)+abs(x3-mid2));
        ll m3=(abs(x1-mid3)+abs(x2-mid3)+abs(x3-mid3));
        ll m=min(m1,m2);
        m=min(m,m3);
        cout<<m<<endl;
    }
};
int main()
{
    ll x1,x2,x3;
    cin>>x1>>x2>>x3;
    Test tt;
    tt.func(x1,x2,x3);
    return 0;
}