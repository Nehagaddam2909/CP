#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}
int main()
{
    int n,i,j,k,l,m,x,y,s=0;
    vector<int>v;
    cin>>n;
    while(n>0)
    {
        cin>>m;
        j=0;
        for(int i=0;i<m;i++)
        {
            cin>>x;
            v.push_back(x);
            j=j+x;
        }
        if(isPowerOfTwo(j))
        {
            cout<<0<<endl;
            continue;
        }
        int c=0;
        int next = pow(2,ceil(log(j)/log(2)));
        int prev=ceil(log(j)/log(2));
        y=j-next;
        for(i=1;i<=prev;i++)
        {
            k=pow(2,i);
            for(l=0;l<m;l++)
            {
                v[l]=v[l]*k;
                s=accumulate(v.begin(),v.end(),0);
                c=c+1;
                if(s==next)
                {
                    cout<<c<<" "<<k<<endl;
                    break;
                }
            }
        }
        v.clear();
 n--;
    }
    
    
    return 0;
}