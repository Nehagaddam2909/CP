#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public: 
    ll last(vector<ll> arr, ll low, ll high, ll x, ll n)
    {
        if (high >= low) {
            ll mid = low + (high - low) / 2;
            if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
                return mid;
            else if (x < arr[mid])
                return last(arr, low, (mid - 1), x, n);
            else
                return last(arr, (mid + 1), high, x, n);
        }
        return -1;
    }
    void func(ll n)
    {
        vector<ll>v;
        multiset<ll>m;
        ll k;
        for(ll i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
            m.insert(k);
        }
        ll l=*m.begin();
        ll j=*m.rbegin();
        ll lower=0;
        ll higher=0;
        ll flag=0;
       // cout<<c<<" "<<p;
       for(ll i=0;i<n;i++)
       {
           if(v[i]==l)
            lower=i;
           if(v[i]==j && flag==0)
            {
                higher=i;
                flag=!flag;
            }

       }
       //cout<<lower<<" "<<higher<<endl;
        if(lower>higher)
            cout<<(higher-0)+((--n)-lower)<<endl;
        else    
            cout<<(higher-0)+((--n)-lower)-1<<endl;
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