#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll a,ll b,ll c,ll d)
    {
        float car1=c/a;
        float car2=d/b;
        if(car1>car2)
            cout<<1<<endl;
        else if(car1<car2)
            cout<<-1<<endl;
        else
            cout<<0<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        Test t;
        t.func(x1,x2,y1,y2);
    }
    return 0;
}