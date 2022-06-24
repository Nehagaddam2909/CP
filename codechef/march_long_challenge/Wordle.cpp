#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func(string s,string s1)
    {
        string s2;
        for(int i=0;i<5;i++)
        {
            if(s[i]==s1[i])
                s2+='G';
            else
                s2+='B';

        }
        cout<<s2<<endl;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        Test tt;
        tt.func(s1,s2);
    }
    return 0;
}