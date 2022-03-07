#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func()
    {
        //int a[8]={6,13,20,27,7,14,21,28};
        int c=8;
        int n,t;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>t;
            if(t!=6 && t!=13 && t!=20 && t!=27 && t!=7 && t!=14 && t!=21 && t!=28 )
                c++;
        }
        cout<<c<<endl;

    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Test te;
        te.func();
    }
    return 0;
}