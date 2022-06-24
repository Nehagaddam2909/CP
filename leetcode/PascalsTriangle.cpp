#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int n) {
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                if(j==0 || j==n-1)
                    temp.push_back(1);
                else
                {
                    temp.push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            v.push_back(temp);
            
        }
        return v;
    }

int main()
{
    vector<vector<int>>v=generate(1);
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}