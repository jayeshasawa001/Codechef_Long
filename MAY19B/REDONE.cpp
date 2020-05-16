// REDONE
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll N = 1000000007;
ll arr[1000002];

void preProcess()
{
	arr[0] = 1;
	for(int i = 1; i < 1000002; i++)
	{
		arr[i] = (arr[i - 1] * i) % N;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	preProcess();
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << arr[n + 1] - 1 << endl;
	}
	return 0;
}