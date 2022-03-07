#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<string,pair<int,int>> &a,
              const pair<string,pair<int,int>> &b)
{
    if((a.second).first <= (b.second).first)
    {
        return false;
    }
    else 
    {
        return true;
    }
}
 
int main()
{
    
    vector<pair<string,pair<int,int>>>v;
    long long int n,i,j,k,t;
    string s;
    cin>>t;
    while(t>0)
    {
    cin>>n;

    while(n>0)
    {
        
        cin>>s;
        cin>>i;
        cin>>k;
        v.push_back({s,{i,k}});
        n=n-1;
    }
    sort(v.begin(),v.end(),sortbysec);
    for(auto itr=v.begin();itr!=v.end();itr++)
    {
        cout<<itr->first<<" "<<(itr->second).first<<" "<<(itr->second).second<<endl;
    }

  
  
   t=t-1;
    }
    //cout<<pq.top();
return 0;
}