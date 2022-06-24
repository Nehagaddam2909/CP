/*
Author: Neha Gaddam
Date: 17-4-2022*/
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
    void func(ll n,string s)
    {
        ll a=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
                a++;
            else
                d++;
        }
        if(a>d)
            cout<<"Anton"<<endl;
        else if(a<d)
            cout<<"Danik"<<endl;
        else
            cout<<"Friendship"<<endl;
    }
};
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    Neha nn;
    nn.func(n,s);
    return 0;
}