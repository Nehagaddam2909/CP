#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func(int n);
};
class Neha:public Test
{
    public:
    void func(int n)
    {
        vector<int>v;
        int k;
        for(int i=0;i<7;i++)
        {
            cin>>k;
            v.push_back(k);

        }
        check(v,n);
    }
    void check(vector<int>v,int m)
    {
        int i=0;
        while(m>0)
        {
        i=0;
        while( i<7)
        {
            m=m-v[i];
            if(m<=0)
                break;
            i++;
        }
        if(m<=0)
            break;
        }
        
        cout<<++i<<endl;
    }

};
int main()
{
    int n;
    cin>>n;
    Neha nn;
    nn.func(n);
    return 0;
}