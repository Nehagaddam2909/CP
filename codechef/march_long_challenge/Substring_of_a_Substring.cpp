#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(string s)
    {
        ll len=0;
        multiset<ll,greater<ll>>m;
        for(ll i=1;i<s.length()-1;i++)
        {
            if(s[i]!=s[0] && s[i]!=s[s.length()-1])
                len++;
            else
            {
                m.insert(len);
                len=0;
            }
        }
        m.insert(len);
        ll le=*m.begin();
        if(le==0)
            cout<<-1<<endl;
        else
            cout<<le<<endl;

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
