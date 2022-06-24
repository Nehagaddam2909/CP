/*
Author: Neha Gaddam
Date: 30-3-2022*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n,string s);
};
class Neha: public Test
{
    public:
    void func(ll n,string s)
    {
        string s1=s;
        ll flag=0,index=0,k=0,q=-1;
        vector<char>v(s.begin(),s.end());
        vector<ll>vv;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                //v[i]='0';
                if(flag==0)
                {
                    index=i+1;
                    flag=1;
                }
                k++;
            }
            else
            {
                if(flag==1)
                {
                    vv.push_back(index);
                    vv.push_back(k);
                    k=0;
                    flag=0;
                    q=1;
                }
            }
        }
        if(vv.size()==0)
            cout<<0<<endl;
        else{
            cout<<vv.size()/2<<endl;
            for(ll j=0;j<vv.size();j+=2)
            {
                cout<<vv[j]<<" "<<vv[j+1]<<endl;
            }
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
        string s;
        cin>>n>>s;
        Neha nn;
        nn.func(n,s);
    }
    return 0;
}