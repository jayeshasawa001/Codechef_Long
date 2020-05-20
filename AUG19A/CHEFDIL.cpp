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
		string s;
		cin >> s;
		int n = s.length(), x = 0;
		
		for(int i = 0; i < n; i++)
		{
			x += s[i] - '0';
		}
		
		if(x & 1)
			cout << "WIN" << endl;
		else cout << "LOSE" << endl;
	}
return 0;
}