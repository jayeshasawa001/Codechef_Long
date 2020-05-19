#include<bits/stdc++.h>
#define pb push_back
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

vector <ll> prime;
void primes(ll n)
{
	bool p[n+1];
	ll i,j;
	memset(p,1,sizeof(p));
	p[0]=p[1]=0;
	for(i=2;i<=sqrt(n);i++) if(p[i]) for(j=2;j*i<=n;j++) p[j*i]=0;
	for(i=2;i<=n;i++) if(p[i]) prime.pb(i);
}

vector <ll> fctrs(ll n)
{
	ll r=sqrt(n);
	vector <ll> v;
	for(ll i:prime)
	{
		if(i>r) break;
		if(n%i==0)
		{
			v.pb(i);
			while(n%i==0) n/=i;
		}
	}
	if(n>1) v.pb(n);
	return v;
}

int main()
{
	fast_io;
	ll t,a,b,n;
	primes(31623);
	string s;
	cin>>t;
	while(t--)
	{
		cout<<"1 31623"<<endl;
		cin>>a;
		n=1000014129-a;
		vector <ll> v=fctrs(n);
		n=sqrt(v.back())+1;
		cout<<"1 "<<n<<endl;
		n*=n;
		cin>>b;
		for(ll i:v) if(i>a && n%i==b)
		{
			cout<<"2 "<<i<<endl;
			break;
		}
		cin>>s;
	}
  return 0;
}