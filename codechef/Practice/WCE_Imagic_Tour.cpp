#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void func(ll a,ll b)
{
    if(a%b==0)
        cout<<a/b<<endl;
    else
        cout<<(a/b)+1<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        func(a,b);
    }
    return 0;
}