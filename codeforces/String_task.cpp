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
        for(int i=0;i<s.length();i++)
        {
            char c=tolower(s[i]);
            if(!is_vowel(c))
            {
                s1+='.';
                s1+=c;
            }
            //if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' || s[i]=='o'  s[i]=='a')
        }
        cout<<s1<<endl;
    }
    bool is_vowel(char c)
    {
        if(c=='a' || c=='o' || c=='y' || c=='e' || c=='u' || c=='i')
            return true;
        else
            return false;

    }
};
int main()
{
    string s;
    cin>>s;
    Neha nn;
    nn.func(s);
    return 0;
}