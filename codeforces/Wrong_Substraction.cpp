#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll a,ll b)
    {
        while(b>0)
        {
            ll r=a%10;
            if(r>0)
                a-=1;
            else    
                a=a/10;
            b--;
        }
        cout<<a<<endl;
    }
};
int main()
{
    ll t,n;
    cin>>t>>n;
    Test tt;
    tt.func(t,n);
    return 0;
}