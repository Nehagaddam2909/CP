/* Author- Neha Gaddam */
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
class Test
{
    public:
    void func(ll n)
    {
        int r;
        int d;
        ll m=n;
        string s;
        while(m>0)
        {
            r=m%10;
            d=(9-r);
            if(d>0 && d<r)
            {
                s+=to_string(d);
            }
            else if(d==0 && (m/10)>0)
            {
                s+=to_string(d);
            }
            else
            {
                s+=to_string(r);
            }

        m=m/10;
            
        }
        reverse(s.begin(), s.end());

        cout<<s<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    Test tt;
    tt.func(t);
    return 0;
}