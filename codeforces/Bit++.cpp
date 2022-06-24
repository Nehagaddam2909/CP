#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Temp
{
    public:
    ll func(string s,ll sum)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='X')
            {
                continue;
            }
            else if(s[i]=='+')
            {
                sum++;
                i++;
                continue;
            }
            else if(s[i]=='-')
            {
                sum--;
                i++;
                continue;
            }
           // cout<<sum<<" ";
        }
        //cout<<sum<<endl;
        return sum;
    }
};
int main()
{
    ll t;
    cin>>t;
    ll k=0;
    while(t--)
    {
        string s;
        cin>>s;
        Temp tt;
        k=tt.func(s,k);
    }
    cout<<k<<endl;
    return 0;
}