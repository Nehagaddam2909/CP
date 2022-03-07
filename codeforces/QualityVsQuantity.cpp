#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class QualityVsQuantity
{
    public:
    void func(ll n,multiset<ll,greater<ll>>v)
    {
       // ll c=((n+1)/2)-1;
        //cout<<c<<endl;
        ll s=0,s1=0,flag=0;
        ll i=0,j=n-1;
        auto it1=v.begin();
        auto it=v.rbegin();
        s=*it;
        //cout<<s<<" ";
        it++;
        s+=*it;
        s1=*it1;
        //cout<<s<<" "<<s1;
        while(i<j && it!=v.rend() && it1!=v.end())
        {
            //cout<<s<<s1<<" ";
            if(s1>s)
            {
                flag=1;
                cout<<"Yes"<<endl;
                break;
            }
            it++;
            it1++;
            s+=*it;
            s1+=*it1;
            i++;
            j++;
        }
       // cout<<s<<" "<<s1;
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,mn;
        multiset<ll,greater<ll>>s;
        cin>>a;
        for(ll i=0;i<a;i++)
        {
            cin>>mn;
            s.insert(mn);
        }
        QualityVsQuantity q;
        q.func(a,s);
    }
    return 0;
}