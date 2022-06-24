#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n,string s)
    {
        cout<<count(n,s);
    }
    ll count(ll n,string s)
    {
        ll one_in_string=0,zero_in_string=0;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='1')
                one_in_string++;
            else 
                zero_in_string++;
        }
        ll total;
        if(one_in_string==zero_in_string)
        {
            total=one_in_string+zero_in_string;
        }
        else if(one_in_string>zero_in_string)
        {
            total=2*zero_in_string+1;
        }
        else
        {
            total=2*one_in_string+1;
        }
        return total;
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
        string s;
        cin>>s;
        Test tt;
        tt.func(n,s);
    }
    return 0;
}