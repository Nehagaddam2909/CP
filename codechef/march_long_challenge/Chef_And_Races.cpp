#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll neha_x,ll neha_y, ll neha_a,ll neha_b);
};
class Neha:public Test
{
    public:
    void func(ll first_1,ll second_1,ll arr_first,ll arr_second)
    {
        ll c=2;
        if(first_1==arr_first || first_1==arr_second)
            c--;
        if(second_1==arr_first || second_1==arr_second)
            c--;
        cout<<c<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        Neha n;
        n.func(x,y,a,b);
    }
    return 0;
}