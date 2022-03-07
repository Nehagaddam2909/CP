#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,s,c;
    unordered_set<long long int>v;
    int t,m=0;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        s=0;
        c=0;
        m=0;
        for(i=1;i<=n;i++)
        {
            //cout<<i<<endl;
            if(m!=-1)
            {
                c=i*i*i;
            }
            s=i*i;
            //cout<<c<<s<<endl;
            if(s<=n)
            {
                v.insert(s);
            }
            else
            {
                break;
            }
            if(c<=n && s!=c && m!=-1)
            {
                //cout<<c<<endl;
                v.insert(c);
            }
            else if(c>n)
            {
                m=-1;
            }
            
        }
        
        cout<<v.size()<<endl;
        v.clear();
        t=t-1;
    }
    return 0;
}