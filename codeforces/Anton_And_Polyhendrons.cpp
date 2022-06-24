#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
class Test
{
    public:
    void func(map<string,ll>m)
    {
        ll s=0;
        map<string,ll>m1;
        m1.insert(pair<string,ll>("Tetrahedron",4));
        m1.insert(pair<string,ll>("Cube",6));
        m1.insert(pair<string,ll>("Octahedron",8));
        m1.insert(pair<string,ll>("Dodecahedron",12));
        m1.insert(pair<string,ll>("Icosahedron",20));
        for(auto it:m)
        {
            s+=it.second*m1[it.first];
        }
        cout<<s<<endl;
    }
};
int main()
{
    ll t;
    cin>>t;
    map<string,ll>m;
    while(t--)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    Test tt;
    tt.func(m);
    return 0;
}