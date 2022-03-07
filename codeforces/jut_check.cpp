#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    if(n%496==0)
        cout<<496;
    else if(n%120==0)
        cout<<120;
    else if(n%6==0)
        cout<<6<<endl;
    else
        cout<<1<<endl;
    return 0;
}