#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int count[26]{0};
        string a,b;
        cin>>a>>b;
        for(int i=0;i<a.length();i++)
            count[a[i]-97]++;
        for(int i=0;i<b.length();i++)
            count[b[i]-97]++;
        int flag=1;
        int k;
        cin>>k;

        for(int i=0;i<k;i++)
        {
            string c;
            cin>>c;
            for(int j=0;j<c.length();j++)
            {
                if(count[c[j]-97]<=0)
                {
                    flag=0;
                    break;
                }
                else
                {
                    count[c[j]-97]--;
                }
            }
        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}