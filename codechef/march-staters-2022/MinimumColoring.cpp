/* author- Neha Gaddam */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll n,ll m,ll x1,ll y1,ll x2,ll y2)
    {
        ll a[n+1][m+1];
        //cout<<a[1][0]<<" ";
        ll c=3;
        a[x1][y1]=1;
        a[x2][y2]=2;
       
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=m;j++)
            {
               
                    if(a[i-1][j]!=a[x1][y1] && a[i][j-1]!=a[x1][y1] && a[i+1][j]!=a[x1][y1] && a[i][j+1]!=a[x1][y1])
                    {
                        a[i][j]=a[x1][y1];
                    }
                    else if(a[i-1][j]!=a[x2][y2] && a[i][j-1]!=a[x2][y2] && a[i+1][j]!=a[x2][y2] && a[i][j+1]!=a[x2][y2])
                    {
                        a[i][j]=a[x2][y2];
                    }
                     else if(a[i-1][j]!=c && a[i][j-1]!=c && a[i+1][j]!=c && a[i][j+1]!=c)
                    {
                        a[i][j]=c;
                    }
                    else
                    {
                        a[i][j]=++c;
                    }
                    
                
              cout<<a[i][j]<<" ";  
                
            }
            
            cout<<endl;
        }
        


    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,y1,x2,y2,n,m;
        cin>>n>>m>>x1>>y1>>x2>>y2;
        Test tt;
        tt.func(n,m,x1,y1,x2,y2);
    }
    return 0;
}