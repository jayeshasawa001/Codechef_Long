// MAXREM
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	 
	ll n,i = 1;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n, greater<int>());
	for(i = 1; a[0] == a[i] && i < n; i++);
	if(i == n) cout << 0 << endl;
	else cout << a[i] << endl;
}