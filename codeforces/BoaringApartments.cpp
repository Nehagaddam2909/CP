#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(string s)
    {
        ll k=0;
        if(s.length()==4)
        {
            k=((int)s[0])-48;
            k*=10;
        }
        else if(s.length()<4 && s[0]=='1')
        {
            ll c=s.length();
            while(c>0)
            {
                k+=c;
                c--;
            }
        }
        else if(s.length()<4)
        {
            k=((int)s[0])-48;
            k--;
            //cout<<k<<endl;
            k*=10;
            ll c=s.length();
            while(c>0)
            {
                k+=c;
                c--;
            }
        }
        cout<<k<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Test tt;
        tt.func(s);
    }
    return 0;
}