#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        if(intput(n))
            cout<<"Hard"<<endl;
        else
            cout<<"Easy"<<endl;
    }
    ll intput(ll n)
    {
        ll flag=0,k;
        for(ll i=0;i<n;i++)
        {

            cin>>k;
            if(k==1)
                flag=1;

        }

        return flag;
    }
};
int main()
{
    ll n;
    cin>>n;
    Test tt;
    tt.func(n);
    return 0;
}