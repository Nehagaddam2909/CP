#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func()
    {
        ll a,s,t,i=3;
        cin>>a;
        multiset<ll>v;
        while(i--)
        {
            cin>>t;
            v.insert(t);
        }
        s=(a-1)*(*v.begin());
        s+=*(++v.begin());
        cout<<s<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        Test tt;
        tt.func();
    }
    return 0;
}