#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn=1e5;
int mod=1e9+7;
ll dp[maxn];
int main() {
	// your code goes here
	int t;
	cin>>t;
	dp[0]=1;
	for(int i=1;i<maxn;i++)
	{
	    dp[i]=dp[i-1]*2 % mod; 
	}
	while(t--){
	
	int n;
	cin>>n;
	cout<<dp[n-1]<<endl;}
	return 0;
}
