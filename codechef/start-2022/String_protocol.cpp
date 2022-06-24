#include<bits/stdc++.h>
using namespace std;

class Temp
{

    public:
    map<char,int>m;
    void func(int s,string st)
    {
        char c=st[0];
        int count=1;
        int flag=0;
        for(int i=1;i<s;i++)
        {
           if(st[i]!=c && c!='#')
            {
                count++;
                c=st[i];
            }
            else if(c=='#')
            {
                c=st[i];
                count++;
            }
            else
            {
                c='#';
            }
   
        }
       cout<<min(s,count)<<endl;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int le;
        string st;
        cin>>le>>st;
        Temp tt;
        tt.func(le,st);
    }
    return 0;
}