#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func(string s)
    {
        //string s1,s2,s3,s4,s5;
        string s1;
        vector<string>v;
        for(int i=0;i<5;i++)
        {
            cin>>s1;
            v.push_back(s1);
        }
        int j=0,flag=0;
        while(j<2)
        {
        for(int i=0;i<5;i++)
        {
            s1=v[i];
            if(s[j]==s1[j])
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
        j++;
        }
        if(flag==0)
            cout<<"NO"<<endl;
    }
};
int main()
{
    string s;
    cin>>s;
    Test tt;
    tt.func(s);
    return 0;
}