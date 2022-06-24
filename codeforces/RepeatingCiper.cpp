#include<bits/stdc++.h>
using namespace std;
class Test
{
    public: void func(int n,string s);
};
class Neha:public Test
{
    public:
    void func(int n,string s)
    {
        int j=1,i=1;
        string s1="";
        //j=(i*(i-1))/2;
        while(j<=n)
        {
            s1+=the_char_is(s,j);
            //cout<<j<<endl;
            //s1+=s[j-1];
            i++;
            j=(i*(i+1))/2;
            if(j>n)
                break;
           
            //cout<<j-1<<" ";
            
        }

        cout<<s1<<endl;
    }
    char the_char_is(string s,int i)
    {
        return s[i-1];
    }

};
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    Neha nn;
    nn.func(n,s);
    return 0;
}