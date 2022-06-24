#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Neha 
{
    public:
    void func(string s)
    {
        if(isEven(s))
        {
            cout<<"CHAT WITH HER!"<<endl;
        }
        else
        {
            cout<<"IGNORE HIM!"<<endl;
        }
    }
    bool isEven(string s)
    {
        set<char>s1(s.begin(),s.end());

        if(s1.size()%2==0)
            return true;
        else    
            return false;
    }
};
int main()
{
    string s;
    cin>>s;
    Neha n;
    n.func(s);
    return 0;
}