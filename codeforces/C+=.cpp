#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll a,ll b,ll n)
    {
        ll t,t1;
        if(a<b)
        {
            t=a;
            t1=b;   
        }   
        else
        {
            t=b;
            t1=a;
        }
        ll c=0,temp;
        while(t<=n)
        {
            t+=t1;
            //cout<<t<<" ";
            c++;
            if(t>n)
                break;
            temp=t;
            t=t1;
            t1=temp;
        }
        cout<<c<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        Test tt;
        tt.func(a,b,c);
    }
    return 0;
}