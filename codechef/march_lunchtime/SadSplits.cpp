#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        ll c=0;
        ll z=0;
        ll a=n;
        ll c_o=0;
        ll flag=0;
        ll q;
        while(a>0)
        {
            q=a%10;
            if(q==0)
                z++;
            else if(q%2==0)
                c++;
            else
                c_o++;
            a=a/10;

           // cout<<c<<" "<<c_o<<endl;
            if(c>=2 && c_o>=2)
            {
                flag=1;
                break;
            }
            else if(c>=1 && z>0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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
        Test tt;
        tt.func(n);
    }
    return 0;
}
