#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(int a)
    {
        ll k=pow(2,a)-1;
        cout<<k<<endl;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        Test tt;
        tt.func(a);
    }
    return 0;
}