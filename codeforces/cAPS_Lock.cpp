#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func(string s);
};
class Neha: public Test
{
    public:
    void func(string s)
    {
        string s1;
        int c=0,n=s.length(),c1=0;
        for(int i=0;i<n;i++)
        {
            if(isupper(s[i]))
                c++;
            else if(i>0)
                c1++;
            if(i>0)
                s1+=tolower(s[i]);
            
        }
        //cout<<c1<<endl;
        if(c1>0)
            cout<<s<<endl;
        else
        {
            char q;
            if(c==n)
                q=tolower(s[0]);
            else
                q=toupper(s[0]);
            s1=q+s1;
            cout<<s1<<endl;
        }
    }
};
int main()
{
    string sl;
    cin>>sl;
    Neha nn;
    nn.func(sl);
    return 0;
}