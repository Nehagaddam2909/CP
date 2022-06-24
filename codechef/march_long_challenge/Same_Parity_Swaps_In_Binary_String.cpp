#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Test
{
    public:
    void func(string s,ll n);
};
class Neha: public Test{
    public:
    void func(string s,ll n)
    {
       ll count_of_one=0,count_of_zero=0;
       ll count=0,odd_0=0,even_1=0,odd_1=0,even_0=0;
        if(s[0])
        {
           // even_1++;
            count_of_one++;
        }
        else
        {
            count_of_zero++;
        }

       for(int i=1;i<n;i++)
       {
           if(s[i]=='1' && s[i-1]=='0')
            {
                count++;
                count_of_one++;
            }
            else if(s[i]=='1')
            {
                if(i%2!=0)
                    odd_1++;
                else 
                    even_1++;
                count_of_one++;

                if(s[i-1]=='1')
                {
                    if(i%2!=0)
                        even_1++;
                    else
                        odd_1++;
                   // count_of_one++;
                }    
            }
            
            else if(s[i]=='0')
            {   
                if(i%2!=0)
                    odd_0++;
                else 
                    even_0++;
                count_of_zero++;
                if(s[i-1]=='0')
                {
                    if(i%2!=0)
                        even_0++;
                    else 
                        odd_0++;
                    //count_of_zero++;
                }
                else if(s[i-1]=='1')
                {
                    count_of_one++;
                    continue;
                }
            }
            //cout<<even_1<<" "<<even_0<<endl;
            cout<<odd_1<<" "<<odd_0<<endl;
       }
     //  cout<<min(odd_1,odd_0)<<" ";
     //  cout<<min(even_0,even_1)<<endl;
        count=count+min(odd_1,odd_0)+min(even_0,even_1);
        ll k=check(count_of_one,count_of_zero,n);
        count=min(count,k);
       // cout<<count<<endl;
    }
    ll check(ll c1,ll c0,ll nn)
    {
        
        return min(c1,c0);
        
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s1;
        cin>>s1;
        Neha nn;
        nn.func(s1,n);
    }
    return 0;
}