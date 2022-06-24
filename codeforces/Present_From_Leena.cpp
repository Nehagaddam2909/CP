#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func(int n);
};
class Neha: public Test
{
    public:
    void func(int n)
    {
        printing_pattern(2*n,n);
    }
    void printing_pattern(int row,int m)
    {
        int col=2*row;
        int q=row,flag=0,flag1=0,k=-1,count1=1;
        int count=count1;
        for(int i=0;i<=row;i++)
        {
            count=count1;
            flag1=0;
            k=-1;
            
            for(int j=0;j<=col+1;j++)
            {
                if(q!=0)
                {
                if(j%q==0 && count>0 && j>0)
                {
                    if(k<i && flag1!=1)
                        k++;
                    else
                    {
                        k--;
                        flag1=1;
                    }
                    cout<<k;
                    count--;


                }
                else
                    cout<<" ";
                }
                else
                {
                    if(j%2!=0 && count>0)
                    {
                        if(k<i && flag1!=1)
                            k++;
                        else
                        {
                            k--;
                            flag1=1;
                        }
                        cout<<k;
                        count--;
                    }
                    else
                        cout<<" ";
                }
            }
            if(q==0)
                flag=1;
            //#cout<<q<<endl;
            if(flag!=1)
            {
                q=q-2;
                count1+=2;
            }
            else
            {
                q+=2;
                count1-=2;
            } 
            
            cout<<endl;
        }
    }
};
int main()
{
    Neha nn;
    nn.func(2);
    return 0;
}