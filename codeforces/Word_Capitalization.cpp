#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func(string s)
    {
        if(isupper(s[0]))
            cout<<s<<endl;
        else{
           //s[0]=to_upper(s[0]);
           string s1="";
            s1+=toupper(s[0]);
            s1+=s.substr(1,s.length()-1);
            cout<<s1<<endl;
        }

    }
};
int main()
{
    string sl;
    cin>>sl;
    Test tt;
    tt.func(sl);

    return 0;
}