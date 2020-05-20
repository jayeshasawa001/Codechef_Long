#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define EB emplace_back
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin >> t;
	while(t--)        //Handle 0 case before submitting..... ******
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		
		map <ll,vector<ll>> m;
		m[0].PB(-1);
		m[a[0]].PB(0);
		for(int i = 1; i < n; i++)
		{
			a[i] ^= a[i-1];
			m[a[i]].PB(i);		
		}
		
		ll ans = 0;
		for(auto &v : m)
		{
			ll x = v.S.size() - 1, tmp;
			for(int i = 1; i < x + 1; i++)
			{
				tmp = v.S[i] - v.S[i-1];
				ans += ((tmp * x) + (i-1) * (x-i) * tmp);
			}
			ans -= (x * (x+1) / 2);
		}
		
		cout << ans << endl;
	}
	return 0;
}
//Help from....
//https://algorithms.tutorialhorizon.com/sum-of-all-sub-arrays-in-on-time/