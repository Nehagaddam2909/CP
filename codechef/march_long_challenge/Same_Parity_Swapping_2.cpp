#include<bits/stdc++.h>
using namespace std;
int count(string s)
{
    int count=0,i=0;
    while(i<s.length()-1)
    {
        if(s[i]=='0' && s[i+1]=='1')
        {
            count++;
            i+=2;
        }
        else
        {
            i+=1;
        }
    }
    return count;
}
string merge(string s1,string s2)
{
    string s;
    int i=0;
    while(i<s1.length())
    {
        s+=s1[i];
        if(i<s2.length())
            s+=s2[i];
        i++;
    }
    return s;
}
void func(string s)
{
   // sort(s.begin(),s.end(),[&v]);
   string s1,s2;
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
            s1+=s[i];
        else 
            s2+=s[i];
    }
    int final_count=0;
    sort(s1.begin(),s1.end());
    sort(s2.rbegin(),s2.rend());
    string m1=merge(s1,s2);
    final_count=max(final_count,count(m1));
    
    
    reverse(s2.begin(),s2.end());
    string m2=merge(s1,s2);
    final_count=max(final_count,count(m2));

    reverse(s1.begin(),s1.end());
    string m3=merge(s1,s2);
    final_count=max(final_count,count(m3));

    reverse(s2.begin(),s2.end());
    string m4=merge(s1,s2);
    final_count=max(final_count,count(m4));

    //return final_count;
    cout<<final_count<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    func(s);
    }
    return 0;
}