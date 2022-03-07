#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int>v;
	vector<int>v1;
	int n,n1,t1,m,count=0;
	cin>>n;
	while(n>0)
	{
		
		cin>>n1;
		for(int i=0;i<n1;i++)
		{
			cin>>t1;
			v.push_back(t1);
		}
		count=0;
		for(int j=0;j<n1;j++)
		{
			//cout<<10%100<<endl;
			for(int i=1;i<n1;i++)
			{
				if(v[i-1]%v[j]==0 && v[i]%v[j]==0)
				{
					//cout<<v[j]<<endl;
					break;
				}
				else if(v[i-1]%v[j]!=0 && v[i]%v[j]!=0)
				{
					//cout<<v[j]<<endl;
					break;
				}
				else if(i==n1-1)
				{
					m=v[j];
				}
			}
		}
		
			cout<<m<<endl;
	
		
			//cout<<0<<endl;
		
			
		v.clear();
		m=0;
		n=n-1;
	}
}