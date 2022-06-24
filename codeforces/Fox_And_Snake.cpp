/* Author: neha gaddam */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll x,ll y)
    {
        ll flag=-1;
        ll past=1;
        for(ll i=0;i<x;i++)
        {
            for(ll j=0;j<y;j++)
            {
                if(flag==1 && j>0)
                    cout<<".";
                
                else if(flag==0 && j<y-1)
                    cout<<".";
                
                else
                    cout<<"#";

            }
            if(i%2==0)
                flag=!past;
            else
            {
                if(flag!=-1)
                    past=flag;
                flag=-1;
            }
            

            cout<<endl;
        }
       // cout<<endl;
    }
};
int main()
{
    
        ll x,y;
        cin>>x>>y;
        Test tt;
        tt.func(x,y);
    
    return 0;
}