#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number_of_friends,height_of_the_fench;
    cin>>number_of_friends>>height_of_the_fench;
    int c=0,t;
    for(int i=0;i<number_of_friends;i++)
    {
        cin>>t;
        if(t<=height_of_the_fench)
        {
            c++;
        }
        else
        {
            c+=2;
        }
    }
    cout<<c<<endl;
    return 0;
}