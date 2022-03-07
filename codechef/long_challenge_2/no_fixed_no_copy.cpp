#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
ll a[1001][1001];
class Test_case_output
{
  public:
  ll mm,nn;
  Test_case_output(ll t,ll k)
  {
      this->mm=t;
      this->nn=k;
  }
 ll calculate(ll z,ll div1, ll it,ll s)
 {
     ll k=z/div1;
     s+=k*it;
     ll m=z%div1;
     
     if(m!=0)
     s+=it;
     return s;
 }
  void func(ll n)
  {

    if(n<=100 and mm==nn)
    {
        cout<<mm<<endl;
    }
    else if(n<100)
    {
        ll s=this->calculate(n,4,nn,0);
        cout<<s<<endl;
    }
    else
    {
        ll k1=(n/100);
        ll z1=n%100;
      ll k2=(n/4);
      ll z2=n%4;
      ll s1=k1*mm;
      s1=this->calculate(z1,4,nn,s1);
      ll s2=k2*mm+z2*nn;
      s2=this->calculate(z2,100,mm,s2);
      cout<<min(s1,s2)<<endl;  
      
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
            cin>>k;
            ll q;
            cin>>q;
        Test_case_output tp(k,q);
        tp.func(t);
        //cout<<z<<endl;
        n--;
    
    }
    
        
	return 0;
}
