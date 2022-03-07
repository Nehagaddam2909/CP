#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    ll count_1_0(string s,ll a)
    {
        ll c_0=0;
        ll temp=s[0];
        for(ll i=1;i<a;i++)
        {
            if(s[i]!=temp)
            {
                temp=s[i];
                c_0++;
            }
        
        }
        return c_0+1;

    }

};
int main()
{
    ll n;
    cin>>n;
    while(n>0)
    {
        
        ll a,b;
        string s1;
        cin>>a>>s1;
        Test t;
        cout<<t.count_1_0(s1,a)<<endl;
        
        
        n--;
    }
    return 0;
}