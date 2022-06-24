#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func(string s)
    {
        multiset<int>m;
        for(int i=0;i<s.length();i+=2)
        {
            m.insert(int(s[i]));
        }
        string s1;
        auto it=m.begin();
        s1+=*it;
        it++;
        for(int i=0;i<s.length() && it!=m.end();i+=2)
        {
            
            s1+='+';
            s1+=*it;
            it++;
        }
        cout<<s1<<endl;
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