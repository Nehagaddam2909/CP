#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll a,ll b)
    {
        if((a%2==0 && b%2==0) || (a%2!=0&& b%2!=0))
            cout<<"Janmansh"<<endl;
        else
            cout<<"Jay"<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll p,q;
        cin>>p>>q;
        Test tt;
        tt.func(p,q); 
    }
    return 0;
}