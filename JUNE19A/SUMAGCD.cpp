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
		ll n, maxx = 0, indx = -1, smaxx = -1, smaxind = -1, x;
		cin >> n;
		set<ll> s;
		for(int i = 0; i < n; i++)
		{
			cin >> x;
			s.insert(x);
		}
		
		maxx = *--s.end();
		smaxx = *(--(--s.end()));
			
		if(s.size() == 2)
		{
		    cout << *s.begin() + *++s.begin() << endl;
		    continue;
		}
		
		if(s.size() < 2)
		{
		    cout << 2 * (*s.begin()) << endl;
		    continue;
		}
		
		ll k = s.size(), j = 0, gcd = *s.begin();
		
		for(auto i = s.begin(); j < k - 2; j++, i++)
		{
			gcd = __gcd(gcd, *i);
		}
		
		cout << max(__gcd(smaxx, gcd) + maxx, __gcd(maxx, gcd) + smaxx) << endl;
	}
	return 0;
}