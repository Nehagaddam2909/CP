/*
Author: Neha Gaddam
Date: 10-4-2022
*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned  long long ll;
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
    void func(ll a,ll b)
    {
        if((a%3==0 && b%3==0) or (a%2==0 && b%2==0) or (a%7==0 and b%7==0) or (a%11==0 && b%11==0) or (a%5==0 && b%5==0))
            cout<<0<<endl;
         else if(a==1 or b==1)
            cout<<-1<<endl;
        else if(a==b)
            cout<<0<<endl;
         else
         {
            
               if(a%2==0 or b%2==0)
                cout<<1<<endl;
               else if(a%3!=0 && b%3!=0)
                cout<<1<<endl;
               else
                cout<<1<<endl;
            

         }
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        Neha nn;
        nn.func(a,b);
    }
    return 0;
}
