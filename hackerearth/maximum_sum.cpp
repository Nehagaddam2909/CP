#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,s=0,m;
    cin>>n;
     vector<long long int>a;
    for(i=0;i<n;i++)
    {
        cin>>j;
        a.push_back(j);
    }
    s=*max_element(a.begin(),a.end());
    m=s;
    j=1;
    for(int i=0;i<n;i++)
    {
        if(s+a[i]>s && a[i]!=m)
        {
            s=s+a[i];
            j=j+1;
        }
    }
    cout<<s<<" "<<j<<endl;
    return 0;
}