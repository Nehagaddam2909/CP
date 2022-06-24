#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
   // void func(ll n,ll a);
};
class Neha
{
    public:
    void func(ll n, ll a)
    {
        //cout<<"HEllo"<<endl;
        vector<ll>v;
        v.push_back(1);
        ll k=0;
        //cout<<n<<endl;
        for(ll i=1;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        } 
        check(v,n,a);
    }
    void check(vector<ll>v,ll n,ll index)
    {
        ll s=v[1]+1,flag=0;
        while(s<n && s<=index)
        {
            if(s==index)
            {
                flag=1;
                break;
            }
            else
            {
                s+=v[s];
            }
          //  cout<<s<<endl;
        }
        if(s==index)
            flag=1;
       // cout<<index<<" ";
        if(flag==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
};
int main()
{
    ll a,b;
    cin>>a>>b;
    //cout<<a<<" "<<b<<endl;
    Neha nn;
    nn.func(a,b);
    return 0;
}