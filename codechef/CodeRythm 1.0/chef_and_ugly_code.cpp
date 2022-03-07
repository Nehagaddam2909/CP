#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int>v;
	int n,i,k;
	cin>>n;
	while(n>0)
	{
	    cin>>k;
	    if(k>=100)
	    {
	        cout<<"HUNGRY"<<endl;
	        n=n-1;
	        continue;
	    }
	    for(i=1;i<=k;i++)
	    {
	        if(k%i==0)
	        {
	            v.push_back(k);
	        }
	    }
	    if(v.size()>2)
	    {
	        cout<<"HUNGRY"<<endl;
	    }
	    else
	    {
	        cout<<"COOKIES"<<endl;
	    }
	    v.clear();
	    n=n-1;
	}
	return 0;
}
