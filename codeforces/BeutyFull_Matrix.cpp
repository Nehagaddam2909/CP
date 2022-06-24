#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func()
    {
        int a[5][5];
        int output;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>a[i][j];
                if(a[i][j]==1)
                {
                    output=abs(2-i)+abs(2-j);
                }
            }
        }
        cout<<output<<endl;
    }
};
int main()
{
    Test tt;
    tt.func();
    return 0;
}