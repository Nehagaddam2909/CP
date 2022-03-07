#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        if(n%4==0)
            cout<<"Good"<<endl;
        else
            cout<<"Not Good"<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        Test t;
        t.func(n);
    }
    return 0;
}