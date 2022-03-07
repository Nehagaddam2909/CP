#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    while(n>0)
    {
        ll k;
        cin>>k;
        if(k%7==0)
        {
            cout<<k<<"\n";
        }
        else
        {
            ll temp=0;
            for(int i=0;i<9;i++)
            {
                temp=(k/10)+(k%10)
            }
        }
        n--;
    }
    return 0;
}