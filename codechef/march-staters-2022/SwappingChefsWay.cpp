#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(int n,string s)
    {
        string s1=s;
        sort(s1.begin(), s1.end());
     //   int n=s.length();
        int flag=0;
        for(int i=0;i<n;i++)
        {
           // cout<<s[i]<<" "<<s1[n-i]<<endl;
            if(s[i]!=s1[i] && s[n-1-i]!=s1[i])
            {
                flag=1;
                break;
            }
            else if(s1[i]==s[n-1-i])
            {
                
                char t=s[n-1-i];
                s[n-1-i]=s[i];
               
                s[i]=t;
               // cout<<s<<endl;
                
            }
            
        }
       // cout<<s<<endl;
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"Yes"<<endl;
        //cout<<s1<<endl;

    }
    
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        Test tt;
        tt.func(n,s);
    }
    return 0;
}
