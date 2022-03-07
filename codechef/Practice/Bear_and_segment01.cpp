#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,k,j;
    string s;
    cin>>n;
    while(n>0)
    {
        j=0;
        cin>>s;
        k=s.find('1');
        if(k==string::npos)
        {
            j=1;
        }
        else
        {
        for(i=k;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                if(s.find('1',i+1)!=string::npos)
                    j=1;
                break;
            }
        }
        }
        if(j==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        n=n-1;
    }
    return 0;
}