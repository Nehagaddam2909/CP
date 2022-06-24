/*
Author: Neha Gaddam
Date: 10-4-2022
*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
class Test
{
    public:
    void func()
    {

    }
    
};
class Neha: Test
{
    public:
    void func(ll n)
    {
        if(n%4==0)
        {
            cout<<(n+3)<<endl;
        }
        else if(n%4==1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
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
        Neha nn;
        nn.func(n);
    }
    return 0;
}
