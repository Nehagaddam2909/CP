#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func(string s,int n);
};
class Neha : public Test
{
    public:
    void func(string s, int n)
    {
        
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        Neha nn;
        nn.func(s,n);
    }
    return 0;
}