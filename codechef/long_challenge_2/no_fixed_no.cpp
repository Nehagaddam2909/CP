#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
class Test_case_output
{
  public:
  void func(ll n)
  {
      ll j=1;
      ll mn=INT_MAX;
      ll s;
      for(ll i=0;i<n;i++)
      {
          s=i+j;
          mn=min(mn,abs(v[i]-s));
          if(mn==0)
          {
              mn=abs(v[i-1]-(i-1+j));
              j++;    
          }
      }
      if(j!=1)
      {
          cout<<j-1<<endl;
      }
      else
      {
          cout<<0<<endl;
      }
  }
};
int main() {
	// your code goes here
	ll n;
    cin>>n;
    while(n>0)
    {
        ll t,k;
        cin>>t;
        for(ll i=0;i<t;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        Test_case_output tp;
        tp.func(t);
        v.clear();
        n--;
    }
	return 0;
}
