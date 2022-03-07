#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void func(ll m)
{
    ll tax=0;
    if(m<=250000)
        tax=0;
    else
    {
        if(m>250000)
        {
            if(m>500000)
                tax+=12500;
            else
                tax+=(m-250000)*0.05;
        }
        if(m>=500001)
        {
            if(m>=750000)
                tax+=25000;
            else
                tax+=(m-500000)*0.10;
        }
        if(m>=750001)
        {
            if(m>=1000000)
                tax+=37500;
            else
                tax+=(m-750000)*0.15;
        }
        if(m>=1000001)
        {
            if(m>= 1250000)
                tax+=50000;
            else
                tax+=(m-1000000)*0.20;
        }
        if(m>= 1250001)
        {
            if(m>=1500000)
                tax+=62500;
            else
                tax+=(m-1250000)*0.25;
        }
        if(m>1500000)
            tax+=(m-1500000)*0.30;
    }


    cout<<m-tax<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll money;
        cin>>money;
        func(money);
    }
    return 0;
}