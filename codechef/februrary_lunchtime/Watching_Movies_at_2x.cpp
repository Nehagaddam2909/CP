#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(ll X,ll Y)
    {
        ll break1=Y/2;
        ll time=(X-Y)+break1;
        cout<<time<<endl;
    }
};
int main()
{
    
        ll a,b;
        cin>>a>>b;
        Test t;
        t.func(a,b);
    
    return 0;
}