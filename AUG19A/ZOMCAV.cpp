//https://www.hackerrank.com/challenges/crush/problem?isFullScreen=true
//Prefix Sum

/*
Note that this solution works because it is being queried only once. If it is queried m times, then this solution doesn't work because it will time out. Then you will have to dig deeper using advanced data structures like segment trees and/or binary indexed trees. 
*/
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
		int h[n+1], c[n+1];
		for(int i = 1; i <= n; i++)
		{
			cin >> c[i];
		}
		
		for(int i = 1; i <= n; i++)
		{
			cin >> h[i];
		}
		
		int ans[n+2] = {0}, l, r, radiations[n+1] = {0};
		
		for(int i = 1; i <= n; i++)
		{
			l = i-c[i];
			if(l < 1)
				l  = 1;
			r = i+c[i];
			if(r > n)
				r = n;
			
			ans[l] += 1;
			ans[r+1] -= 1;
		}
		
		for(int i = 1; i <= n; i++)
		{
			radiations[i] = radiations[i-1] + ans[i];
		}
		
		sort(h+1, h+n+1);
		sort(radiations+1, radiations + n + 1);
		int i;
		for(i = 1; i <= n; i++)
		{
			if(radiations[i] != h[i])
				break;
		}
		
		cout << (i > n ? "YES" : "NO") << endl;
	}
	return 0;
}