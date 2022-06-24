#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Test
{
    public:
    void func(ll a,ll b,ll c);
};
class Neha:public Test
{
    public:
    void func(ll a,ll b,ll c)
    {
        ll s=b*a;
        if(a<c && s<c)
            cout<<b<<" "<<-1<<endl;
        else if(a==c && s>c)
            cout<<-1<<" "<<b<<endl;
        else if(s>c)
            cout<<-1<<" "<<b<<endl;
        else if()
            cout<<b<<" "<<-1<<endl;


    }
};
int main()
{
    int a,b,c;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        Neha nn;
        nn.func(a,b,c);
    }
    return 0;
}