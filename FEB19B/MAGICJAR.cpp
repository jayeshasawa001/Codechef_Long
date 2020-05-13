// MAGICJAR
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,max=0,x;
		cin>>n;
		max=1-n;
		while(n--)
		{
			cin>>x;
			max+=x;
		}
		cout<<max<<endl;
	}
return 0;
}