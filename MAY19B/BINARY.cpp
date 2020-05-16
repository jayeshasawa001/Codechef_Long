// BINARY
#include <bits/stdc++.h>
#define IOIOIO ios_base::sync_with_stdio(0); cin.tie(NULL);	cout.tie(NULL)
#define ll long long
using namespace std;

int main()
{
	IOIOIO;
	ll t;
	cin >> t;
	
	while(t--)
	{
		ll n, z;
		cin >> n >> z;
		bool a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		while(z--)
		{
			for(int i = 0; i < n - 1; i++)
			{
				if(a[i] == 0 && a[i+1] == 1)
				{
					a[i] = 1;
				 	a[i+1] = 0;
				 	i++;
				}
			}
		}
		for(int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;	
}