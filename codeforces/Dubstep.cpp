#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::string s;
    cin>>s;
    //cout<<s;
    
    string s_pattern="WUB";
    int i=s.find(s_pattern);
    do
    {
        s.erase(i,s_pattern.length());
        //s+=' ';
        if(i!=0)
            cout<<typeid(s[i-1]);
            //s.insert(i," ");
        i=s.find(s_pattern,i);
    }while(i!=string::npos);
    //cout<<s<<endl;
    return 0;
}