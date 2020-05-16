// MATCHS
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
		ll n, m, k;
		cin >> n >> m;
		if(n < m) swap(n, m);
		bool flag = true;
		while(1){
			if(n % m ==0 || n / m >= 2)
				break;
			else {
				n = n % m;
				swap(n,m);
				flag = !flag;
			}
		}
		if(flag) cout << "Ari\n" << endl;
		else cout << "Rich\n" << endl;
	}
	return 0;
}