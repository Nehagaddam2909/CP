#include<bits/stdc++.h>
using namespace std;
int flag=0;
int check(long long int c)
{
    long long int i=1,s1=0;
    for(i=1;i<=c;i++)
    {
        s1=s1+i;
    }
    return s1;
}

int binary_search(long long int a, long long int b)
{
    long long int mid,low,high,temp,s=0,k=-1,count=0;
    low=1;
    high=a;

    while(high>=low)
    {
        mid=(low+high)/2;
        if(check(mid)==b)
        {
            s=check(mid);
            k=mid;
            return k;
        }
        else if(check(mid)<b)
        {
            s=check(mid);
            low=mid+1; 
        }
        
        else
        {
            s=check(mid);
            k=mid;
            high=mid-1;
            
        }
    }
    if(s<b)
    {
        flag=1;
        return b-s;
    }
   
    
    return k;
}

int reverse_binary_search(long long int a,long long int b)
{
    long long int mid,low,high,temp,k=-1,count=0;
    low=a-1;
    high=check((a-1));
    //cout<<high<<endl;
    while(high>=low)
    {
        mid=(low+high)/2;

        //cout<<mid<<endl;
        count++;
        if(mid==b)
        {
            k=mid;
            return k;
        }
        else if(mid<b)
        {
            low=mid+1; 
        }
        
        else
        {
            //s=check(mid);
            k=mid;
            //cout<<k<<endl;
            high=mid-1;
            
        }
        
    }

    //cout<<k<<endl;
    return count;
}
int main()
{
    long long int i=0,j,a,b,n;
    flag=0;
    cin>>n;
    while(n>0)
    {
        cin>>a;
        cin>>b;
        i=binary_search(a,b);
        if(flag==1)
        {
            //cout<<i;
            i=reverse_binary_search(a,i);
            //cout<<i;
            cout<<(a+i)<<endl;
            flag=0;
        }
        else if(i==-1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    
        n--;
    }
    return 0;
}