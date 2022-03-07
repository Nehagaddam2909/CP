#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll D,d,P,Q,s=0;
        cin>>D>>d>>P>>Q;
        ll k=D/d;
        ll l=D%d;
        cout<<(d*((k*P)+(((k-1)*k*Q))/2))+((P+(k*Q))*l)<<endl;
    }
    return 0;
}