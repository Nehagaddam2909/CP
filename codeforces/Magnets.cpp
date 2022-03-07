#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    string s[n],s1,s2;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(i>0)
        {
            s1=s[i-1];
            s2=s[i];
            if(s1[1]==s2[0])
                {
                    c++;
                    //cout<<c<<" ";
                    //cout<<s2[1]<<s1[1]<<" ";
                }
        }

        
    }
    
    cout<<c<<endl;

    return 0;
}