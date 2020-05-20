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
	while(t--) 
	{
		int n;
		cin >> n;
		int a[n], b[n], ans[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		
		for(int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		
		for(int i = 0; i < n; i++)
		{
			ans[i] = a[i]*20 - b[i]*10;
			if(ans[i] < 0)
				ans[i] = 0;
		}
		
		cout << *max_element(ans, ans+n) << endl;
	}
	return 0;
}