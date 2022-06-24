#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Test
{
    public:
    void func();
};
class Neha: public Test
{
    public:
    void func()
    {
        vector<ll>m;
        ll k,n=4;
        for(ll i=0;i<n;i++)
        {
            cin>>k;
            m.push_back(k);
        }
      
       test_the_input(m,n);     
    }
    void test_the_input(vector<ll>m,ll n)
    {
        
            check(m,n);
              
    }
    bool check_input(ll A,ll B,ll C,ll D)
    {
        
        //sort(m.begin(),m.end());
    
        ll x,y;
        x=(A+B)/2;
        y=(B-x);
        if(y==0)
            return false;
        ll d=(x/y);
        //cout<<x<<" "<<y<<endl;
        if((x*y)==C && d==D)
        {
            cout<<x<<" "<<y<<endl;
            return true;
        }
        else
            return false;
        
            
    }
    void check(vector<ll>m,ll n)
    {
        
        //sort(m.begin(),m.end());
    
        ll x,y,flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    continue;
                for(int k=0;k<n;k++)
                {
                    if(k==j || k==i)
                        continue;   
                    
                    for(int q=0;q<n;q++)
                    {
                        if(q!=i && q!=j && q!=k)
                        {
                            if(check_input(m[i],m[j],m[k],m[q]))
                            {
                                flag=1;
                                break;
                            }
                        }
                    }
                    if(flag==1)
                        break;
                }
                if(flag==1)
                break;
            }
            if(flag==1)
                break;
        }
          if(flag==0)
            cout<<-1<<" "<<-1<<endl;  
        }
        
           
      
    

    
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        
        Neha cl;
        cl.func();
    }
    return 0;
}