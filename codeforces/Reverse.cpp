#include<bits/stdc++.h>
using namespace std;
class Test
{
    public:
    void func()
    {
        int a,b;
        multiset<int>m;
        cin>>a;
        int flag=0,c=0;
        int arr[a];
        int temp;
        int i=0;
        for(i=0;i<a;i++)
        {
            cin>>arr[i];
            m.insert(arr[i]);   
        }
        i=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            //cout<<*it<<endl;
            if(arr[i]!=*it && flag==0)
            {
                //cout<<i<<" ";
                c=arr[i];
                arr[i]=*it;
                temp=*it;
                flag=1;
                i++;
                continue;
                //cout<<temp<<" ";
            }
            if(flag==1 && temp==arr[i])
            {
                arr[i]=c;
               // cout<<i<<" ";
                break;
            }
            i++;
        }
        for(i=0;i<a;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Test tt;
        tt.func();
    }
    return 0;
}