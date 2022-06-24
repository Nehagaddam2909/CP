#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(string s)
    {
        ll cnt=count(s.begin(),s.end(),'1');
        ll flag=0,c=0;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='1' && flag==0)
            {
                flag=1;
                cnt--;
            }
            else if(s[i]=='1')
                cnt--;
            else if(s[i]=='0' && flag==1 && cnt>0)
                c++;
            
        }
        cout<<c<<endl;

        /*ll flag=0,c=0,temp=0,cnt=0,check=0;
        
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='1' && flag==0)
                flag=1;
            else if(cnt==1 && s[i]=='1')
                check++;
            else if(s[i]=='0' && flag==1)
            {
                temp=c;
                c++;
                if
                cnt=1;
            } 
                 
        }
        if(cnt==1 && check==0)
            cout<<temp<<endl;
        else
            cout<<c<<endl;*/
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