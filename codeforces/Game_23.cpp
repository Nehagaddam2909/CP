/*
########################
    Author - Neha
  Modified- 29/3/2022 
########################
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Test
{
    public:
    void func(ll a,ll b);
};
class Neha: public Test
{
    public:
    void func(ll a,ll b)
    {
        //if(b%a==0)
        int flag=0;
        if(!check_input(a,b))
            cout<<-1<<endl; 
        else if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            
            ll c=0,temp=b,temp2=a;
            ll d=b/a;
            while(d%2==0)
            {
                d/=2;
                c++;
            }
            while(d%3==0)
            {
                d/=3;
                c++;
            }

            if(d!=1)
                cout<<-1<<endl;
            else
                cout<<c<<endl;
        } 
    }
    bool check_input(ll a,ll b)
    {
        if(b%a==0)
            return true;
        return false;
    }
};
int main()
{
    ll a,n;
    cin>>a>>n;
    Neha nn;
    nn.func(a,n);
    return 0;
}