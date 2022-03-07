#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Test
{
    public:
    ll a;
    Test(ll c)
    {
        this->a=c;
    }
    
    void func(ll m)
    {
        cout<<max(this->a,m)<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,c=0;
        cin>>a;
        ll arr[a];
        for(ll i=0;i<a;i++)
        {
            cin>>arr[i];
            if(arr[i]==0)
                c++;
        }
        //c=max(c,a-c);
        Test tt(a);
        tt.func(a-c);
        //cout<<c<<endl;
    }
    return 0;
}