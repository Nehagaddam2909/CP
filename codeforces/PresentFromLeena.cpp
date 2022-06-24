#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func(int m);
};
class Neha:public Test
{
    public:
    void func(int m)
    {
        print_pattern((2*m)+1,m);
    }
    void print_pattern(int n,int m)
    {
        int count=1,q=m,ii=0;
        int count1=count,y=0;
        for(int i=0;i<n;i++)
        {
            int k=-1,flag=0;
            int z=i+ii;
            count=count1;
            y-=m-z;
            //cout<<y<<endl;
            for(int j=0;j<=n;j++)
            {
                if(j<=y || count<=0)
                    cout<<" ";
                else
                {
                    
                    if(k<z && flag!=1)
                        k++;
                    else
                    {
                        k--;
                        flag=1;
                    }
                    cout<<k;
                }
                

                
            }
           // y--;
           y--;
            cout<<endl;
            if(i>=m || count1>=n)
            {
               ii-=2;
              // cout<<"#"<<count1<<endl;
                q++;
                count1-=2;
            }
            else
            {
                q--;
                count1+=2;
            }
        }
    }
};
int main()
{
    Neha nn;
    int n;
    cin>>n;
    nn.func(n);
    return 0;
}