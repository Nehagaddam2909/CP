#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    vector<string>s;
    while(t--)
    {
        string s1;
        ll ph;
        
        vector<ll>v;
        cin>>s1;
        cin>>ph;
        
        v.push_back(ph);
        int i=0;
        ll sum=0;
        while(i<9)
        {
            sum+=ph%10;
            ph=ph/10;
            i++;
        }
        if(sum%2==0)
            s.push_back(s1);
    }
    for(int j=0;j<s.size();j++)
        cout<<s[j]<<endl;
}