#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n)
    {
        
        if(n==1)
            cout<<1<<endl;
        else
        {
            ll i=0,j=1,s=0;
            map<ll,ll>m;
            m[0]=0;
            while(i<n)
            {
                s+=j;
                m[j]=m[j-1]+s;
                //cout<<m[j]<<" ";
                i=m[j];
                if(i>n)
                    break;
                j++;

            }
            
                cout<<j-1<<endl;
        }
        
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