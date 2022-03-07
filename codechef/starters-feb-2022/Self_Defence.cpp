#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func()
    {
        vector<ll>v;
        ll t,a,c=0;
        cin>>t;
        for(ll i=0;i<t;i++)
        {
            cin>>a;
            if(a<=60 && a>=10)
                c++;
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
        
        Test t;
        t.func();
    }
    return 0;
}