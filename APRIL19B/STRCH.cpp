// STRCH
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll kya_naam_du(string s1, string s2, int x)
{
    size_t nPos = s1.find(s2,x);
    if(nPos != string::npos)
    	return nPos;
    else return -1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		string s,t;
		cin >> s >> t;
		ll no = 0;
		ll len = s.length();
		int prev = -1;
		ll i;
		for(i = 0; i < len; i++)
		{
			if(s[i] == t[0])
			{
				no += (i - prev) * (n - i);
				prev = i;
			}	
		}
		cout << no <<endl;
	}
}