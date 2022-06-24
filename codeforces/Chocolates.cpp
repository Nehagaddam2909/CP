/*
Author: Neha Gaddam
Date: 30-3-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func();
};
class Neha: public Test
{
    public:
    void func(ll n)
    {
        vector<ll>v;
        ll k;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        if(n==1)
            cout<<v[0]<<endl;
        else
            cout<<check_input(v,n)<<endl;
    }
    ll check_input(vector<ll>v,ll n)
    {
        ll s=v[n-1];
        ll prev=v[n-1];
        for(ll i=n-2;i>=0;i--)
        {
            if(v[i]<prev)
            {
                s+=v[i];
                prev=v[i];
            }
            else
            {
                if(prev==0)
                    break;
                s+=prev-1;
                prev=prev-1;
            }
            //cout<<prev<<" ";
        }
        //cout<<s<<endl;
        return s;
    }
};
int main()
{
    ll n;
    cin>>n;
    Neha nn;
    nn.func(n);
    return 0;
}