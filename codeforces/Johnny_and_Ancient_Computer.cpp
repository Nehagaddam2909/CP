#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
void func(ll a,ll b)
{
    ll n=0;
    ll flag=0;
    ll c=0;
    if(a==b)
    {
        c=0;
    }
    else
    {

        if(a%b==0)
    {
        n=a/b;
    }
    else
    {
        c=-1;
        flag=1;
    }
    while(n!=8 and n!=4 and n!=2 and flag!=1)
    {
        if(n%8==0)
        {
            n=n/8;
        }
        else if(n%4==0)
        {
            n=n/4;
        }
        else if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            
            flag=1;
            break;
        }
        c++;
    }
    }
   
    

    
    if(flag==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(n==8 or n==4 or n==2)
        c++;
    cout<<c<<endl;
    }
    
    
    
}
int main()
{
    ll test_case;
    cin>>test_case;
    while(test_case>0)
    {
        ll a,b;
        cin>>a>>b;
        //cout<<a<<b<<endl;
        
        if(a>=b)
        {
            func(a,b);
        }
        else
        {
            func(b,a);
        }
        test_case--;
    }
    return 0;
}