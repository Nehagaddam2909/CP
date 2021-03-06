#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
ll powerLL(ll x, ll n)
{
	ll result = 1;
	while (n) {
		if (n & 1)
			result = result * x % MOD;
		n = n / 2;
		x = x * x % MOD;
	}
	return result;
}
ll powerStrings(string sa, string sb)
{
	// We convert strings to number

	ll a = 0, b = 0;

	// calculating a % MOD
	for (int i = 0; i < sa.length(); i++)
		a = (a * 10 + (sa[i] - '0')) % MOD;

	// calculating b % (MOD - 1)
	for (int i = 0; i < sb.length(); i++)
		b = (b * 10 + (sb[i] - '0')) % (MOD - 1);

	// Now a and b are long long int. We
	// calculate a^b using modulo exponentiation
	return powerLL(a, b);
}

int main()
{
	int k;
    cin>>k;
    while(k--)
    {
        string sa="2" , sb;
        cin>>sb;
        cout << powerStrings(sa, sb)/2 << endl;
    }
	

	
	return 0;
}
