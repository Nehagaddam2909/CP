#include<bits/stdc++.h>
using namespace std;
class Test{

public:
void func(int m)
{
    double d=pow((0.143*m),m);
    int a=d;
    double c=d-a;
    if(c<0.5)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<a+1<<endl;
    }
}
};
int main()
{

    int n;
    cin>>n;
    while(n>0)
    {
        int j;
        Test t;
        cin>>j;
        t.func(j);
        n--;
    }
    return 0;
}