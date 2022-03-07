#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,j,i;
    string s;
    cin>>n;
    while(n>0)
    {
        cin>>s;
        k=s.find("21");
        if(k==string::npos)
        {
            i=stoi(s);
            if(i%21==0)
            {
                cout<<"The streak is broken!\n";
            }
            else
            {
                cout<<"The streak lives still in our heart!\n";
            }
        }
        else
        {
            cout<<"The streak is broken!"<<endl;
        }
        n--;
    }
    return 0;
}